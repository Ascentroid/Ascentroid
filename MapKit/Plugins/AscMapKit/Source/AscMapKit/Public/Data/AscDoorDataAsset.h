#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Data/AscDoorDataAssetStruct.h"

// Generated
#include "AscDoorDataAsset.generated.h"

// todo: these should be renamed and prefixed with AscMapKit
UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscDoorDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UAscDoorDataAsset();

	UPROPERTY(EditAnywhere)
	TArray<FAscDoorDataAssetStruct> AssetItems;

	UFUNCTION()
	TArray<FAscEditorToolDataAssetStruct> GetAssetItemsAsEditorToolData();

	UFUNCTION()
	const FAscDoorDataAssetStruct &Get(const EAscMapKitDoorTypeEnum &DoorType);
};