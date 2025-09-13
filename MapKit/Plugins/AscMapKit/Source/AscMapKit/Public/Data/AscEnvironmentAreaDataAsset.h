#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Data/AscEnvironmentAreaDataAssetStruct.h"

// Generated
#include "AscEnvironmentAreaDataAsset.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscEnvironmentAreaDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UAscEnvironmentAreaDataAsset();

	UPROPERTY(EditAnywhere)
	TArray<FAscEnvironmentAreaDataAssetStruct> AssetItems;

	UFUNCTION()
	TArray<FAscEditorToolDataAssetStruct> GetAssetItemsAsEditorToolData();
};