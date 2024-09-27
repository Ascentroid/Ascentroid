#pragma once

// Ascentroid
#include "AscMapKit/Public/Powerup/AscMapKitPowerupTypeEnum.h"

// Generated
#include "AscMapKitEditorToolsPowerupHelper.generated.h"

UCLASS(BlueprintType)
class ASCMAPKITEDITOR_API UAscMapKitEditorToolsPowerupHelper : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
	static FString GetNamePrefix(
		const EAscMapKitPowerupTypeEnum &PowerupType,
		const bool &bIncludeDefaultPowerupName,
		const FString &DefaultName = TEXT("")
	);
};