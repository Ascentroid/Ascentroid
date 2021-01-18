#pragma once

// Generated
#include "AscMapKitDoorPropertiesSecretStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDoorPropertiesSecretStruct
{
    GENERATED_BODY()

    // If enabled, this door will be treated like a secret door.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // If enabled, this is required and must be unique per door.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString Id;

    // Optional. This is used for HUD messages.
    // * For example: if a trigger is blown, and is related to this secret door, this area name will be used in the HUD message.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString AreaName;
};