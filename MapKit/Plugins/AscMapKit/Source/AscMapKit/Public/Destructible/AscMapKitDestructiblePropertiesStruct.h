#pragma once

// Ascentroid
#include "AscMapKit/Public/Destructible/AscMapKitDestructibleDamagePropertiesStruct.h"
#include "AscMapKit/Public/Destructible/AscMapKitDestructibleDisappearPropertiesStruct.h"

// Generated
#include "AscMapKitDestructiblePropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDestructiblePropertiesStruct
{
    GENERATED_BODY()

    FAscMapKitDestructiblePropertiesStruct()
    {
        ScaleOverTime = true;
        ScaleOverTimeUpOrDownFactor = -0.005f;
        ScaleOverTimeRateSeconds = 0.03f; // FAscConstantStruct::TickRate30fps()
    }

    // If checked, the destructible system will be turned off and not execute.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Disable;

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

    // If checked, when the actor is hit, this will check to see if a minimal impulse has been applied to the actor yet, and, if not, it will apply a minimum.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool UseMinimalImpulse;

    // If enabled, when the actor is hit, if the minimal impulse strength is below the threshold, this is the radius value used to apply the minimum impulse.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float MinimalImpulseRadius;

    // If enabled, when the actor is hit, if the minimal impulse strength is below this value threshold, this is the strength value used to apply the minimum impulse.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float MinimalImpulseStrength;

    // If enabled, when the actor is is spawned, it will scale up or down over time (using the additional scale settings).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ScaleOverTime;

    // If the value is negative, the actor will scale down over time. If the value is positive, the actor will scale up over time.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ScaleOverTimeUpOrDownFactor;

    // The time/rate in seconds at which the scale factor execution is applied.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ScaleOverTimeRateSeconds;
    
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

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDestructibleDisappearPropertiesStruct Disappear;    
};