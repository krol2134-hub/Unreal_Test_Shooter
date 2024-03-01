// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test_Shooting : ModuleRules
{
	public Test_Shooting(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
