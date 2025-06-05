// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "AI_049_Controller.generated.h"

UENUM()
enum class EEnemyState : uint8
{
	Wandering,
	Chasing,
	Serching
};

UCLASS()
class CONTAINMENT_RESPONSE_API AAI_049_Controller : public AAIController
{
	GENERATED_BODY()

public:
	AAI_049_Controller();

protected:
	virtual void BeginPlay() override;
    virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;
	virtual void Tick(float DeltaTime) override;

    // Perception
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    class UAIPerceptionComponent* PerceptionComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    class UAISenseConfig_Sight* SightConfig;

    UFUNCTION()
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

    void StartChase(AActor* Target);
    void StopChase();
    void Wander();

    void SearchTimeout();

private:
    EEnemyState CurrentState;
    AActor* PlayerActor;
    FTimerHandle LostSightTimer;
    float TimeToForgetPlayer = 3.0f;
    bool bIsChasing = false;
    bool bIsWandering = false;
};