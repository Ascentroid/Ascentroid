#pragma once

// Generated
#include "AscMapKitEditorToolsLevelGeometryHelper.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKITEDITOR_API UAscMapKitEditorToolsLevelGeometryHelper : public UObject
{
	GENERATED_BODY()

public:
	static TArray<FVector> GetRandomLocations();

	static void OnLevelMeshProcessingHandler(FString StaticMeshActorName);

	static void OnLevelMeshesNotFoundHandler();
};