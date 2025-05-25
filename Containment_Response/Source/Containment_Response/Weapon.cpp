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

	ScopePoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ScopePoint"));
	ScopePoint->SetupAttachment(WeaponMesh);
	ScopePoint->SetRelativeLocation(FVector(0.0f, 0.0f, 10.0f));
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

		switch (static_cast<EAttachmentSlot>(SlotType))
		{
		default:
			UE_LOG(LogTemp, Warning, TEXT("SlotType did not match any case!"));
			break;
		case EAttachmentSlot::Scope: AttachPoint = ScopePoint; break;
		case EAttachmentSlot::Muzzle: AttachPoint = ScopePoint; break;
		case EAttachmentSlot::Front_Grip: AttachPoint = ScopePoint; break;
		case EAttachmentSlot::Back_Grip: AttachPoint = ScopePoint; break;
		case EAttachmentSlot::Magazine: AttachPoint = ScopePoint; break;
		case EAttachmentSlot::Stock: AttachPoint = ScopePoint; break;
		case EAttachmentSlot::Extra: AttachPoint = ScopePoint; break;
		}

		if (SlotType == EAttachmentSlot::Scope)
		{
			AttachPoint = ScopePoint;
			UE_LOG(LogTemp, Warning, TEXT("Matched Scope slot"));
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

