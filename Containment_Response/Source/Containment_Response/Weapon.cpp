// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AttachmentBase.h"

AWeapon::AWeapon()
{
	PrimaryActorTick.bCanEverTick = false;

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

	if (AttachmentSlots.Contains(SlotType))
	{
		UE_LOG(LogTemp, Warning, TEXT("AttachmentSlots contains SlotType: %d"), (int32)SlotType);

		if (SlotType == EAttachmentSlot::Scope)
		{
			ScopeMesh->SetStaticMesh(NewAttachment);
		}
		if (SlotType == EAttachmentSlot::Muzzle)
		{
			MuzzleMesh->SetStaticMesh(NewAttachment);
		}
		if (SlotType == EAttachmentSlot::Front_Grip)
		{
			FrontGripMesh->SetStaticMesh(NewAttachment);
		}
		if (SlotType == EAttachmentSlot::Back_Grip)
		{
			BackGripMesh->SetStaticMesh(NewAttachment);
		}
		if (SlotType == EAttachmentSlot::Magazine)
		{
			MagMesh->SetStaticMesh(NewAttachment);
		}
		if (SlotType == EAttachmentSlot::Stock)
		{
			StockMesh->SetStaticMesh(NewAttachment);
		}
		if (SlotType == EAttachmentSlot::Extra)
		{
			ExtraMesh->SetStaticMesh(NewAttachment);
		}

		return true;
		
	}
	return false;
}

void AWeapon::FireGun()
{
	FVector Start = GetActorLocation();

	FVector Direction = GetActorForwardVector().RotateAngleAxis(-90.0f, FVector::UpVector);

	FVector End = Start + Direction * 1000;

	FHitResult HitResult;
	FCollisionQueryParams TraceParams(FName(TEXT("RayTrace")), true, this);

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

