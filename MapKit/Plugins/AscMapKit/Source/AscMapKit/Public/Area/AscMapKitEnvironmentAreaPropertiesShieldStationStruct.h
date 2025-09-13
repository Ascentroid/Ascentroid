#pragma once

// Generated
#include "AscMapKitEnvironmentAreaPropertiesShieldStationStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesShieldStationStruct
{
	GENERATED_BODY()

	// Check to enable this environment area as a shield station.
	// * Remember to check the value you set for Environment Area Type.
	// * If you selected a Shield Station for Environment Type, this will auto-enable at runtime.
	// * This is a separate option in case you want to mix a Shield Station with a different environment area type (i.e. Water).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;
};