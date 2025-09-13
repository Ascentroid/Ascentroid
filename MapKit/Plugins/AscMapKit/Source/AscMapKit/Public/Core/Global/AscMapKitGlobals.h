#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEnvironmentAreaDataAsset.h"
#include "AscMapKit/Public/Data/AscDecorDataAsset.h"
#include "AscMapKit/Public/Data/AscDoorDataAsset.h"
#include "AscMapKit/Public/Data/AscDoorFrameDataAsset.h"
#include "AscMapKit/Public/Data/AscEnemyDataAsset.h"
#include "AscMapKit/Public/Data/AscFanDataAsset.h"
#include "AscMapKit/Public/Data/AscTriggerDataAsset.h"

// Generated
#include "AscMapKitGlobals.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscMapKitGlobals : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
	static UAscEnvironmentAreaDataAsset *GetEnvironmentAreaDataAsset();

	UFUNCTION()
	static UAscDecorDataAsset *GetDecorDataAsset();

	UFUNCTION()
	static UAscDoorDataAsset *GetDoorDataAsset();

	UFUNCTION()
	static UAscDoorFrameDataAsset *GetDoorFrameDataAsset();

	UFUNCTION()
	static UAscEnemyDataAsset *GetEnemyDataAsset();

	UFUNCTION()
	static UAscFanDataAsset *GetFanDataAsset();

	UFUNCTION()
	static UAscTriggerDataAsset *GetTriggerDataAsset();
};