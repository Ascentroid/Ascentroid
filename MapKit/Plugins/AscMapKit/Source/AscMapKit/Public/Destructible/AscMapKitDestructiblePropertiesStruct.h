#pragma once

// Ascentroid
#include "AscMapKit/Public/Destructible/AscMapKitDestructibleDamagePropertiesStruct.h"

// Generated
#include "AscMapKitDestructiblePropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDestructiblePropertiesStruct
{
    GENERATED_BODY()

    // Required class type which contains the static mesh components for the chunks/pieces of the destructible actor.
    // * This is typically a Blueprint class you create and must sub-class "AAscMapKitDestructibleActor".
    // * Reminder: each static mesh component must be tagged with "DestructibleChunk" (case sensitive, no whitespace).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TSubclassOf<class AAscMapKitDestructibleActor> DestructibleClass;

    // If checked, this will be indestructible and ignore all other properties.
    // * This is usually used in conjunction with triggers. You can use triggers to enable or disable this.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Indestructible;

    // If checked, the main actor will not use game entity impact values (like projectiles). It will use the override property values instead (if they are greater than zero).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool OverrideOnHitImpact;
    
    // If overridden: every time the main actor is hit, a radius damage is applied to it. This is the radius size.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float OverrideOnHitRadius;

    // If overridden: every time main actor is hit, an impulse strength is applied to it.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float OverrideOnHitImpulseStrength;

    // Player Damage
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDestructibleDamagePropertiesStruct PlayerDamage;

    // Enemy Damage
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDestructibleDamagePropertiesStruct EnemyDamage;

    // If checked, the chunks/pieces can be destroyed by projectiles.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool AllowDestroyByProjectile;

    // The amount of shields of the chunks/pieces when they are spawned.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DestroyByProjectileStartShieldAmount;

    // If checked, the chunks/pieces will disappear (over time, using delay property values).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Disappear;

    // The iteration speed, in seconds, the disappear timer loop will execute at.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DisappearIterationDelaySeconds;

    // The random range minimum before the chunk/piece disappear execution occurs.
    // * If you want a constant value, set both minimum and maximum values to the same value. 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DisappearDelaySecondsRangeMin;

    // The random range maximum before the chunk/piece disappear execution occurs.
    // * If you want a constant value, set both minimum and maximum values to the same value.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DisappearDelaySecondsRangeMax;

    // If you want to give the chunk/piece some time to execute its effects, you can add a delay here (in seconds).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DisappearEffectsDelaySeconds;

    // A particle will be randomly selected from this list when effects are executed.
    // * If you need control over the chunk/piece relative location of this particle, you can create a socket on the chunk/piece static mesh called "EffectsSocket" (case sensitive, no whitespace). If the socket exists, it will automatically attempt to attach to it.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<UParticleSystem *> DisappearEffectParticles;

    // All materials on the chunk/piece will be replaced with this material when effects are executed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UMaterialInterface *DisappearEffectMaterial;

    // A sound will be played when effects are executed.
    // * If you need control over the chunk/piece relative location of this sound, you can create a socket on the chunk/piece static mesh called "EffectsSocket" (case sensitive, no whitespace). If the socket exists, it will automatically attempt to attach to it.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *DisappearEffectSoundCue;
};