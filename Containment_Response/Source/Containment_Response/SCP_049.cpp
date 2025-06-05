// Fill out your copyright notice in the Description page of Project Settings.


#include "SCP_049.h"
#include "AI_049_Controller.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Net/UnrealNetwork.h"
#include "EngineUtils.h"
#include "SCP_Base.h"

ASCP_049::ASCP_049()
{
    bReplicates = true;
    PrimaryActorTick.bCanEverTick = true;


    CollisionCapsule->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
    SCPMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    HeadComponent->SetRelativeLocation(FVector(0.f, 0.f, 80.f));

    SCPID = TEXT("049");
    SCPName = TEXT("Plague Doctor");
    SCPClass = TEXT("Euclid");
    MaxHealth = 150.f;
    CurrentHealth = MaxHealth;
    bCanTeleport = false;
    bIsImmortal = false;

    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    AIControllerClass = AAI_049_Controller::StaticClass();
}

void ASCP_049::BeginPlay()
{
    Super::BeginPlay();
    AIController = Cast<AAI_049_Controller>(GetController());
    if (!AIController)
    {
        UE_LOG(LogTemp, Error, TEXT("SCP AIController is NULL! SCP will not move."));
    }
    SetCanBeDamaged(true);
}

void ASCP_049::Tick(float DeltaTime)
{
}

float ASCP_049::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    if (CurrentHealth <= 0.0f)
    {
        if (AIController)
        {
            AIController->StopMovement();
            AIController->UnPossess();
        }
    }
    return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

void ASCP_049::UseAbility()
{
}
