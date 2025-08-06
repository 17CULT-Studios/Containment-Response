// Fill out your copyright notice in the Description page of Project Settings.


#include "SCP_939.h"

ASCP_939::ASCP_939()
{
	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
	PawnSensingComponent->SetPeripheralVisionAngle(90.0f);
	PawnSensingComponent->SensingInterval = 0.5f;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AI_SkeletalMesh"));
	SkeletalMesh->SetupAttachment(GetMesh());

	SkeletalMesh->SetRelativeLocation(FVector(0.f, 0.f, -90.f));
	SkeletalMesh->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
}


void ASCP_939::BeginPlay()
{
	Super::BeginPlay();	

	if (PawnSensingComponent)
	{
		PawnSensingComponent->OnSeePawn.AddDynamic(this, &ASCP_939::OnSeePawn);
		PawnSensingComponent->OnHearNoise.AddDynamic(this, &ASCP_939::OnHearNoise);
	}
}

void ASCP_939::OnSeePawn(APawn* OtherPawn)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Magenta, FString::Printf(TEXT("Pawn sensed: %s"), *OtherPawn->GetName()));
	}
	

	//here is where you will tell the enemy to move
}

void ASCP_939::OnHearNoise(APawn* OtherPawn, const FVector& Loctaion, float Volume)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Magenta, FString::Printf(TEXT("Pawn Hear Noise: %s"), *OtherPawn->GetName()));
	}
}


