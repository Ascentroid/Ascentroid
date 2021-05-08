#pragma once

// Generated
#include "AscMapKitDestructibleDisappearPropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDestructibleDisappearPropertiesStruct
{
    GENERATED_BODY()

    // If checked, the chunks/pieces will disappear (over time, using delay property values).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // The iteration speed, in seconds, the disappear timer loop will execute at.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float IterationDelaySeconds;

    // The random range minimum before the chunk/piece disappear execution occurs.
    // * If you want a constant value, set both minimum and maximum values to the same value. 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DelaySecondsRangeMin;

    // The random range maximum before the chunk/piece disappear execution occurs.
    // * If you want a constant value, set both minimum and maximum values to the same value.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DelaySecondsRangeMax;

    // If you want to give the chunk/piece some time to execute its effects, you can add a delay here (in seconds).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float EffectsDelaySeconds;

    // A particle will be randomly selected from this list when effects are executed.
    // * If you need control over the chunk/piece relative location of this particle, you can create a socket on the chunk/piece static mesh called "EffectsSocket" (case sensitive, no whitespace). If the socket exists, it will automatically attempt to attach to it.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<UParticleSystem *> EffectParticles;

    // All materials on the chunk/piece will be replaced with this material when effects are executed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UMaterialInterface *EffectMaterial;

    // A sound will be played when effects are executed.
    // * If you need control over the chunk/piece relative location of this sound, you can create a socket on the chunk/piece static mesh called "EffectsSocket" (case sensitive, no whitespace). If the socket exists, it will automatically attempt to attach to it.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *EffectSoundCue;
};