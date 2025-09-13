#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Data/AscEnemyDataAssetStruct.h"

// Generated
#include "AscEnemyDataAsset.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscEnemyDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UAscEnemyDataAsset();

	UPROPERTY(EditAnywhere)
	TArray<FAscEnemyDataAssetStruct> AssetItems;

	UFUNCTION()
	TArray<FAscEditorToolDataAssetStruct> GetAssetItemsAsEditorToolData();
};