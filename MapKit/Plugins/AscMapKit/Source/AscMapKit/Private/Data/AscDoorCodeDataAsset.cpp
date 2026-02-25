#include "AscMapKit/Public/Data/AscDoorCodeDataAsset.h"

UAscDoorCodeDataAsset::UAscDoorCodeDataAsset()
{
}

TArray<FAscEditorToolDataAssetStruct> UAscDoorCodeDataAsset::GetAssetItemsAsEditorToolData()
{
	TArray<FAscEditorToolDataAssetStruct> Result;

	Result.Reserve(AssetItems.Num());

	for (const auto &Item : AssetItems)
		Result.Add(Item);

	return Result;
}

const FAscDoorCodeDataAssetStruct &UAscDoorCodeDataAsset::Get(const EAscMapKitDoorCodeTypeEnum &DoorCodeType)
{
	for (auto &Item : AssetItems)
	{
		if (Item.DoorCodeType == DoorCodeType)
			return Item;
	}

	static FAscDoorCodeDataAssetStruct DefaultStruct;

	return DefaultStruct;
}