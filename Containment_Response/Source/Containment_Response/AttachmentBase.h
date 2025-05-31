// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Weapon.h"
#include "AttachmentBase.generated.h"

class AWeapon;

UCLASS(Blueprintable, BlueprintType)
class CONTAINMENT_RESPONSE_API AAttachmentBase : public AActor
{
	GENERATED_BODY()
	
public:
    // -----Name Of Attachment-----
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment")
    FName AttachmentName;

    // -----Attachment mesh-----
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment")
    UStaticMesh* AttachmentMesh;

    // -----Attachment Stats-----
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment")
    float DamageModifier = 0.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment")
    float FireRateModifier = 0.0f;

    // -----What Kind Of Attachment it is ie. scope-----
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attachment")
    EAttachmentSlot SlotType;

    // ------call to equip to weapon-----
    UFUNCTION(BlueprintCallable, Category = "Attachment")
    virtual void OnEquip(class AWeapon* Weapon);
};
