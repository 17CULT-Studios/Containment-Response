// Fill out your copyright notice in the Description page of Project Settings.


#include "SCP_Base.h"

ASCP_Base::ASCP_Base()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ASCP_Base::UseAbility()
{
}

void ASCP_Base::DoDamage(float value)
{
	CurrentHealth - value;

	if (CurrentHealth <= 0.0f)
	{
		CurrentHealth = 0.0f;
	}
}

void ASCP_Base::Heal(float value)
{
	CurrentHealth + value;

	if (CurrentHealth > MaxHealth)
	{
		CurrentHealth = MaxHealth;
	}
}

