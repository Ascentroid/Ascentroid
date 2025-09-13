#include "AscMapKit/Public/Data/AscDoorDataAsset.h"

UAscDoorDataAsset::UAscDoorDataAsset()
{
}

TArray<FAscEditorToolDataAssetStruct> UAscDoorDataAsset::GetAssetItemsAsEditorToolData()
{
	TArray<FAscEditorToolDataAssetStruct> Result;

	Result.Reserve(AssetItems.Num());

	for (const auto &Item : AssetItems)
		Result.Add(Item);

	return Result;
}

const FAscDoorDataAssetStruct &UAscDoorDataAsset::Get(const EAscMapKitDoorTypeEnum &DoorType)
{
	for (auto &Item : AssetItems)
	{
		if (Item.DoorType == DoorType)
			return Item;
	}

	static FAscDoorDataAssetStruct DefaultStruct;

	return DefaultStruct;
}