// Fill out your copyright notice in the Description page of Project Settings.


#include "CRT_Unit_AIController.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "GameFramework/Pawn.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "UObject/ConstructorHelpers.h"


void ACRT_Unit_AIController::BeginPlay()
{
    Super::BeginPlay();
    SetActorTickEnabled(true);
}

void ACRT_Unit_AIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ACRT_Unit_AIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
    UE_LOG(LogTemp, Log, TEXT("OnPossess called for: %s"), *InPawn->GetName());

    if (!BlackboardComp)
    {
        UE_LOG(LogTemp, Error, TEXT("BlackboardComp is null!"));
    }

    if (!BehaviorTreeAsset)
    {
        UE_LOG(LogTemp, Error, TEXT("BehaviorTreeAsset is null!"));
    }

    if (BehaviorTreeAsset && BlackboardComp)
    {
        bool bBBInit = UseBlackboard(BehaviorTreeAsset->BlackboardAsset, BlackboardComp);

        if (bBBInit)
        {
            RunBehaviorTree(BehaviorTreeAsset);
            UE_LOG(LogTemp, Log, TEXT("Behavior Tree started."));

            APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
            if (PlayerPawn)
            {
                BlackboardComp->SetValueAsObject("TargetPlayer", PlayerPawn);
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Blackboard failed to initialize in OnPossess."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("BehaviorTreeAsset or BlackboardComp is null in OnPossess."));
    }
}

ACRT_Unit_AIController::ACRT_Unit_AIController()
{

    BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
    BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComponent"));

    // Optional: Load a default BT asset (can also be set in Blueprint)
    static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTAsset(TEXT("/Game/AI/CRT_UNIT/BT_CRT_Unit.BT_CRT_Unit")); // Adjust path
    if (BTAsset.Succeeded())
    {
        BehaviorTreeAsset = BTAsset.Object;
        UE_LOG(LogTemp, Log, TEXT("BehaviorTreeAsset loaded successfully: %s"), *BehaviorTreeAsset->GetName());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load BehaviorTreeAsset."));
    }

}
