// Copyright Epic Games, Inc. All Rights Reserved.

#include "Containment_ResponseGameMode.h"
#include "Containment_ResponseCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "GameFramework/PlayerState.h"

AContainment_ResponseGameMode::AContainment_ResponseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

void AContainment_ResponseGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	if (!NewPlayer) return;

	APlayerState* PS = NewPlayer->PlayerState;
	if (!PS) return;

	IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get();
	if (!OnlineSub) return;

	IOnlineIdentityPtr Identity = OnlineSub->GetIdentityInterface();
	if (!Identity.IsValid()) return;

	TSharedPtr<const FUniqueNetId> UserId = PS->GetUniqueId().GetUniqueNetId();

	if (UserId.IsValid())
	{
		FString SteamName = Identity->GetPlayerNickname(*UserId);
		PS->SetPlayerName(SteamName);
		UE_LOG(LogTemp, Log, TEXT("Player joined with Steam name: %s"), *SteamName);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to get Steam ID from player!"));
	}
}
