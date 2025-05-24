// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "AttachmentBase.h"

AWeapon::AWeapon()
{
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = WeaponMesh;

	AttachmentSlots.Add(EAttachmentSlot::Scope, FAttachmentSlot{ EAttachmentSlot::Scope });
	AttachmentSlots.Add(EAttachmentSlot::Muzzle, FAttachmentSlot{ EAttachmentSlot::Muzzle });
	AttachmentSlots.Add(EAttachmentSlot::Front_Grip, FAttachmentSlot{ EAttachmentSlot::Front_Grip });
	AttachmentSlots.Add(EAttachmentSlot::Back_Grip, FAttachmentSlot{ EAttachmentSlot::Back_Grip });
	AttachmentSlots.Add(EAttachmentSlot::Magazine, FAttachmentSlot{ EAttachmentSlot::Magazine });
	AttachmentSlots.Add(EAttachmentSlot::Stock, FAttachmentSlot{ EAttachmentSlot::Stock });
	AttachmentSlots.Add(EAttachmentSlot::Extra, FAttachmentSlot{ EAttachmentSlot::Extra });
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
		FName SocketName = NAME_None;

		switch (SlotType)
		{
		case EAttachmentSlot::Scope: SocketName = TEXT("ScopeSocket"); break;
		case EAttachmentSlot::Muzzle: SocketName = TEXT("MuzzleSocket"); break;
		case EAttachmentSlot::Front_Grip: SocketName = TEXT("FrontGripSocket"); break;
		case EAttachmentSlot::Back_Grip: SocketName = TEXT("BackGripSocket"); break;
		case EAttachmentSlot::Magazine: SocketName = TEXT("MagSocket"); break;
		case EAttachmentSlot::Stock: SocketName = TEXT("StockSocket"); break;
		case EAttachmentSlot::Extra: SocketName = TEXT("ExtraSocket"); break;
		}

		NewAttachment->AttachToComponent(WeaponMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);
		NewAttachment->OnEquip(this);
		AttachmentSlots[SlotType].EquippedAttachment = NewAttachment;
		return true;
	}
	return false;
}

