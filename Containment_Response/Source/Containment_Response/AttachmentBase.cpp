// Fill out your copyright notice in the Description page of Project Settings.


#include "AttachmentBase.h"
#include "Weapon.h"

void AAttachmentBase::OnEquip(AWeapon* Weapon)
{
    if (Weapon)
    {
        Weapon->BaseDamage += DamageModifier;
        Weapon->FireRate += FireRateModifier;
    }
}
