#include "AscMapKit/Public/Data/AscDecorDataAsset.h"

UAscDecorDataAsset::UAscDecorDataAsset()
{
}

TArray<FAscEditorToolDataAssetStruct> UAscDecorDataAsset::GetAssetItemsAsEditorToolData()
{
	TArray<FAscEditorToolDataAssetStruct> Result;

	Result.Reserve(AssetItems.Num());

	for (const auto &Item : AssetItems)
		Result.Add(Item);

	return Result;
}

const FAscDecorDataAssetStruct &UAscDecorDataAsset::Get(const EAscMapKitDecorTypeEnum &DecorType)
{
	for (auto &Item : AssetItems)
	{
		if (Item.DecorType == DecorType)
			return Item;
	}

	static FAscDecorDataAssetStruct DefaultStruct;

	return DefaultStruct;
}