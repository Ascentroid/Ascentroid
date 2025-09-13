#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Data/AscDecorDataAssetStruct.h"

// Generated
#include "AscDecorDataAsset.generated.h"

// todo: these should be renamed and prefixed with AscMapKit
UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscDecorDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UAscDecorDataAsset();

	UPROPERTY(EditAnywhere)
	TArray<FAscDecorDataAssetStruct> AssetItems;

	UFUNCTION()
	TArray<FAscEditorToolDataAssetStruct> GetAssetItemsAsEditorToolData();

	UFUNCTION()
	const FAscDecorDataAssetStruct &Get(const EAscMapKitDecorTypeEnum &DecorType);
};