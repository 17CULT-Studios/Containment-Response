// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Containment_Response : ModuleRules
{
	public Containment_Response(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput","NavigationSystem","OnlineSubsystem","OnlineSubsystemUtils" });
		PrivateDependencyModuleNames.Add("OnlineSubsystemSteam");
	}
}
