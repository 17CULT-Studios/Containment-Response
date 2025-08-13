// Fill out your copyright notice in the Description page of Project Settings.


#include "SCP_173_Penut.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Net/UnrealNetwork.h"
#include "EngineUtils.h"
#include "SCP_Base.h"
#include "Containment_ResponseCharacter.h"

ASCP_173_Penut::ASCP_173_Penut()
{
    //bReplicates = true;
    PrimaryActorTick.bCanEverTick = true;

    SCPID = TEXT("173");
    SCPName = TEXT("The Sculpture");
    SCPClass = TEXT("Euclid");
    MaxHealth = 150.f;
    CurrentHealth = MaxHealth;
    bIsImmortal = true;
}

void ASCP_173_Penut::BeginPlay()
{
    Super::BeginPlay();
}

void ASCP_173_Penut::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);    
}

void ASCP_173_Penut::SetCanMove(bool canMove)
{
    bCanMove = true;
}
