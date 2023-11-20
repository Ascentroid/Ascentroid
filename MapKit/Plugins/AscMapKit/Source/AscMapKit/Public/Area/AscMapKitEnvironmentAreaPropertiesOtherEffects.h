#pragma once

// UE
#include "NiagaraComponent.h"

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitSoundClassEnum.h"

// Generated
#include "AscMapKitEnvironmentAreaPropertiesOtherEffects.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesOtherEffects
{
	GENERATED_BODY()

	// To save on performance, projectile lights are disabled in environment areas (except flares). Check this to force enable projectile lights for this environment area.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool ForceEnableProjectileLights;
	
    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultOnOverlapRandomParticles;

	// Specify a collection of particles, which is selected randomly during game runtime, when an overlap occurs on this environment area. Leave empty for game runtime default.
	// * If the collection is empty, it will be ignored.
	// * For example: a water splash upon actor (projectile, player, enemy) entry.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<UParticleSystem *> OnOverlapRandomParticles;
    //TArray<UNiagaraSystem *> OnOverlapRandomParticles;

    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultOnOverlapEndRandomParticles;

	// Specify a collection of particles, which is selected randomly during game runtime, when an overlap end occurs on this environment area. Leave empty for game runtime default.
	// * If the collection is empty, it will be ignored.
	// * For example: a water splash upon actor (projectile, player, enemy) exit.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<UParticleSystem *> OnOverlapEndRandomParticles;
    //TArray<UNiagaraSystem *> OnOverlapEndRandomParticles;

    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultOnOverlapAttachParticleToActor;

	// Specify a particle to attach to the actor when an overlap occurs on this environment area. Leave empty for game runtime default.
	// * For example: bubbles as a water trail for a projectile.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	UParticleSystem *OnOverlapAttachParticleToActor;
    //UNiagaraSystem *OnOverlapAttachParticleToActor;

    // A percentage (0 to 100) chance for the "On Overlap Attach Particle to Actor" particle to execute when an overlap end occurs on this environment area.
    // * This could be useful for tweaking performance. If you do not want a lot of particles to spawn, lower the percentage value here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ChanceToSpawnOnOverlapAttachParticle;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultGeneralAmbientSoundCue;

    // Specify a custom sound to play as a general ambient effect for the environment area. This is played for all players and extends beyond being inside the area. Leave empty for game runtime default.
    // * For example: a power station hum effect.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *GeneralAmbientSoundCue;

	// Specify a custom game runtime sound class for the general ambient sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum GeneralAmbientSoundCueSoundClass;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultCurrentPlayerAmbientSoundCue;

	// Specify a custom sound to play as an ambient effect for the environment area, but only played for the current player when they are inside the area. Leave empty for game runtime default.
	// * This is typically a looping sound effect which plays continuously, like a background sound effect, but only the current player.
	// * For example: for water, a low frequency constant noise ambient sound effect.
	// * Another example: for lava, hissing and bubbling ambient sound effects.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *CurrentPlayerAmbientSoundCue;

	// Specify a custom game runtime sound class for the current player ambient sound. If set to "Default", it will use the game runtime default (sound class "SFX").
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	EAscMapKitSoundClassEnum CurrentPlayerAmbientSoundCueSoundClass;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultOnOverlapSoundCue;

	// Specify a custom sound to play when an overlap occurs on this environment area. Leave empty for game runtime default.
	// * For example: for water, a splash sound effect.
	// * Another example: for lava, an explosion sound effect.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *OnOverlapSoundCue;

	// Specify a custom game runtime sound class for the on overlap sound. If set to "Default", it will use the game runtime default (sound class "SFX").
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	EAscMapKitSoundClassEnum OnOverlapSoundCueClass;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultOnOverlapEndSoundCue;

	// Specify a custom sound to play when an overlap end occurs on this environment area. Leave empty for game runtime default.
	// * For example: for water, a splash sound effect.
	// * Another example: for lava, an explosion sound effect.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *OnOverlapEndSoundCue;

	// Specify a custom game runtime sound class for the on overlap end sound. If set to "Default", it will use the game runtime default (sound class "SFX").
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	EAscMapKitSoundClassEnum OnOverlapEndSoundCueClass;
};