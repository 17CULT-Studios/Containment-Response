// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindWanderLocation.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "GameFramework/Pawn.h"

UBTTask_FindWanderLocation::UBTTask_FindWanderLocation()
{
    NodeName = "Find Wander Location";
}

EBTNodeResult::Type UBTTask_FindWanderLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    APawn* AIPawn = OwnerComp.GetAIOwner()->GetPawn();
    if (!AIPawn) return EBTNodeResult::Failed;

    FVector Origin = AIPawn->GetActorLocation();
    FNavLocation RandomLocation;

    UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
    if (NavSys && NavSys->GetRandomReachablePointInRadius(Origin, WanderRadius, RandomLocation))
    {
        OwnerComp.GetBlackboardComponent()->SetValueAsVector("WanderLocation", RandomLocation.Location);
        return EBTNodeResult::Succeeded;
    }
    
    return EBTNodeResult::Failed;
}
