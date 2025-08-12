// Fill out your copyright notice in the Description page of Project Settings.


#include "SCP_939.h"
#include "Perception/PawnSensingComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/MeshComponent.h"
#include "Kismet/GameplayStatics.h"

ASCP_939::ASCP_939()
{
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AI_SkeletalMesh"));
	SkeletalMesh->SetupAttachment(GetMesh());

	SkeletalMesh->SetRelativeLocation(FVector(0.f, 0.f, -90.f));
	SkeletalMesh->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);

	GetCharacterMovement()->JumpZVelocity = 700.0f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 550.0f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 40.0f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.0f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;
}


void ASCP_939::BeginPlay()
{
	Super::BeginPlay();	
}