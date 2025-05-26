// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"


class USkeletalMeshComponent;
class AAttachmentBase;

UENUM(BlueprintType)
enum class EAttachmentSlot : uint8
{
	Scope,
	Muzzle,
	Front_Grip,
	Back_Grip,
	Magazine,
	Stock,
	Extra
};

USTRUCT(BlueprintType)
struct FAttachmentSlot
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachmentSlot SlotType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AAttachmentBase* EquippedAttachment = nullptr;
};


UCLASS()
class CONTAINMENT_RESPONSE_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	AWeapon();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	/** Main weapon mesh */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* ScopeMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* MuzzleMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* FrontGripMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* BackGripMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* MagMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* StockMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* ExtraMesh;

	/** Base weapon stats */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	float BaseDamage = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	float FireRate = 600.0f;

	/** Attachment slots */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachments")
	TMap<EAttachmentSlot, FAttachmentSlot> AttachmentSlots;

	/** Equip an attachment */
	UFUNCTION(BlueprintCallable, Category = "Attachments")
	bool EquipAttachment(EAttachmentSlot SlotType, AAttachmentBase* NewAttachment);
};
