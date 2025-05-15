// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "SCP_103_AIController.generated.h"

UCLASS()
class CONTAINMENT_RESPONSE_API ASCP_103_AIController : public AAIController
{
    GENERATED_BODY()

public:
    ASCP_103_AIController();

    void ChasePlayer(AActor* Player);
    void StopMoving();

protected:
    virtual void OnPossess(APawn* InPawn) override;

    UPROPERTY()
    AActor* CurrentMoveTarget;
};

