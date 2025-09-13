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
				"Engine",
				"Niagara"
			});

        PrivateDependencyModuleNames.AddRange(
			new []
			{
				"CoreUObject",
				"Slate",
				"SlateCore"
			});

        //DynamicallyLoadedModuleNames.AddRange(new [] {});
	}
}