using UnrealBuildTool;

public class AscMapKitEditor : ModuleRules
{
	public AscMapKitEditor(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        //PublicIncludePaths.AddRange(new [] {});
        //PrivateIncludePaths.AddRange(new [] {});

        PublicDependencyModuleNames.AddRange(
			new []
			{
				"AscMapKit",
				"Core",
				"Niagara"
			});

        PrivateDependencyModuleNames.AddRange(
			new []
			{
				"AscMapKit",
				"Blutility",
				"CoreUObject",
				"EditorStyle",
				"Engine",
				"ProceduralMeshComponent",
				"Projects",
				"Slate",
				"SlateCore",
				"UMG",
				"UMGEditor",
				"UnrealEd"
			});

        //DynamicallyLoadedModuleNames.AddRange(new [] {});
	}
}