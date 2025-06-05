// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_049_Controller.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Navigation/PathFollowingComponent.h"
#include "NavigationSystem.h"
#include "GameFramework/Character.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

AAI_049_Controller::AAI_049_Controller()
{
    PrimaryActorTick.bCanEverTick = true;

    PerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp"));
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));

    SightConfig->SightRadius = 1500.0f;
    SightConfig->LoseSightRadius = 1600.0f;
    SightConfig->PeripheralVisionAngleDegrees = 90.0f;
    SightConfig->SetMaxAge(5.0f);

    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
    SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
    SightConfig->DetectionByAffiliation.bDetectFriendlies = true;

    PerceptionComp->ConfigureSense(*SightConfig);
    PerceptionComp->SetDominantSense(SightConfig->GetSenseImplementation());
    PerceptionComp->OnTargetPerceptionUpdated.AddDynamic(this, &AAI_049_Controller::OnTargetPerceptionUpdated);

    CurrentState = EEnemyState::Wandering;
}

void AAI_049_Controller::BeginPlay()
{
    Super::BeginPlay();
    Wander();
}

void AAI_049_Controller::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
    Super::OnMoveCompleted(RequestID, Result);

    if (Result.Code == EPathFollowingResult::Success)
    {
        if (CurrentState == EEnemyState::Wandering)
        {
            Wander();
        }
        else if (CurrentState == EEnemyState::Chasing)
        {
            if (PlayerActor)
            {
                APawn* ControlledPawn = GetPawn();
                if (!ControlledPawn) return;

                float Dist = FVector::Dist(ControlledPawn->GetActorLocation(), PlayerActor->GetActorLocation());
                if (Dist > 250.0f)
                {
                    if (GetMoveStatus() != EPathFollowingStatus::Moving)
                    {
                        MoveToActor(PlayerActor);
                    }
                    else
                    {
                        //close to player in kill zone
                    }
                }
            }
        }
    }
}

void AAI_049_Controller::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (CurrentState == EEnemyState::Chasing && PlayerActor)
    {
        APawn* ControlledPawn = GetPawn();
        if (!ControlledPawn) return;
        
        float DistanceToPlayer = FVector::Dist(ControlledPawn->GetActorLocation(), PlayerActor->GetActorLocation());
        if (DistanceToPlayer > 100.0f)
        {
            MoveToActor(PlayerActor);
        }
    }
}

void AAI_049_Controller::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    if (Stimulus.WasSuccessfullySensed())
    {
        if (CurrentState != EEnemyState::Chasing)
        {
            StartChase(Actor);
        }
    }
    else
    {
        if (CurrentState == EEnemyState::Chasing)
        {
            GetWorldTimerManager().SetTimer(LostSightTimer, this, &AAI_049_Controller::SearchTimeout, TimeToForgetPlayer, false);
        }
    }
}

void AAI_049_Controller::StartChase(AActor* Target)
{
    GetWorldTimerManager().ClearTimer(LostSightTimer);
    PlayerActor = Target;
    CurrentState = EEnemyState::Chasing;
    bIsChasing = true;
    bIsWandering = false;

    MoveToActor(PlayerActor);

    UE_LOG(LogTemp, Warning, TEXT("Chasing player!"));
}

void AAI_049_Controller::StopChase()
{
    PlayerActor = nullptr;
    CurrentState = EEnemyState::Wandering;
    bIsChasing = false;
    bIsWandering = true;
    Wander();

    UE_LOG(LogTemp, Warning, TEXT("Lost player. Wandering again."));
}

void AAI_049_Controller::Wander()
{
    UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
    if (NavSystem && GetPawn())
    {
        FVector Origin = GetPawn()->GetActorLocation();
        FNavLocation RandomLocation;

        if (NavSystem->GetRandomReachablePointInRadius(Origin, 1000.0f, RandomLocation))
        {
            MoveToLocation(RandomLocation.Location);
            CurrentState = EEnemyState::Wandering;
            bIsWandering = true;
        }
    }
}

void AAI_049_Controller::SearchTimeout()
{
    if (CurrentState == EEnemyState::Chasing)
    {
        StopChase();
    }
}
