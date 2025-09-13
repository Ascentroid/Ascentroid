#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyTypeEnum.h"

// Generated
#include "AscEnemyDataAssetStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscEnemyDataAssetStruct : public FAscEditorToolDataAssetStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EAscMapKitEnemyTypeEnum EnemyType;
};