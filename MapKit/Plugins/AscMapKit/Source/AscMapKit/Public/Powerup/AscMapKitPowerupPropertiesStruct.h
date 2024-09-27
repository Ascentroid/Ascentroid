#pragma once

// Ascentroid
#include "AscMapKit/Public/Powerup/AscMapKitPowerupTypeEnum.h"

// Generated
#include "AscMapKitPowerupPropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitPowerupPropertiesStruct
{
    GENERATED_BODY()

    // Used by the game runtime to identify the powerup type.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitPowerupTypeEnum PowerupType;

    // If checked, the editor will use the custom sprite provided. Helpful if you are building a MOD with custom weapons.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool UseCustomEditorSprite;

    // If "Use Custom Editor Sprite" is set to true, the editor will use the custom sprite provided. Helpful if you are building a MOD with custom weapons.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UTexture2D *CustomEditorSprite;
};