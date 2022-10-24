#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitSoundClassEnum.h"
#include "AscMapKit/Public/Fan/AscMapKitFanPropertiesCustomStruct.h"
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

    // Specify a custom game runtime sound class for the ambient sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayAmbientSoundCueSoundClass;

    // todo: @pak: @consideration: expose an array of material structs TArray<SlotName, UMaterialInstance> with a list of hard-coded slot names
    // todo: @pak: @consideration: so people can customize the materials on existing pre-built assets
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitFanPropertiesCustomStruct Custom;
};