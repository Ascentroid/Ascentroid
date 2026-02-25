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

const FAscTriggerDataAssetStruct &UAscTriggerDataAsset::Get(const EAscMapKitTriggerTypeEnum &TriggerType)
{
	for (auto &Item : AssetItems)
	{
		if (Item.TriggerType == TriggerType)
			return Item;
	}

	static FAscTriggerDataAssetStruct DefaultStruct;

	return DefaultStruct;
}