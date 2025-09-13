#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Door/AscMapKitDoorFrameTypeEnum.h"

// Generated
#include "AscDoorFrameDataAssetStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscDoorFrameDataAssetStruct : public FAscEditorToolDataAssetStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EAscMapKitDoorFrameTypeEnum DoorFrameType;

	UPROPERTY(EditAnywhere)
	UStaticMesh *StaticMesh;
};