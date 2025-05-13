// Fill out your copyright notice in the Description page of Project Settings.


#include "SCP_103_Penut.h"
#include "Engine/World.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SCP_103_AIController.h"
#include "EngineUtils.h"

ASCP_103_Penut::ASCP_103_Penut()
{
    PrimaryActorTick.bCanEverTick = true;
    CollisionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    CollisionCapsule->InitCapsuleSize(42.f, 96.f);
    CollisionCapsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    CollisionCapsule->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
    CollisionCapsule->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    RootComponent = CollisionCapsule;
    SCPMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SCPMesh"));
    SCPMesh->SetupAttachment(RootComponent);
    SCPMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    SCPMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
    SCPMesh->SetRelativeLocation(FVector(0.f, 0.f, -96.f));
    SCPMesh->SetSimulatePhysics(false);
    SCPMesh->SetEnableGravity(false);
    MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
    MovementComponent->UpdatedComponent = SCPMesh;
    bIsActive = false;
    TimeSinceLastSeen = 0.f;
    DeactivationDelay = 60.f;

    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void ASCP_103_Penut::BeginPlay()
{
    Super::BeginPlay();
    AIController = Cast<ASCP_103_AIController>(GetController());
    FindClosestPlayer();
    if (!AIController)
    {
        UE_LOG(LogTemp, Error, TEXT("SCP AIController is NULL! SCP will not move."));
    }
}

void ASCP_103_Penut::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FindClosestPlayer();

    if (!TargetPlayer || !AIController) return;

    if (bIsActive)
    {
        if (IsObservedByPlayer())
        {
            TimeSinceLastSeen = 0.f;
            AIController->StopMoving();
        }
        else
        {
            TimeSinceLastSeen += DeltaTime;
            if (!IsObservedByPlayer())
            {
                AIController->ChasePlayer(TargetPlayer);
            }

            if (TimeSinceLastSeen >= DeactivationDelay)
            {
                DeactivateSCP();
            }
        }
    }
    else
    {
        float Distance = FVector::Dist(GetActorLocation(), TargetPlayer->GetActorLocation());
        if (Distance < 1500.f)
        {
            ActivateSCP();
        }
    }


}

void ASCP_103_Penut::ActivateSCP()
{
    bIsActive = true;
    TimeSinceLastSeen = 0.f;
    UE_LOG(LogTemp, Warning, TEXT("Activated"));
}

void ASCP_103_Penut::DeactivateSCP()
{
    bIsActive = false;
    TimeSinceLastSeen = 0.f;
    TeleportToRandomLocation();
    UE_LOG(LogTemp, Warning, TEXT("Deactivated"));
}

void ASCP_103_Penut::FindClosestPlayer()
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

bool ASCP_103_Penut::IsObservedByPlayer()
{
    if (!TargetPlayer) return false;

    FVector PlayerViewLoc;
    FRotator PlayerViewRot;

    AController* PlayerController = TargetPlayer->GetController();
    if (!PlayerController) return false;

    PlayerController->GetPlayerViewPoint(PlayerViewLoc, PlayerViewRot);

    // Use the SCP's mesh location (more accurate than actor location)
    FVector SCPViewTarget = SCPMesh->GetComponentLocation();  // Or use a socket like GetSocketLocation("Head")

    FVector DirectionToSCP = SCPViewTarget - PlayerViewLoc;
    DirectionToSCP.Normalize();

    FVector PlayerForwardVector = PlayerViewRot.Vector();
    float AngleBetween = FMath::Acos(FVector::DotProduct(PlayerForwardVector, DirectionToSCP)) * (180.0f / PI);
    float PlayerFOV = 60.0f;

    // Visual debug: FOV cone check
    if (AngleBetween <= PlayerFOV)
    {
        DrawDebugLine(GetWorld(), PlayerViewLoc, SCPViewTarget, FColor::Green, false, 1.f, 0, 1.f);  // In FOV
    }
    else
    {
        DrawDebugLine(GetWorld(), PlayerViewLoc, SCPViewTarget, FColor::Red, false, 1.f, 0, 1.f);  // Outside FOV
        return false;
    }

    // Line trace to check visibility (wall blocking, etc.)
    FHitResult HitResult;
    FCollisionQueryParams TraceParams;
    TraceParams.AddIgnoredActor(TargetPlayer);
    TraceParams.bTraceComplex = true;

    bool bHit = GetWorld()->LineTraceSingleByChannel(
        HitResult,
        PlayerViewLoc,
        SCPViewTarget,
        ECC_Visibility,
        TraceParams
    );

    // Final check: must be in FOV and visible (not behind wall)
    if (bHit && HitResult.GetActor() == this)
    {
        DrawDebugLine(GetWorld(), PlayerViewLoc, SCPViewTarget, FColor::Blue, false, 1.f, 0, 2.f);  // Visible and in FOV
        return true;
    }

    // Hit something else — not visible
    DrawDebugLine(GetWorld(), PlayerViewLoc, SCPViewTarget, FColor::Yellow, false, 1.f, 0, 1.f);
    return false;

}

void ASCP_103_Penut::TeleportToRandomLocation()
{
    FVector NewLoc = GetActorLocation() + FMath::VRand() * 2000.f;
    SetActorLocation(NewLoc);
}