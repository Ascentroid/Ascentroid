#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Door/AscMapKitDoorCodeTypeEnum.h"

// Generated
#include "AscDoorCodeDataAssetStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscDoorCodeDataAssetStruct : public FAscEditorToolDataAssetStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EAscMapKitDoorCodeTypeEnum DoorCodeType;

	UPROPERTY(EditAnywhere)
	UStaticMesh *StaticMesh;
};