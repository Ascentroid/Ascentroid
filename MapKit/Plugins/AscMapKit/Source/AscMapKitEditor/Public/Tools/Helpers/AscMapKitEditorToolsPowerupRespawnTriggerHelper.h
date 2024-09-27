#pragma once

// Ascentroid
#include "AscMapKit/Public/Powerup/AscMapKitPowerupTypeEnum.h"

// Generated
#include "AscMapKitEditorToolsPowerupRespawnTriggerHelper.generated.h"

UCLASS(BlueprintType)
class ASCMAPKITEDITOR_API UAscMapKitEditorToolsPowerupRespawnTriggerHelper : public UObject
{
	GENERATED_BODY()

public:
	static void Generate(const FString &ForClassName, const char *ForFunction, const bool &bDeleteExistingTriggers = false);

    static bool IsValidStaticMesh(const UStaticMesh *StaticMesh);

	// TArray<TPair<TriangleCenter, FaceNormal>>
	static TArray<TPair<FVector, FVector>> ExtractTriangleCenterAndFaceNormal(const FPositionVertexBuffer &PositionVertexBuffer, const FIndexArrayView &IndexBufferArray);
};