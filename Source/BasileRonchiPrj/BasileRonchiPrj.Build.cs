// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BasileRonchiPrj : ModuleRules
{
	public BasileRonchiPrj(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
