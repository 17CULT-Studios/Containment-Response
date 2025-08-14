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

    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);
    GetCapsuleComponent()->SetCollisionProfileName(TEXT("BlockAll"));
    SetRootComponent(GetCapsuleComponent()); 

    SCPMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SCPMesh"));
    SCPMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    SCPMesh->SetupAttachment(GetCapsuleComponent());

    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
    GetCharacterMovement()->JumpZVelocity = 700;
    GetCharacterMovement()->AirControl = 0.35;
    GetCharacterMovement()->MaxWalkSpeed = 550.0f;
    GetCharacterMovement()->MinAnalogWalkSpeed = 40.0f;
    GetCharacterMovement()->BrakingDecelerationWalking = 2000;
    GetCharacterMovement()->BrakingDecelerationFalling = 1500;
    GetCharacterMovement()->MaxAcceleration = 900.0f;

    PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
    PawnSensingComponent->SetPeripheralVisionAngle(90.0f);
    PawnSensingComponent->SightRadius = 1000.0f;
    PawnSensingComponent->SensingInterval = 0.1f;
}

void ASCP_Base::BeginPlay()
{

    Super::BeginPlay();

    if (PawnSensingComponent)
    {
        PawnSensingComponent->OnSeePawn.AddDynamic(this, &ASCP_Base::OnSeePawn);
        PawnSensingComponent->OnHearNoise.AddDynamic(this, &ASCP_Base::OnHearNoise);
    }
}

void ASCP_Base::Tick(float DeltaTime)
{
   
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



void ASCP_Base::OnSeePawn_Implementation(APawn* OtherPawn)
{
    if (!bIsContained)
    {
        AContainment_ResponseCharacter* player = Cast<AContainment_ResponseCharacter>(OtherPawn);
        if (player && player->IsPlayerControlled())
        {
            AAIController* ai = Cast<AAIController>(GetController());
            if (ai)
            {
                ai->MoveToLocation(player->GetActorLocation());
            }
        }
    }
    else
    {
        AContainment_ResponseCharacter* player = Cast<AContainment_ResponseCharacter>(OtherPawn);
        if (player && player->IsPlayerControlled())
        {
            AAIController* ai = Cast<AAIController>(GetController());
            if (ai)
            {
                ai->MoveToLocation(player->GetActorLocation(),250.0f);
            }
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
            ai->MoveToLocation(player->GetActorLocation());
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