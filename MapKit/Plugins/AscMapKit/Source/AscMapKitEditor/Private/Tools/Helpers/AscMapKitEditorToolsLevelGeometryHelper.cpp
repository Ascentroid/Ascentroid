#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsLevelGeometryHelper.h"

// Ascentroid
#include "AscMapKit/Public/Core/Util/AscMapKitLevelGeometryUtil.h"
#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsHelper.h"

TArray<FVector> UAscMapKitEditorToolsLevelGeometryHelper::GetRandomLocations()
{
	UAscMapKitLevelGeometryUtil::OnLevelMeshProcessing.BindStatic(&UAscMapKitEditorToolsLevelGeometryHelper::OnLevelMeshProcessingHandler);
	UAscMapKitLevelGeometryUtil::OnLevelMeshesNotFound.BindStatic(&UAscMapKitEditorToolsLevelGeometryHelper::OnLevelMeshesNotFoundHandler);

	return UAscMapKitLevelGeometryUtil::GetRandomLocations(UAscMapKitEditorToolsHelper::GetEditorWorld());
}

void UAscMapKitEditorToolsLevelGeometryHelper::OnLevelMeshProcessingHandler(FString StaticMeshActorName)
{
	UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Processing Level Mesh: (%s)"), *StaticMeshActorName));
}

void UAscMapKitEditorToolsLevelGeometryHelper::OnLevelMeshesNotFoundHandler()
{
	UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("No meshes were found (AStaticMeshActor)."));
}