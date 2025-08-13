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
    PawnSensingComponent->SensingInterval = 0.5f;
    //PawnSensingComponent->;

    //AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    //AIControllerClass = AAIController::StaticClass();
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
            GEngine->AddOnScreenDebugMessage(100, 5.0f, FColor::Red, FString::Printf(TEXT("X: %f"), player->GetActorLocation().X));
            GEngine->AddOnScreenDebugMessage(101, 5.0f, FColor::Blue, FString::Printf(TEXT("Y: %f"), player->GetActorLocation().Y));
            GEngine->AddOnScreenDebugMessage(102, 5.0f, FColor::Green, FString::Printf(TEXT("Z: %f"), player->GetActorLocation().Z));
            ai->MoveToLocation(player->GetActorLocation());
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
            //if (bCanMove)
            //{
            ai->MoveToLocation(player->GetActorLocation());
            //}
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

