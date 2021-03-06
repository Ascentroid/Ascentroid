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