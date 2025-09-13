#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Data/AscFanDataAssetStruct.h"

// Generated
#include "AscFanDataAsset.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscFanDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UAscFanDataAsset();

	UPROPERTY(EditAnywhere)
	TArray<FAscFanDataAssetStruct> AssetItems;

	UFUNCTION()
	TArray<FAscEditorToolDataAssetStruct> GetAssetItemsAsEditorToolData();

	UFUNCTION()
	const FAscFanDataAssetStruct &Get(const EAscMapKitFanTypeEnum &FanType);
};