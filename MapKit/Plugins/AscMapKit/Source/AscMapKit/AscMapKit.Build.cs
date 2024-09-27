using UnrealBuildTool;

public class AscMapKit : ModuleRules
{
	public AscMapKit(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        //PublicIncludePaths.AddRange(new [] {});
        //PrivateIncludePaths.AddRange(new [] {});

        PublicDependencyModuleNames.AddRange(
			new []
			{
				"Core",
				"Niagara"
			});

        PrivateDependencyModuleNames.AddRange(
			new []
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"
			});

        //DynamicallyLoadedModuleNames.AddRange(new [] {});
	}
}