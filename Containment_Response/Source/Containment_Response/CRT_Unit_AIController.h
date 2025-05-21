// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "CRT_Unit_AIController.generated.h"


UCLASS()
class CONTAINMENT_RESPONSE_API ACRT_Unit_AIController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	APawn* PlayerPawn;
	UPROPERTY(EditAnywhere)
	float FollowDistance = 300.0f;

public:
	UPROPERTY(BlueprintReadOnly)
	bool bIsMoving = false;

};
