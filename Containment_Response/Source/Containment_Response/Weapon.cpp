// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/StaticMeshComponent.h"
#include "AttachmentBase.h"

AWeapon::AWeapon()
{
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = WeaponMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> DummyMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));

	if (DummyMesh.Succeeded())
	{
		WeaponMesh->SetStaticMesh(DummyMesh.Object);
		WeaponMesh->SetWorldScale3D(FVector(2.0f, 0.2f, 0.5f)); // Scale to make it gun-shaped
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
	MuzzleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuzzleMesh"));
	MuzzleMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MuzzleMesh->SetupAttachment(RootComponent);
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
}

void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AWeapon::EquipAttachment(EAttachmentSlot SlotType, AAttachmentBase* NewAttachment)
{
	if (!NewAttachment) return false;

	if (AttachmentSlots.Contains(SlotType))
	{
		UE_LOG(LogTemp, Warning, TEXT("AttachmentSlots contains SlotType: %d"), (int32)SlotType);
		USceneComponent* AttachPoint = nullptr;

		if (SlotType == EAttachmentSlot::Scope)
		{
			//will update the mesh corrosponding with the slottype
		}

		if (AttachPoint)
		{
			NewAttachment->AttachToComponent(AttachPoint, FAttachmentTransformRules::SnapToTargetIncludingScale);
			NewAttachment->OnEquip(this);
			AttachmentSlots[SlotType].EquippedAttachment = NewAttachment;
			return true;
		}
		
	}
	return false;
}

