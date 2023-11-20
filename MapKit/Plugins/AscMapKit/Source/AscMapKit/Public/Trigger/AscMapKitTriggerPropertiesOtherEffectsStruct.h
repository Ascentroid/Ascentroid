#pragma once

// UE
#include "NiagaraComponent.h"

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitSoundClassEnum.h"

// Generated
#include "AscMapKitTriggerPropertiesOtherEffectsStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesOtherEffectsStruct
{
    GENERATED_BODY()

    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultActiveOnHitParticle;

    // Specify a custom particle to play as an on hit effect for this trigger while it is in an active state. Leave empty for game runtime default.
    // * For example: for a mechanical trigger, like a metal/spark hit particle.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UParticleSystem *ActiveOnHitParticle;
    //UNiagaraSystem *ActiveOnHitParticle;

    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultActiveMaxExecutionCountReachedParticle;

    // Specify a custom particle to play as an activation effect for this trigger. Leave empty for game runtime default.
    // * For example: for a mechanical trigger, like an electric explosion particle.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UParticleSystem *ActiveMaxExecutionCountReachedParticle;
    //UNiagaraSystem *ActiveMaxExecutionCountReachedParticle;

    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultInactiveParticle;

    // Specify a custom particle to play as an inactive effect for this trigger. Leave empty for game runtime default.
    // * For example: for a mechanical trigger, perhaps smoke since it's no longer active (i.e. destroyed).
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UParticleSystem *InactiveParticle;
    //UNiagaraSystem *InactiveParticle;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayActiveOnHitSoundCue;

    // Specify a custom sound to play as an on hit effect for this trigger while it is in an active state. Leave empty for game runtime default.
    // * For example: for a mechanical trigger, like a metal/spark hit sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayActiveOnHitSoundCue;

    // Specify a custom game runtime sound class for the on hit sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayActiveOnHitSoundCueSoundClass;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue;
    
    // Specify a custom sound to play as an activation effect for this trigger. Leave empty for game runtime default.
    // * For example: for a mechanical trigger, like an activated beep sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayActiveMaxExecutionCountReachedSoundCue;
    
    // Specify a custom game runtime sound class for the ambient sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayActiveMaxExecutionCountReachedSoundCueSoundClass;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayInactiveSoundCue;

    // Specify a custom sound to play as an inactive effect for this trigger. Leave empty for game runtime default.
    // * For example: for a mechanical trigger, like a deactivated beep sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayInactiveSoundCue;

    // Specify a custom game runtime sound class for the ambient sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayInactiveSoundCueSoundClass;
};