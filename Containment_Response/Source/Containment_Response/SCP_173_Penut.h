// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "SCP_Base.h"
#include "CoreMinimal.h"
#include "SCP_173_Penut.generated.h"

/**
 * SCP-173 ("The Sculpture") class.
 * Inherits base SCP properties and overrides behavior like freezing when observed,
 * moving quickly when unobserved, and snapping necks.
 */

UCLASS()
class CONTAINMENT_RESPONSE_API ASCP_173_Penut : public ASCP_Base
{
    GENERATED_BODY()

public:
    ASCP_173_Penut();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    void SetCanMove(bool canMove);
};
