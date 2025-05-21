// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "SCP_103_Penut.generated.h"

UCLASS()
class CONTAINMENT_RESPONSE_API ASCP_103_Penut : public APawn
{
    GENERATED_BODY()

public:
    ASCP_103_Penut();

    virtual void Tick(float DeltaTime) override;

    void ActivateSCP();
    void DeactivateSCP();

    bool IsActive() const { return bIsActive; }

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* SCPMesh;
    UPROPERTY(VisibleAnywhere)
    class UCapsuleComponent* CollisionCapsule;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    class UFloatingPawnMovement* MovementComponent;
    UPROPERTY()
    USceneComponent* HeadComponent;
    UPROPERTY(ReplicatedUsing = OnRep_ReplicatedRotation)
    FRotator ReplicatedRotation;
    UFUNCTION()
    void OnRep_ReplicatedRotation();

private:
    
    ACharacter* TargetPlayer;
    class ASCP_103_AIController* AIController;

    
    bool bIsActive;
    bool debug = 0;
    float playerFOV = 45.0f;
    bool bIsChasingPlayer;
    float TimeSinceLastSeen;
    float DeactivationDelay;
    FVector LastLocation;

    void FindClosestPlayer();
    bool IsObserved();
    void TeleportToRandomLocation();
};
