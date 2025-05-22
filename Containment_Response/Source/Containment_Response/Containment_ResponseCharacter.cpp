// Copyright Epic Games, Inc. All Rights Reserved.

#include "Containment_ResponseCharacter.h"
#include "Containment_ResponseProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/LocalPlayer.h"
#include "Components/TextRenderComponent.h"
#include "Net/UnrealNetwork.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AContainment_ResponseCharacter

AContainment_ResponseCharacter::AContainment_ResponseCharacter()
{
	// Character doesnt have a rifle at start
	bHasRifle = false;
	bReplicates = true;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	NameTagText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("NameTagText"));
	NameTagText->SetupAttachment(RootComponent);
	NameTagText->SetRelativeLocation(FVector(0.f, 0.f, 100.f));
	NameTagText->SetHorizontalAlignment(EHTA_Center);
	NameTagText->SetVerticalAlignment(EVRTA_TextCenter);
	NameTagText->SetTextRenderColor(FColor::White);
	NameTagText->SetWorldSize(40.f);
	NameTagText->SetText(FText::FromString("Player"));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/Characters/Mannequins/Meshes/SKM_Manny.SKM_Manny"));
	static ConstructorHelpers::FClassFinder<UAnimInstance> Anim(TEXT("/Game/Characters/Mannequins/Animations/ABP_Manny"));
	if (MeshAsset.Succeeded())
	{
		Mesh3P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshAsset"));
		Mesh3P->SetSkeletalMesh(MeshAsset.Object);
		Mesh3P->SetAnimInstanceClass(Anim.Class);
		Mesh3P->SetOnlyOwnerSee(false);
		Mesh3P->SetOwnerNoSee(true);
		Mesh3P->SetupAttachment(RootComponent);
		Mesh3P->bCastDynamicShadow = true;
		Mesh3P->CastShadow = true;
		Mesh3P->SetRelativeLocation(FVector(0.f, 0.f, -98.f));
		Mesh3P->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
		if (Anim.Succeeded())
		{
			Mesh3P->SetAnimInstanceClass(Anim.Class);
		}
	}

}

void AContainment_ResponseCharacter::SetPlayerName(const FString& NewName)
{
	PlayerName = NewName;
	OnRep_PlayerName();
}

void AContainment_ResponseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AContainment_ResponseCharacter, PlayerName);
}

void AContainment_ResponseCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

}

void AContainment_ResponseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (NameTagText && GetWorld())
	{
		APlayerController* PC = GetWorld()->GetFirstPlayerController();
		if (PC && PC->PlayerCameraManager)
		{
			FVector CamLoc = PC->PlayerCameraManager->GetCameraLocation();
			FRotator LookAtRot = FRotationMatrix::MakeFromX(CamLoc - NameTagText->GetComponentLocation()).Rotator();
			NameTagText->SetWorldRotation(LookAtRot);
		}
	}
}

void AContainment_ResponseCharacter::OnRep_PlayerName()
{
	if (NameTagText)
	{
		NameTagText->SetText(FText::FromString(PlayerName));
	}
}

//////////////////////////////////////////////////////////////////////////// Input

void AContainment_ResponseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AContainment_ResponseCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AContainment_ResponseCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


void AContainment_ResponseCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void AContainment_ResponseCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AContainment_ResponseCharacter::SetHasRifle(bool bNewHasRifle)
{
	bHasRifle = bNewHasRifle;
}

bool AContainment_ResponseCharacter::GetHasRifle()
{
	return bHasRifle;
}