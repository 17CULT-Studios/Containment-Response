// Copyright Epic Games, Inc. All Rights Reserved.

#include "Containment_ResponseGameMode.h"
#include "Containment_ResponseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AContainment_ResponseGameMode::AContainment_ResponseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
