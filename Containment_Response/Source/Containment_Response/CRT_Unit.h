// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "CRT_Unit_AIController.h"
#include "CRT_Unit.generated.h"

UCLASS()
class CONTAINMENT_RESPONSE_API ACRT_Unit : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACRT_Unit();

	virtual void Tick(float DeltaTime) override;

	void UpdateAnimShouldMove();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	ACRT_Unit_AIController* CRTController;

public:	
	UPROPERTY(VisibleAnywhere)
	class UCapsuleComponent* CollisionCapsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* CRTMesh;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UPawnMovementComponent* MovementComponent;

	virtual UPawnMovementComponent* GetMovementComponent() const override;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsMoving() const;

	UFUNCTION(BlueprintCallable)
	FVector GetSimulatedVelocity() const { return SimulatedVelocity; }

private:
	float DTime;
	FVector LastLocation;
	FVector SimulatedVelocity;
	FVector GetCurrentLocation() const { return SimulatedVelocity; }
};
