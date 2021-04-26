// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_MultiplayerTemp : ModuleRules
{
	public UE_MultiplayerTemp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
