#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitSoundClassEnum.h"
#include "AscMapKit/Public/Destructible/AscMapKitDestructiblePropertiesSplashDamageStruct.h"
#include "AscMapKit/Public/Destructible/AscMapKitDestructiblePropertiesStruct.h"
#include "AscMapKit/Public/Fan/AscMapKitFanTypeEnum.h"

// Generated
#include "AscMapKitFanPropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitFanPropertiesStruct
{
    GENERATED_BODY()

    // Used by the game runtime to identify the fan type.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitFanTypeEnum FanType;

    // Used by the game runtime to display the fan name. This is used for HUD messages.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString DisplayName;

    // Used by the game runtime to disable all collision on the fan.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableCollision;

    // Controls the animation speed for the skeletal mesh. A custom skeletal mesh will override this (setup what you want in your custom skeletal mesh).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float AnimationSpeed;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayAmbientSoundCue;

    // Specify a custom sound to play as an ambient effect for this fan. Leave empty for game runtime default.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayAmbientSoundCue;

    // Customize the ambient sound cue pitch.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float PlayAmbientSoundCuePitch;

    // Specify a custom game runtime sound class for the ambient sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayAmbientSoundCueSoundClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDestructiblePropertiesStruct Destructible;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDestructiblePropertiesSplashDamageStruct SplashDamage;
};