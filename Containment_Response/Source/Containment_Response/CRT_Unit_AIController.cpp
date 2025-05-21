// Fill out your copyright notice in the Description page of Project Settings.


#include "CRT_Unit_AIController.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "GameFramework/Pawn.h"


void ACRT_Unit_AIController::BeginPlay()
{
    Super::BeginPlay();
    PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    SetActorTickEnabled(true);
}

void ACRT_Unit_AIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!PlayerPawn || !GetPawn()) return;

    float Distance = FVector::Dist(PlayerPawn->GetActorLocation(), GetPawn()->GetActorLocation());

    if (Distance > FollowDistance)
    {
        MoveToActor(PlayerPawn, 20.0f);
        bIsMoving = true;
    }
    else
    {
        StopMovement();
        bIsMoving = false;
    }

    FVector Direction = PlayerPawn->GetActorLocation() - GetPawn()->GetActorLocation();
    if (!Direction.IsNearlyZero())
    {
        FRotator TargetRotation = Direction.Rotation();
        GetPawn()->SetActorRotation(FRotator(0, TargetRotation.Yaw, 0));
    }
}
