// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VerticalGJ_Group1 : ModuleRules
{
	public VerticalGJ_Group1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" , "UMG" });
	}
}
