// Fill out your copyright notice in the Description page of Project Settings.


#include "SCP_103_AIController.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Navigation/PathFollowingComponent.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BlackboardComponent.h"

ASCP_103_AIController::ASCP_103_AIController()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ASCP_103_AIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
}

void ASCP_103_AIController::ChasePlayer(AActor* Player)
{
    if (!Player)
    {
        UE_LOG(LogTemp, Error, TEXT("ChasePlayer: Player is null"));
        return;
    }

    // Don't reissue move if we're already chasing this actor
    if (Player == CurrentMoveTarget && GetPathFollowingComponent()->GetStatus() == EPathFollowingStatus::Moving)
    {
        return;
    }

    EPathFollowingRequestResult::Type MoveResult = MoveToActor(Player, 5.f);

    if (MoveResult == EPathFollowingRequestResult::RequestSuccessful)
    {
        CurrentMoveTarget = Player;
        UE_LOG(LogTemp, Warning, TEXT("MoveToActor request succeeded."));
    }
    else if (MoveResult == EPathFollowingRequestResult::AlreadyAtGoal)
    {
        UE_LOG(LogTemp, Warning, TEXT("Already at goal."));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("MoveToActor failed."));
    }
}

void ASCP_103_AIController::StopMoving()
{
    StopMovement();
    CurrentMoveTarget = nullptr;
    UE_LOG(LogTemp, Warning, TEXT("Stopped Moving"));
}

