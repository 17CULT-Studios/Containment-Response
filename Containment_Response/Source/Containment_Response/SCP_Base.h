// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/PawnSensingComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "SCP_Base.generated.h"

UCLASS()
class CONTAINMENT_RESPONSE_API ASCP_Base : public ACharacter
{
	GENERATED_BODY()
	
public:	
	ASCP_Base();
protected:
	virtual void BeginPlay() override;

public:	
	//---------- FUNCTIONS ----------
	virtual void UseAbility();
	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	void Kill();
	UFUNCTION()
	void Contain(bool CanExcape);

	UFUNCTION(BlueprintCallable, Category = "SCPFunctions")
	void Heal(float value);
	
	//---------- IDENTIFACATION ----------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	FString SCPID; //ID number
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	FString SCPName; // ID Name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	FString SCPClass; // how dangerus they are

	//---------- HEALTH ----------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float CurrentHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bIsImmortal;

	//---------- AWARENESS ----------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float VisionRange=400;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float VisionAngle=90.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float HearingRange=5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float Sensing_Interval=0.5;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
	UPawnSensingComponent* PawnSensingComponent;

	UFUNCTION()
	void OnSeePawn(APawn* OtherPawn);

	UFUNCTION()
	void OnHearNoise(APawn* InstigatorPawn, const FVector& Loctaion, float Volume);

	//---------- Movement ----------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float JumpVelocity = 700.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float Air_Control = 0.35f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float MaxWalkingSpeed = 400.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float MinWalkingSpeed = 40.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float DecelerationWalking = 2000.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float DecelerationFalling = 1500.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bCanOpenDoors;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bCanTeleport;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bCanPhaseThroughWalls;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bCanMove = true;

	//---------- Containment ----------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bIsContained;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bCanEscape;

	//---------- Other ----------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float SanityDrainAmount;

	//---------- Looks/Info ----------
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SCP")
	UCapsuleComponent* CollisionCapsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SCP")
	UStaticMeshComponent* SCPMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SCP")
	UCharacterMovementComponent* CharMove = GetCharacterMovement();
};