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
	CollisionCapsule->SetCollisionResponseToAllChannels(ECR_Block);
	CollisionCapsule->SetCollisionObjectType(ECC_Pawn);
	CollisionCapsule->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	RootComponent = CollisionCapsule;
	
	SCPMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SCPMesh"));
	SCPMesh->SetupAttachment(RootComponent);
	SCPMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
	MovementComponent->UpdatedComponent = RootComponent;
	
	HeadComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HeadComponent"));
	HeadComponent->SetupAttachment(RootComponent);
	HeadComponent->SetRelativeLocation(FVector(0.f, 0.f, 80.f));
}

void ASCP_Base::UseAbility()
{
}

float ASCP_Base::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float AppliedDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	CurrentHealth -= DamageAmount;
	if (CurrentHealth <= 0.0f)
	{
		Kill();
	}

	return AppliedDamage;
}

void ASCP_Base::Kill()
{
	Destroy();
}

void ASCP_Base::Heal(float value)
{
	CurrentHealth += value;

	if (CurrentHealth > MaxHealth)
	{
		CurrentHealth = MaxHealth;
	}
}

