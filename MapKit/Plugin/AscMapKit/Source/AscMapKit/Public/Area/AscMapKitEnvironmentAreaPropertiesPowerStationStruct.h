#pragma once

// Generated
#include "AscMapKitEnvironmentAreaPropertiesPowerStationStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesPowerStationStruct
{
	GENERATED_BODY()

	// Check to enable this environment area as a power station.
	// * Remember to check the value you set for Environment Area Type.
	// * If you selected a Power Station for Environment Type, this will auto-enable at runtime.
	// * This is a separate option in case you want to mix a Power Station with a different environment area type (i.e. Water).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;
};