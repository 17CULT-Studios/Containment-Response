// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "SCP_Base.h"
#include "CoreMinimal.h"
#include "SCP_173_Penut.generated.h"

class UCapsuleComponent;
class UStaticMeshComponent;
class UFloatingPawnMovement;
class ASCP_173_AIController;
class ACharacter;

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

    virtual void UseAbility() override;

    //----------------- Components -----------------
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCP_173")
    bool bIsActive;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCP_173")
    bool bIsChasingPlayer;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCP_173")
    float TimeSinceLastSeen;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCP_173")
    float DeactivationDelay;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCP_173")
    float playerFOV = 70.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCP_173")
    bool debug = true;

    UPROPERTY(EditDefaultsOnly, Category = "SCP_173")
    float SnapKillRange = 200.0f;

    //----------------- Networking -----------------
    UPROPERTY(ReplicatedUsing = OnRep_ReplicatedRotation)
    FRotator ReplicatedRotation;

    UFUNCTION()
    void OnRep_ReplicatedRotation();

protected:
    void FindClosestPlayer();
    bool IsObserved();
    void AttemptKill();

    void ActivateSCP();
    void DeactivateSCP();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    FVector LastLocation;
    ACharacter* TargetPlayer = nullptr;
    ASCP_173_AIController* AIController = nullptr;
};
