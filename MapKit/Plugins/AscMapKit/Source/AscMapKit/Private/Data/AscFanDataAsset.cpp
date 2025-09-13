#include "AscMapKit/Public/Data/AscFanDataAsset.h"

UAscFanDataAsset::UAscFanDataAsset()
{
}

TArray<FAscEditorToolDataAssetStruct> UAscFanDataAsset::GetAssetItemsAsEditorToolData()
{
	TArray<FAscEditorToolDataAssetStruct> Result;

	Result.Reserve(AssetItems.Num());

	for (const auto &Item : AssetItems)
		Result.Add(Item);

	return Result;
}

const FAscFanDataAssetStruct &UAscFanDataAsset::Get(const EAscMapKitFanTypeEnum &FanType)
{
	for (auto &Item : AssetItems)
	{
		if (Item.FanType == FanType)
			return Item;
	}

	static FAscFanDataAssetStruct DefaultStruct;

	return DefaultStruct;
}