#include "AscMapKit/Public/Data/AscTriggerDataAsset.h"

UAscTriggerDataAsset::UAscTriggerDataAsset()
{
}

TArray<FAscEditorToolDataAssetStruct> UAscTriggerDataAsset::GetAssetItemsAsEditorToolData()
{
	TArray<FAscEditorToolDataAssetStruct> Result;

	Result.Reserve(AssetItems.Num());

	for (const auto &Item : AssetItems)
		Result.Add(Item);

	return Result;
}