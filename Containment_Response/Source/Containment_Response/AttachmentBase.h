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
    /** Name of this attachment */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment")
    FName AttachmentName;

    /** Static mesh for visual representation */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment")
    UStaticMesh* AttachmentMesh;

    /** Optional: Modify weapon stats (damage, fire rate, etc.) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment")
    float DamageModifier = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attachment")
    float FireRateModifier = 0.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attachment")
    EAttachmentSlot SlotType;

    /** Called when this attachment is equipped */
    UFUNCTION(BlueprintCallable, Category = "Attachment")
    virtual void OnEquip(class AWeapon* Weapon);
};
