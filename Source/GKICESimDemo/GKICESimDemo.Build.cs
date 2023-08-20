// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GKICESimDemo : ModuleRules
{
	public GKICESimDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_2;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "ChaosVehicles", "HeadMountedDisplay", "PhysicsCore" });

		PublicDefinitions.Add("HMD_MODULE_INCLUDED=0");
	}
}
