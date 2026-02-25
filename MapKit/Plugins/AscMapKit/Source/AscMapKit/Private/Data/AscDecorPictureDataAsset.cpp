#include "AscMapKit/Public/Data/AscDecorPictureDataAsset.h"

UAscDecorPictureDataAsset::UAscDecorPictureDataAsset()
{
}

TArray<FAscEditorToolDataAssetStruct> UAscDecorPictureDataAsset::GetAssetItemsAsEditorToolData()
{
	TArray<FAscEditorToolDataAssetStruct> Result;

	Result.Reserve(AssetItems.Num());

	for (const auto &Item : AssetItems)
		Result.Add(Item);

	return Result;
}