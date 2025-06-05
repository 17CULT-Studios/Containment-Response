// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SCP_Base.h"
#include "SCP_049.generated.h"

class UCapsuleComponent;
class UStaticMeshComponent;
class UFloatingPawnMovement;
class AAI_049_Controller;
class ACharacter;

/**
 * SCP-173 ("The Sculpture") class.
 * Inherits base SCP properties and overrides behavior like freezing when observed,
 * moving quickly when unobserved, and snapping necks.
 */
UCLASS()
class CONTAINMENT_RESPONSE_API ASCP_049 : public ASCP_Base
{
	GENERATED_BODY()
public:
    ASCP_049();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
    virtual void UseAbility() override;

private:
    AAI_049_Controller* AIController = nullptr;
};
