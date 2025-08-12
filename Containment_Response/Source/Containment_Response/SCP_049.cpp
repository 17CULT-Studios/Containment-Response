// Fill out your copyright notice in the Description page of Project Settings.


#include "SCP_049.h"
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
    

    SCPID = TEXT("049");
    SCPName = TEXT("Plague Doctor");
    SCPClass = TEXT("Euclid");
    MaxHealth = 150.f;
    CurrentHealth = MaxHealth;
    bCanTeleport = false;
    bIsImmortal = false;
}

void ASCP_049::BeginPlay()
{
    Super::BeginPlay();
    
    SetCanBeDamaged(true);
}

void ASCP_049::Tick(float DeltaTime)
{
}

float ASCP_049::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

void ASCP_049::UseAbility()
{
}
