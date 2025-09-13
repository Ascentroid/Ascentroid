#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerTypeEnum.h"

// Generated
#include "AscTriggerDataAssetStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscTriggerDataAssetStruct : public FAscEditorToolDataAssetStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EAscMapKitTriggerTypeEnum TriggerType;
};