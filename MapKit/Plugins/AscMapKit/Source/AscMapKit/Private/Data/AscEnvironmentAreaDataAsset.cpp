#include "AscMapKit/Public/Data/AscEnvironmentAreaDataAsset.h"

UAscEnvironmentAreaDataAsset::UAscEnvironmentAreaDataAsset()
{
}

TArray<FAscEditorToolDataAssetStruct> UAscEnvironmentAreaDataAsset::GetAssetItemsAsEditorToolData()
{
	TArray<FAscEditorToolDataAssetStruct> Result;

	Result.Reserve(AssetItems.Num());

	for (const auto &Item : AssetItems)
		Result.Add(Item);

	return Result;
}