#include "AscMapKit/Public/Data/AscEnemyDataAsset.h"

UAscEnemyDataAsset::UAscEnemyDataAsset()
{
}

TArray<FAscEditorToolDataAssetStruct> UAscEnemyDataAsset::GetAssetItemsAsEditorToolData()
{
	TArray<FAscEditorToolDataAssetStruct> Result;

	Result.Reserve(AssetItems.Num());

	for (const auto &Item : AssetItems)
		Result.Add(Item);

	return Result;
}