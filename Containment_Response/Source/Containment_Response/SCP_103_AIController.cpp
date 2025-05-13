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

    EPathFollowingRequestResult::Type MoveResult = MoveToActor(Player, 5.f);

    if (MoveResult == EPathFollowingRequestResult::Failed)
    {
        UE_LOG(LogTemp, Error, TEXT("MoveToActor failed."));
    }
    else if (MoveResult == EPathFollowingRequestResult::AlreadyAtGoal)
    {
        UE_LOG(LogTemp, Warning, TEXT("Already at goal."));
    }
    else if (MoveResult == EPathFollowingRequestResult::RequestSuccessful)
    {
        UE_LOG(LogTemp, Warning, TEXT("MoveToActor request succeeded."));
    }
}

void ASCP_103_AIController::StopMoving()
{
    StopMovement();
    UE_LOG(LogTemp, Warning, TEXT("Stopped Moving"));
}

