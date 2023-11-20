#pragma once

// UE
#include "NiagaraComponent.h"

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitSoundClassEnum.h"

// Generated
#include "AscMapKitForcefieldPropertiesOtherEffectsStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitForcefieldPropertiesOtherEffectsStruct
{
    GENERATED_BODY()

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayAmbientSoundCue;
    
    // Specify a custom sound to play as an ambient effect for this forcefield. Leave empty for game runtime default.
    // * For example: a electrical buzzing sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayAmbientSoundCue;

    // Specify a custom game runtime sound class for the ambient sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayAmbientSoundCueSoundClass;

    // If you need to local offset the transform for the effects when they are spawned. Only location and rotation are used. Scale is ignored.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform PlayAmbientSoundCueLocalTransform;
    
    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultOnHitParticle;
    
    // Specify a particle to play when collision occurs on this forcefield. Leave empty for game runtime default.
    // * For example: an electrical spark.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UParticleSystem *OnHitParticle;
    //UNiagaraSystem *OnHitParticle;

    // Specify a delay, in seconds, to wait before allowing the particle to spawn again after an intial impact.
    // * This is for performance control. You don't want a lot of particles being spawned for a weapon with a high fire rate.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float OnHitParticleDelaySeconds;
    
    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayOnHitSoundCue;
    
    // Specify a custom sound to play as an on hit effect for this forcefield. Leave empty for game runtime default.
    // * For example: a electrical buzzing sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayOnHitSoundCue;

    // Specify a custom game runtime sound class for the on hit sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayOnHitSoundCueSoundClass;

    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultOnAppearParticle;
    
    // Specify a particle to play when this forcefield appears during pulse. Leave empty for game runtime default.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UParticleSystem *OnAppearParticle;
    //UNiagaraSystem *OnAppearParticle;

    // Modify the particle scale as necessary.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FVector OnAppearParticleScale;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayOnAppearSoundCue;
    
    // Specify a custom sound to play as an on appear effect for this forcefield. Leave empty for game runtime default.
    // * For example: a electrical buzzing sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayOnAppearSoundCue;

    // Specify a custom game runtime sound class for the on appear sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayOnAppearSoundCueSoundClass;

    // If you need to local offset the transform for the effects when they are spawned. Only location and rotation are used. Scale is ignored.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform OnAppearEffectsLocalTransform;
    
    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultOnDisappearParticle;
    
    // Specify a particle to play when this forcefield disappears during pulse. Leave empty for game runtime default.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UParticleSystem *OnDisappearParticle;
    //UNiagaraSystem *OnDisappearParticle;

    // Modify the particle scale as necessary.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FVector OnDisappearParticleScale;
    
    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayOnDisappearSoundCue;
    
    // Specify a custom sound to play as an on disappear effect for this forcefield. Leave empty for game runtime default.
    // * For example: a electrical buzzing sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayOnDisappearSoundCue;

    // Specify a custom game runtime sound class for the on disappear sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayOnDisappearSoundCueSoundClass;

    // If you need to local offset the transform for the effects when they are spawned. Only location and rotation are used. Scale is ignored.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform OnDisappearEffectsLocalTransform;
    
    // If particles aren't provided, the default game assets will be used at runtime.
    // However, if you disable it here, then no particles will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultOnDisabledParticle;
    
    // Specify a particle to play when this forcefield is disabled. Leave empty for game runtime default.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UParticleSystem *OnDisabledParticle;
    //UNiagaraSystem *OnDisabledParticle;

    // Modify the particle scale as necessary.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FVector OnDisabledParticleScale;
    
    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayOnDisabledSoundCue;
    
    // Specify a custom sound to play as an on disabled effect for this forcefield. Leave empty for game runtime default.
    // * For example: a electrical buzzing sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayOnDisabledSoundCue;

    // Specify a custom game runtime sound class for the on disabled sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayOnDisabledSoundCueSoundClass;

    // If you need to local offset the transform for the effects when they are spawned. Only location and rotation are used. Scale is ignored.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform OnDisabledEffectsLocalTransform;
};