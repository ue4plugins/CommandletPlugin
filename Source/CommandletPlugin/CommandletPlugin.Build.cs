// Copyright 2015 Headcrash Industries LLC. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class CommandletPlugin : ModuleRules
	{
		public CommandletPlugin(TargetInfo Target)
		{
            PrivateDependencyModuleNames.AddRange(
                new string[] {
					"Core",
					"CoreUObject",
					"Engine",
                }
            );

			PrivateIncludePaths.AddRange(
				new string[] {
					"CommandletPlugin/Private",
					"CommandletPlugin/Private/Commandlets"
				}
			);
		}
	}
}
