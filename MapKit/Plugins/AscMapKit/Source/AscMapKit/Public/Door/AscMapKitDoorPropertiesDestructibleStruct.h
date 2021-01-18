#pragma once

// Generated
#include "AscMapKitDoorPropertiesDestructibleStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDoorPropertiesDestructibleStruct
{
    GENERATED_BODY()

    // If enabled, this door will be treated as a destructible door.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // If checked, the door will be indestructible and ignore all other properties.
    // * This is usually used in conjunction with triggers. You can use triggers to enable or disable this.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Indestructible;

    // Sets the amount of "shields" the door is considered to have when spawned in the game runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float MaxShields;

    // How long in seconds to wait before swapping out the destructible door mesh with the static, permanent mesh which appears "destroyed".
    // * This gives the game time to break apart the destructible mesh, before swapping to a more performant static mesh.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float LifetimeSeconds;

    // How many iterations to execute a "damage" application to a destructible door when it is blowing up.
    // * Larger destructible meshes may need more iterations to give a better effect. You may have to tweak this value depending on what you are trying to achive.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 ExplosionDamageInterations;

    // How long in seconds to apply a radius damage effect to the door while it is exploding.
    // * For example: a slow rate could be used for a rock wall that takes more time to crumble apart.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ExplosionRecurringDamageSeconds;

    // How long in seconds to delay the iteration of recurring damage.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ExplosionRecurringDamageInitialDelaySeconds;

    // Every time the destructible door is hit, a radius damage is applied to the door. This is the radius size.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float OnHitRadius;

    // Every time the destructible door is hti, an impulse strength is applied to the door.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float OnHitImpulseStrength;

    // If checked, the door will already be destroyed when it is spawned at game runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool IsAlreadyDestroyed;

    // If a particle is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no particle will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultDestroyParticle;
    
    // The particle to use when the door is destroyed. If empty, the game runtime default will be used.
    // * For example: an explosion effect.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UParticleSystem *DestroyParticle;
};