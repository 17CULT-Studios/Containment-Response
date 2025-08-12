// Fill out your copyright notice in the Description page of Project Settings.


#include "SCP_Base.h"
#include "Components/CapsuleComponent.h"
#include "AIController.h"
#include "Containment_ResponseCharacter.h"
#include "Components/StaticMeshComponent.h"

ASCP_Base::ASCP_Base()
{
	PrimaryActorTick.bCanEverTick = true;
	
	bReplicates = true;

	CollisionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
	CollisionCapsule->InitCapsuleSize(42.f, 96.f);
	CollisionCapsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionCapsule->SetCollisionResponseToAllChannels(ECR_Block);
	CollisionCapsule->SetCollisionObjectType(ECC_Pawn);
	CollisionCapsule->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	RootComponent = CollisionCapsule;
	
	SCPMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SCPMesh"));
	SCPMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SCPMesh->SetupAttachment(RootComponent);

	CharMove->bOrientRotationToMovement = true;
	CharMove->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	CharMove->JumpZVelocity = 700;
	CharMove->AirControl = 0.35;
	CharMove->MaxWalkSpeed = 250;
	CharMove->MinAnalogWalkSpeed = 20;
	CharMove->BrakingDecelerationWalking = 2000;
	CharMove->BrakingDecelerationFalling = 1500;
	CharMove->MaxAcceleration = 900.0f;

	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
	PawnSensingComponent->SetPeripheralVisionAngle(180);
	PawnSensingComponent->SightRadius = 1500;
	PawnSensingComponent->SensingInterval = 0.5;

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = AAIController::StaticClass();
}

void ASCP_Base::BeginPlay()
{

	Super::BeginPlay();

	if (PawnSensingComponent)
	{
		PawnSensingComponent->OnSeePawn.AddDynamic(this, &ASCP_Base::OnSeePawn);
		PawnSensingComponent->OnHearNoise.AddDynamic(this, &ASCP_Base::OnHearNoise);
	}

	Tags.Add("Enemy");
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



void ASCP_Base::OnSeePawn(APawn* OtherPawn)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Magenta, FString::Printf(TEXT("Pawn sensed: %s"), *OtherPawn->GetName()));
	}

	AContainment_ResponseCharacter* player = Cast<AContainment_ResponseCharacter>(OtherPawn);
	if (player && player->IsPlayerControlled())
	{
		AAIController* ai = Cast<AAIController>(GetController());
		if (ai)
		{
			ai->MoveToLocation(player->GetActorLocation());
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, FString::Printf(TEXT("Movement Mode: %d"), (int32)GetCharacterMovement()->MovementMode));
		}
	}
}

void ASCP_Base::OnHearNoise(APawn* InstigatorPawn, const FVector& Loctaion, float Volume)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Magenta, FString::Printf(TEXT("Pawn Hear Noise: %s"), *InstigatorPawn->GetName()));
	}

	AContainment_ResponseCharacter* player = Cast<AContainment_ResponseCharacter>(InstigatorPawn);
	if (player && player->IsPlayerControlled())
	{
		AAIController* ai = Cast<AAIController>(GetController());
		if (ai)
		{
			if (bCanMove)
			{
				ai->MoveToLocation(player->GetActorLocation());
			}
		}
	}
}

void ASCP_Base::Contain(bool CanExcape)
{
	bIsContained = true;
	bCanEscape = CanExcape;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Magenta, FString::Printf(TEXT("Cantained: %s")));
	}
}

