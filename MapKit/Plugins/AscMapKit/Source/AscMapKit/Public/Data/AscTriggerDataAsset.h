#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Data/AscTriggerDataAssetStruct.h"

// Generated
#include "AscTriggerDataAsset.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscTriggerDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UAscTriggerDataAsset();

	UPROPERTY(EditAnywhere)
	TArray<FAscTriggerDataAssetStruct> AssetItems;

	UFUNCTION()
	TArray<FAscEditorToolDataAssetStruct> GetAssetItemsAsEditorToolData();
};