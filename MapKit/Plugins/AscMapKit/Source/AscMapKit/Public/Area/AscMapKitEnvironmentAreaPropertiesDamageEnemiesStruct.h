#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitSoundClassEnum.h"

// Generated
#include "AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct
{
	GENERATED_BODY()

	// Check to enable damage against enemies.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

	// Specify how much shields to take away during damage.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Amount;

    // Specify how often (in seconds) to take away shields amount.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float RateSeconds;

    // If a particle isn't provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultParticle;

    // Specify a custom particle to execute when damage occurs. Leave empty for game runtime default.
    // * For example: for electricity, some kind of electrical effect.
    // * Another example: for lava, a fire effect.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UParticleSystem *Particle;

    // Specify a local offset for the particle when it executes. This is helpful in case you want to relocate the particle relative to the actor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FVector ParticleLocalOffset;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlaySoundCue;

    // Specify a custom sound to play when damage occurs. Leave empty for game runtime default.
    // For example: for electricity, a zapping sound effect.
    // Another example: for lava, a hissing, and/or bubbling effect.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlaySoundCue;

    // Specify a custom game runtime sound class for the custom damage sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlaySoundCueSoundClass;
};