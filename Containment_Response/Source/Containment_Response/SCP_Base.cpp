// Fill out your copyright notice in the Description page of Project Settings.


#include "SCP_Base.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"

ASCP_Base::ASCP_Base()
{
	PrimaryActorTick.bCanEverTick = false;

	bReplicates = true;

	CollisionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
	CollisionCapsule->InitCapsuleSize(42.f, 96.f);
	CollisionCapsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	RootComponent = CollisionCapsule;

	SCPMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SCPMesh"));
	SCPMesh->SetupAttachment(RootComponent);

	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
	MovementComponent->UpdatedComponent = RootComponent;

	HeadComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HeadComponent"));
	HeadComponent->SetupAttachment(RootComponent);
	HeadComponent->SetRelativeLocation(FVector(0.f, 0.f, 80.f));
}

void ASCP_Base::UseAbility()
{
}

void ASCP_Base::DoDamage(float value)
{
	CurrentHealth -= value;

	if (CurrentHealth <= 0.0f)
	{
		CurrentHealth = 0.0f;
	}
}

void ASCP_Base::Heal(float value)
{
	CurrentHealth += value;

	if (CurrentHealth > MaxHealth)
	{
		CurrentHealth = MaxHealth;
	}
}

