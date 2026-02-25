#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Data/AscDecorPictureDataAssetStruct.h"

// Generated
#include "AscDecorPictureDataAsset.generated.h"

// todo: these should be renamed and prefixed with AscMapKit
UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscDecorPictureDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UAscDecorPictureDataAsset();

	UPROPERTY(EditAnywhere)
	TArray<FAscDecorPictureDataAssetStruct> AssetItems;

	UFUNCTION()
	TArray<FAscEditorToolDataAssetStruct> GetAssetItemsAsEditorToolData();
};