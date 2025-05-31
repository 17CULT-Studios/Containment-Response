// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCP_Base.generated.h"

UCLASS()
class CONTAINMENT_RESPONSE_API ASCP_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	ASCP_Base();

public:	
	virtual void UseAbility();
	
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

	//---------- AWARENESS ----------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float VisionRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float HearingRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bCanDetectEntitys;

	//---------- Movement ----------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float MovementSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bCanOpenDoors;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bCanTeleport;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bCanPhaseThroughWalls;

	//---------- Containment ----------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bIsContained;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	bool bCanEscape;

	//---------- Other ----------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCPMembers")
	float SanityDrainAmount;


	//---------- FUNCTIONS ----------
	UFUNCTION(BlueprintCallable, Category = "SCPFunctions")
	void DoDamage(float value);
	UFUNCTION(BlueprintCallable, Category = "SCPFunctions")
	void Heal(float value);
};