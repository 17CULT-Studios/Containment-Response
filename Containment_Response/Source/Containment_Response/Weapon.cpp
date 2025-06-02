// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AttachmentBase.h"

AWeapon::AWeapon()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	SetReplicateMovement(true);

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = WeaponMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> DummyMesh(TEXT("/Game/Meshes/Weapon/Primary/StartingPrimary"));

	if (DummyMesh.Succeeded())
	{
		WeaponMesh->SetStaticMesh(DummyMesh.Object);
		WeaponMesh->SetWorldScale3D(FVector(20.0f, 20.0f, 20.0f));
		WeaponMesh->SetWorldRotation(FRotator(0.0f, 0.0f, 90.0f));
	}

	AttachmentSlots.Add(EAttachmentSlot::Scope, FAttachmentSlot{ EAttachmentSlot::Scope });
	AttachmentSlots.Add(EAttachmentSlot::Muzzle, FAttachmentSlot{ EAttachmentSlot::Muzzle });
	AttachmentSlots.Add(EAttachmentSlot::Front_Grip, FAttachmentSlot{ EAttachmentSlot::Front_Grip });
	AttachmentSlots.Add(EAttachmentSlot::Back_Grip, FAttachmentSlot{ EAttachmentSlot::Back_Grip });
	AttachmentSlots.Add(EAttachmentSlot::Magazine, FAttachmentSlot{ EAttachmentSlot::Magazine });
	AttachmentSlots.Add(EAttachmentSlot::Stock, FAttachmentSlot{ EAttachmentSlot::Stock });
	AttachmentSlots.Add(EAttachmentSlot::Extra, FAttachmentSlot{ EAttachmentSlot::Extra });

	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ScopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScopeMesh"));
	ScopeMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ScopeMesh->SetupAttachment(RootComponent);
	ScopeMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	ScopeMesh->SetRelativeLocation(FVector(0.0f, -0.45f, 0.0f));
	MuzzleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuzzleMesh"));
	MuzzleMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MuzzleMesh->SetupAttachment(RootComponent);
	MuzzleMesh->SetRelativeLocation(FVector(0.0f, 20.0f, 50.0f));
	FrontGripMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontGripMesh"));
	FrontGripMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FrontGripMesh->SetupAttachment(RootComponent);
	BackGripMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackGripMesh"));
	BackGripMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BackGripMesh->SetupAttachment(RootComponent);
	MagMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MagMesh"));
	MagMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MagMesh->SetupAttachment(RootComponent);
	StockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StockMesh"));
	StockMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	StockMesh->SetupAttachment(RootComponent);
	ExtraMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExtraMesh"));
	ExtraMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ExtraMesh->SetupAttachment(RootComponent);

	//New Damage Setup
	//UGameplayStatics::ApplyDamage()
}

void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AWeapon::EquipAttachment(EAttachmentSlot SlotType, UStaticMesh* NewAttachment)
{
	if (!NewAttachment) return false;

	if (HasAuthority() == false)
	{
		ServerEquipAttachment(SlotType, NewAttachment);
		return false;
	}

	if (AttachmentSlots.Contains(SlotType))
	{
		if (SlotType == EAttachmentSlot::Scope)
		{
			if (ensure(ScopeMesh != nullptr))
			{
				Rep_ScopeMesh = NewAttachment;
				ScopeMesh->SetStaticMesh(NewAttachment);
			}
		}
		if (SlotType == EAttachmentSlot::Muzzle)
		{
			if (ensure(MuzzleMesh != nullptr))
			{
				Rep_MuzzleMesh = NewAttachment;
				MuzzleMesh->SetStaticMesh(NewAttachment);
			}
		}
		if (SlotType == EAttachmentSlot::Front_Grip)
		{
			if (ensure(FrontGripMesh != nullptr))
			{
				Rep_FrontGripMesh = NewAttachment;
				FrontGripMesh->SetStaticMesh(NewAttachment);
			}
		}
		if (SlotType == EAttachmentSlot::Back_Grip)
		{
			if (ensure(BackGripMesh != nullptr))
			{
				Rep_BackGripMesh = NewAttachment;
				BackGripMesh->SetStaticMesh(NewAttachment);
			}
		}
		if (SlotType == EAttachmentSlot::Magazine)
		{
			if (ensure(MagMesh != nullptr))
			{
				Rep_MagMesh = NewAttachment;
				MagMesh->SetStaticMesh(NewAttachment);
			}
		}
		if (SlotType == EAttachmentSlot::Stock)
		{
			if (ensure(StockMesh != nullptr))
			{
				Rep_StockMesh = NewAttachment;
				StockMesh->SetStaticMesh(NewAttachment);
			}
		}
		if (SlotType == EAttachmentSlot::Extra)
		{
			if (ensure(ExtraMesh != nullptr))
			{
				Rep_ExtraMesh = NewAttachment;
				ExtraMesh->SetStaticMesh(NewAttachment);
			}
		}		
		return true;
	}	
	return false;
}

void AWeapon::ServerEquipAttachment_Implementation(EAttachmentSlot SlotType, UStaticMesh* NewMesh)
{
	EquipAttachment(SlotType, NewMesh);
}

bool AWeapon::ServerEquipAttachment_Validate(EAttachmentSlot SlotType, UStaticMesh* NewMesh)
{
	return NewMesh != nullptr;
}

void AWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AWeapon, Rep_WeaponMesh);
	DOREPLIFETIME(AWeapon, Rep_ScopeMesh);
	DOREPLIFETIME(AWeapon, Rep_MuzzleMesh);
	DOREPLIFETIME(AWeapon, Rep_FrontGripMesh);
	DOREPLIFETIME(AWeapon, Rep_BackGripMesh);
	DOREPLIFETIME(AWeapon, Rep_MagMesh);
	DOREPLIFETIME(AWeapon, Rep_StockMesh);
	DOREPLIFETIME(AWeapon, Rep_ExtraMesh);
}

void AWeapon::FireGun()
{
	APlayerController* PC = Cast<APlayerController>(GetOwner()->GetInstigatorController());

	if (PC)
	{
		FVector CamLocation;
		FRotator CamRotation;

		PC->GetPlayerViewPoint(CamLocation, CamRotation);

		FVector Start = CamLocation;

		FVector End = Start + CamRotation.Vector() * 10000.0f;

		FHitResult HitResult;
		FCollisionQueryParams TraceParams(FName(TEXT("RayTrace")), true, this);
		TraceParams.AddIgnoredActor(this);

		bool bHit = GetWorld()->LineTraceSingleByChannel(
			HitResult,
			Start,
			End,
			ECC_Visibility,
			TraceParams
		);

		FColor LineColor = bHit ? FColor::Red : FColor::Green;

		DrawDebugLine(
			GetWorld(),
			Start,
			End,
			LineColor,
			false,
			2.0f,
			0,
			2.0f
		);
	}
}

void AWeapon::OnRep_WeaponMesh()
{
	if (WeaponMesh && Rep_WeaponMesh)
	{
		WeaponMesh->SetStaticMesh(Rep_WeaponMesh);
	}
}

void AWeapon::OnRep_ScopeMesh()
{
	if (ScopeMesh && Rep_ScopeMesh)
	{
		ScopeMesh->SetStaticMesh(Rep_ScopeMesh);
	}
}

void AWeapon::OnRep_MuzzleMesh()
{
	if (MuzzleMesh && Rep_MuzzleMesh)
	{
		MuzzleMesh->SetStaticMesh(Rep_MuzzleMesh);
	}
}

void AWeapon::OnRep_FrontGripMesh()
{
	if (FrontGripMesh && Rep_FrontGripMesh)
	{
		FrontGripMesh->SetStaticMesh(Rep_FrontGripMesh);
	}
}

void AWeapon::OnRep_BackGripMesh()
{
	if (BackGripMesh && Rep_BackGripMesh)
	{
		BackGripMesh->SetStaticMesh(Rep_BackGripMesh);
	}
}

void AWeapon::OnRep_MagMesh()
{
	if (MagMesh && Rep_MagMesh)
	{
		MagMesh->SetStaticMesh(Rep_MagMesh);
	}
}

void AWeapon::OnRep_StockMesh()
{
	if (StockMesh && Rep_StockMesh)
	{
		StockMesh->SetStaticMesh(Rep_StockMesh);
	}
}

void AWeapon::OnRep_ExtraMesh()
{
	if (ExtraMesh && Rep_ExtraMesh)
	{
		ExtraMesh->SetStaticMesh(Rep_ExtraMesh);
	}
}
