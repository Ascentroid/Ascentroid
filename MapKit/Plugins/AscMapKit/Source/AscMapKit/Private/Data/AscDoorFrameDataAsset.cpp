#include "AscMapKit/Public/Data/AscDoorFrameDataAsset.h"

UAscDoorFrameDataAsset::UAscDoorFrameDataAsset()
{
}

TArray<FAscEditorToolDataAssetStruct> UAscDoorFrameDataAsset::GetAssetItemsAsEditorToolData()
{
	TArray<FAscEditorToolDataAssetStruct> Result;

	Result.Reserve(AssetItems.Num());

	for (const auto &Item : AssetItems)
		Result.Add(Item);

	return Result;
}

const FAscDoorFrameDataAssetStruct &UAscDoorFrameDataAsset::Get(const EAscMapKitDoorFrameTypeEnum &DoorFrameType)
{
	for (auto &Item : AssetItems)
	{
		if (Item.DoorFrameType == DoorFrameType)
			return Item;
	}

	static FAscDoorFrameDataAssetStruct DefaultStruct;

	return DefaultStruct;
}