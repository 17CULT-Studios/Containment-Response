// Fill out your copyright notice in the Description page of Project Settings.


#include "SCP_173_Penut.h"
#include "Engine/World.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SCP_173_AIController.h"
#include "EngineUtils.h"

#include "NavigationSystem.h"
//#include "AI/Navigation/NavigationSystem.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "NavigationPath.h"
#include "Net/UnrealNetwork.h"
#include "DrawDebugHelpers.h"
#include "EngineUtils.h"

ASCP_173_Penut::ASCP_173_Penut()
{
    bReplicates = true;

    PrimaryActorTick.bCanEverTick = true;

    CollisionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    CollisionCapsule->InitCapsuleSize(42.f, 96.f);
    CollisionCapsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    CollisionCapsule->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
    CollisionCapsule->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
    CollisionCapsule->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    RootComponent = CollisionCapsule;
    SCPMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SCPMesh"));
    SCPMesh->SetupAttachment(RootComponent);
    SCPMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    SCPMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
    SCPMesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
    SCPMesh->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
    SCPMesh->SetSimulatePhysics(false);
    SCPMesh->SetEnableGravity(false);
    MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
    MovementComponent->UpdatedComponent = CollisionCapsule;
    HeadComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HeadComponent"));
    HeadComponent->SetupAttachment(CollisionCapsule);
    HeadComponent->SetRelativeLocation(FVector(0.f, 0.f, 80.f));
    bIsActive = false;
    bIsChasingPlayer = false;
    TimeSinceLastSeen = 0.f;
    DeactivationDelay = 60.f;

    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    UE_LOG(LogTemp, Warning, TEXT("Capsule collision enabled: %d"), (int)CollisionCapsule->GetCollisionEnabled());
    UE_LOG(LogTemp, Warning, TEXT("Capsule object type: %d"), (int)CollisionCapsule->GetCollisionObjectType());
    UE_LOG(LogTemp, Warning, TEXT("Capsule visibility response: %d"),
        (int)CollisionCapsule->GetCollisionResponseToChannel(ECC_Camera));
}

void ASCP_173_Penut::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(ASCP_173_Penut, ReplicatedRotation)
}

void ASCP_173_Penut::BeginPlay()
{
    Super::BeginPlay();
    AIController = Cast<ASCP_173_AIController>(GetController());
    FindClosestPlayer();
    if (!AIController)
    {
        if (debug)
        {
            UE_LOG(LogTemp, Error, TEXT("SCP AIController is NULL! SCP will not move."));
        }
    }
}

void ASCP_173_Penut::OnRep_ReplicatedRotation()
{
    SCPMesh->SetWorldRotation(ReplicatedRotation);
}

void ASCP_173_Penut::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FindClosestPlayer();

    if (!TargetPlayer || !AIController) return;

    if (bIsActive)
    {
        bool bSeen = IsObserved();
        if (debug)
        {
            UE_LOG(LogTemp, Warning, TEXT("Observed: %s"), bSeen ? TEXT("YES") : TEXT("NO"));
        }
        if (bSeen)
        {
            if (debug)
            {
                UE_LOG(LogTemp, Warning, TEXT("SCP IS BEING WATCHED"));
            }
            TimeSinceLastSeen = 0.0f;
            AIController->StopMoving();
        }
        else
        {
            if (debug)
            {
                UE_LOG(LogTemp, Warning, TEXT("SCP IS NOT BEING WATCHED"));
            }
            TimeSinceLastSeen += DeltaTime;
            AIController->ChasePlayer(TargetPlayer);

            if (TimeSinceLastSeen >= DeactivationDelay)
            {
                DeactivateSCP();
            }
        }
        if (debug)
        {
            DrawDebugSphere(GetWorld(), SCPMesh->GetComponentLocation(), 30.f, 12, bSeen ? FColor::Green : FColor::Red, false, 1.f);
        }
    }
    else
    {
        float Distance = FVector::Dist(GetActorLocation(), TargetPlayer->GetActorLocation());
        if (Distance < 1500.f && IsObserved())
        {
            ActivateSCP();
        }
    }

    if (HasAuthority())
    {
        FVector CurrentLocation = GetActorLocation();
        FVector MovementDelta = CurrentLocation - LastLocation;

        if (!MovementDelta.IsNearlyZero())
        {
            FRotator Direction = MovementDelta.Rotation();
            FRotator MeshOffset(0.0f, 90.0f, 0.0f);
            Direction += MeshOffset;
            ReplicatedRotation = Direction;
            SCPMesh->SetWorldRotation(Direction);
        }
        LastLocation = CurrentLocation;
    }
}

void ASCP_173_Penut::ActivateSCP()
{
    bIsActive = true;
    TimeSinceLastSeen = 0.f;
    if (debug)
    {
        UE_LOG(LogTemp, Warning, TEXT("Activated"));
    }
}

void ASCP_173_Penut::DeactivateSCP()
{
    bIsActive = false;
    bIsChasingPlayer = false;
    TimeSinceLastSeen = 0.f;
    TeleportToRandomLocation();
    if (debug)
    {
        UE_LOG(LogTemp, Warning, TEXT("Deactivated"));
    }
}

void ASCP_173_Penut::FindClosestPlayer()
{
    float ClosestDistance = FLT_MAX;
    ACharacter* Closest = nullptr;

    for (TActorIterator<APawn> It(GetWorld()); It; ++It)
    {
        APawn* Pawn = *It;
        if (!Pawn || Pawn == this) continue;

        if (Pawn->IsPlayerControlled())
        {
            float Distance = FVector::Dist(GetActorLocation(), Pawn->GetActorLocation());
            if (Distance < ClosestDistance)
            {
                ClosestDistance = Distance;
                Closest = Cast<ACharacter>(Pawn);
            }
        }
    }

    TargetPlayer = Closest;
}

bool ASCP_173_Penut::IsObserved()
{
    UWorld* World = GetWorld();
    if (!World) return false;

    FVector SCPViewTarget = CollisionCapsule->GetComponentLocation();

    for (TActorIterator<APawn> It(World); It; ++It)
    {
        APawn* ObserverPawn = *It;
        if (!ObserverPawn || ObserverPawn == this) continue;

        AController* ObserverController = ObserverPawn->GetController();
        if (!ObserverController) continue;

        FVector ViewLoc;
        FRotator ViewRot;

        ObserverController->GetPlayerViewPoint(ViewLoc, ViewRot);

        FVector DirectionToSCP = (SCPViewTarget - ViewLoc).GetSafeNormal();
        FVector ObserverForward = ViewRot.Vector();

        float Angle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(ObserverForward, DirectionToSCP)));

        if (debug)
        {
            UE_LOG(LogTemp, Warning, TEXT("[%s] Angle to SCP: %f"), *ObserverPawn->GetName(), Angle);
            DrawDebugLine(World, ViewLoc, SCPViewTarget, FColor::White, false, 0.1f, 0, 1.f);
        }

        if (Angle > playerFOV) continue;

        FHitResult Hit;
        FCollisionQueryParams Params;
        Params.AddIgnoredActor(ObserverPawn);
        Params.AddIgnoredActor(this);

        bool bHit = World->LineTraceSingleByChannel(Hit, ViewLoc, SCPViewTarget, ECC_Visibility, Params);

        if (debug && bHit)
        {
            DrawDebugLine(World, ViewLoc, Hit.Location, FColor::Red, false, 0.1f, 0, 1.f);
            UE_LOG(LogTemp, Warning, TEXT("Hit: %s"), *Hit.GetActor()->GetName());
        }

        if (!bHit || Hit.GetActor() == this)
        {
            // Observer sees SCP
            return true;
        }
    }
    return false;
}

void ASCP_173_Penut::TeleportToRandomLocation()
{
    float TeleportRadius = 2000.0f;

    UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
    if (NavSystem)
    {
        FVector Origin = GetActorLocation();

        FNavLocation RandomNavPoint;

        if (NavSystem->GetRandomPointInNavigableRadius(Origin, TeleportRadius, RandomNavPoint))
        {
            SetActorLocation(RandomNavPoint);
            if (debug)
            {
                UE_LOG(LogTemp, Warning, TEXT("Teleporting to valid point at: %s"), *RandomNavPoint.Location.ToString());
            }
        }
        else
        {
            if (debug)
            {
                UE_LOG(LogTemp, Warning, TEXT("No valid point found on NavMesh for teleportation."));
            }
        }
    }
}

