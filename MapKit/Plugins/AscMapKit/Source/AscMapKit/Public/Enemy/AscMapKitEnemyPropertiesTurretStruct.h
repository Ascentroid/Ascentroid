#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitSoundClassEnum.h"

// Generated
#include "AscMapKitEnemyPropertiesTurretStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesTurretStruct
{
    GENERATED_BODY()

    // If enabled, this enemy will behave like a turret. Negates melee configuration.
    // * Turrets must have three static mesh components configured with specific UE4 component names:
    // - "TurretRoot": the base of the turret. Acts as the component root. The part that touches the "ground" (such as legs).
    // - "TurretPivot": the pivot static mesh of the turret.
    // - "TurretWeapon": the static mesh with weapon sockets.
    // * Any other static meshes with different component names will still be visible, but their targeting movement will not be controlled by the game runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // How quickly the turret will track a player.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "10.0"))
    float TrackSpeed;

    // If set, the explosion particle will be spawned at the "TurretRoot" location.
    // If not set, the explosion particle will be spawned at the actor center location.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool SetExplosionAtRootComponent;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayRotateSoundCue;

    // Specify a custom sound to play when the turret is rotating. Leave empty for game runtime default.
    // For example: a mechanical grinding/tracking sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayRotateSoundCue;

    // Specify a custom game runtime sound class for the turret rotate sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayRotateSoundCueSoundClass;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayRotateStartSoundCue;

    // Specify a custom sound to play when the turret is begins to rotate. Leave empty for game runtime default.
    // * For example: a mechanical "wind up" sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayRotateStartSoundCue;

    // Specify a custom game runtime sound class for the turret start rotate sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayRotateStartSoundCueSoundClass;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayRotateStopSoundCue;

    // Specify a custom sound to play when the turret stops rotating. Leave empty for game runtime default.
    // * For example: a mechanical "wind down" sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayRotateStopSoundCue;

    // Specify a custom game runtime sound class for the turret stop rotate sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayRotateStopSoundCueSoundClass;
};