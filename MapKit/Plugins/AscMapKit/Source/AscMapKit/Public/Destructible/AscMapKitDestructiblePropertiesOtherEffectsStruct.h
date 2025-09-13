#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitSoundClassEnum.h"

// Generated
#include "AscMapKitDestructiblePropertiesOtherEffectsStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDestructiblePropertiesOtherEffectsStruct
{
    GENERATED_BODY()

    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultOnHitParticles;

    // Specify a collection of particles, which is selected randomly during game runtime, when the enemy is hit by a projectile. Leave empty for game runtime default.
    // * If the collection is empty, it will be ignored.
    // * For example: an explosion, or a shield hit effect.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<UParticleSystem *> OnHitRandomParticles;
    //TArray<UNiagaraSystem *> OnHitRandomParticles;

    // If a particle is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no particle will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultDestroyParticle;
    
    // The particle to use when the door is destroyed. If empty, the game runtime default will be used.
    // * For example: an explosion effect.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UParticleSystem *DestroyParticle;
    //UNiagaraSystem *DestroyParticle;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayImpactSoundCue;

    // Specify a custom sound to play as an impact effect for this destructible. Leave empty for game runtime default.
    // * For example: a "crumble" sound for a rock wall. Or, a "ting" sound for metal.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayImpactSoundCue;

    // Specify a custom game runtime sound class for the impact sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayImpactSoundCueSoundClass;
    
    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayDestroySoundCue;
    
    // Specify a custom sound to play as a destroyed effect for this destructible. Leave empty for game runtime default.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayDestroySoundCue;

    // Specify a custom game runtime sound class for the destroy sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayDestroySoundCueSoundClass;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayDisappearSoundCue;
    
    // Specify a custom sound to play as a disappear effect for this destructible. Leave empty for game runtime default.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayDisappearSoundCue;

    // Specify a custom game runtime sound class for the disappear sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayDisappearSoundCueSoundClass;
};