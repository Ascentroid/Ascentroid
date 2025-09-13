#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Data/AscDoorFrameDataAssetStruct.h"

// Generated
#include "AscDoorFrameDataAsset.generated.h"

// todo: these should be renamed and prefixed with AscMapKit
UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscDoorFrameDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UAscDoorFrameDataAsset();

	UPROPERTY(EditAnywhere)
	TArray<FAscDoorFrameDataAssetStruct> AssetItems;

	UFUNCTION()
	TArray<FAscEditorToolDataAssetStruct> GetAssetItemsAsEditorToolData();

	UFUNCTION()
	const FAscDoorFrameDataAssetStruct &Get(const EAscMapKitDoorFrameTypeEnum &DoorFrameType);
};