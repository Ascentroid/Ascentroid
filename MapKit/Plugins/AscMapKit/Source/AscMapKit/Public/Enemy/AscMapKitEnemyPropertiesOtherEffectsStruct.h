#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitSoundClassEnum.h"

// Generated
#include "AscMapKitEnemyPropertiesOtherEffectsStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesOtherEffectsStruct
{
    GENERATED_BODY()

    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultExplodeParticles;

    // Specify a collection of particles, which is selected randomly during game runtime, when the enemy is destroyed. Leave empty for game runtime default.
    // * If the collection is empty, it will be ignored.
    // * For example: a fiery explosion.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<UParticleSystem *> ExplodeRandomParticles;

    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultOnHitParticles;

    // Specify a collection of particles, which is selected randomly during game runtime, when the enemy is hit by a projectile. Leave empty for game runtime default.
    // * If the collection is empty, it will be ignored.
    // * For example: an explosion, or a shield hit effect.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<UParticleSystem *> OnHitRandomParticles;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayAmbientSoundCue;

    // Specify a custom sound to play as an ambient effect for this enemy. Leave empty for game runtime default.
    // * For example: a repeating mechanical, engine and/or energy sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayAmbientSoundCue;

    // Specify a custom game runtime sound class for the ambient sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayAmbientSoundCueSoundClass;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayOnHitSoundCue;

    // Specify a custom sound to play as an on hit effect for this enemy. Leave empty for game runtime default.
    // * For example: an explosion, or shield hit sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayOnHitSoundCue;

    // Specify a custom game runtime sound class for the on hit sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayOnHitSoundCueSoundClass;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayTakeDamageSoundCue;

    // Specify a custom sound to play as a damage effect for this enemy. Leave empty for game runtime default.
    // * For example: a mechanical scream, or anger sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayTakeDamageSoundCue;

    // Specify a custom game runtime sound class for the damage sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayTakeDamageSoundCueSoundClass;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayTalkSoundCue;

    // Specify a custom sound to play as a talk effect for this enemy. Leave empty for game runtime default.
    // * For example: a mechanical or robotic saying, like "Die". Be creative.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayTalkSoundCue;

    // Specify a custom game runtime sound class for the talk sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayTalkSoundCueSoundClass;

    // A minimum value for how long to wait, in seconds, before the enemy will repeat their "talk" sound. The wait value is selected randomly between the minimum and maximum range after each play.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 PlayTalkSoundCueRepeatWaitMinimumSeconds;

    // A maximum value for how long to wait, in seconds, before the enemy will repeat their "talk" sound. The wait value is selected randomly between the minimum and maximum range after each play.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 PlayTalkSoundCueRepeatWaitMaximumSeconds;
    
    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayDeathSoundCue;

    // Specify a custom sound to play as a death effect for this enemy. Leave empty for game runtime default.
    // * For example: a mechanical, robotic or energy "scream". Be creative.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayDeathSoundCue;

    // Specify a custom game runtime sound class for the death sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayDeathSoundCueSoundClass;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayVictorySoundCue;

    // Specify a custom sound to play as a victory effect for this enemy. Leave empty for game runtime default.
    // This is played, randomly, when a player dies.
    // * For example: a mechanical, robotic or energy "laugh". Be creative.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayVictorySoundCue;

    // Specify a custom game runtime sound class for the victory sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayVictorySoundCueSoundClass;

    // A percent value used to randomly play the victory sound when a player dies.
    // 0 to 100 (percent)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 ChanceToPlayVictorySoundCue;
};