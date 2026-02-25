#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Data/AscDoorCodeDataAssetStruct.h"

// Generated
#include "AscDoorCodeDataAsset.generated.h"

// todo: these should be renamed and prefixed with AscMapKit
UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscDoorCodeDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UAscDoorCodeDataAsset();

	UPROPERTY(EditAnywhere)
	TArray<FAscDoorCodeDataAssetStruct> AssetItems;

	UFUNCTION()
	TArray<FAscEditorToolDataAssetStruct> GetAssetItemsAsEditorToolData();

	UFUNCTION()
	const FAscDoorCodeDataAssetStruct &Get(const EAscMapKitDoorCodeTypeEnum &DoorCodeType);
};