// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SCP_Base.h"
#include "GameFramework/Character.h"
#include "Perception/PawnSensingComponent.h"
#include "SCP_939.generated.h"

UCLASS()
class CONTAINMENT_RESPONSE_API ASCP_939 : public ASCP_Base
{
	GENERATED_BODY()

public:
	ASCP_939();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = "AI", meta = (AllowPrivateAccess = "true"))
	UPawnSensingComponent* PawnSensingComponent;

	UFUNCTION()
	void OnSeePawn(APawn* OtherPawn);

	UFUNCTION()
	void OnHearNoise(APawn* InstigatorPawn, const FVector& Loctaion, float Volume);

public:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "Mesh")
	USkeletalMeshComponent* SkeletalMesh;
};
