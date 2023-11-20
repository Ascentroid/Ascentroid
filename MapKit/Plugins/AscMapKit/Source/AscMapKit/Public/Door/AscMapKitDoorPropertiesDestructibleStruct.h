#pragma once

// Ascentroid
#include "AscMapKit/Public/Destructible/AscMapKitDestructiblePropertiesStruct.h"

// Generated
#include "AscMapKitDoorPropertiesDestructibleStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDoorPropertiesDestructibleStruct
{
    GENERATED_BODY()

    // If enabled, this door will be treated as a destructible door.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // Shared/common destructible properties.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDestructiblePropertiesStruct Shared;

    // Sets the amount of "shields" the door is considered to have when spawned in the game runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float MaxShields;

    // How long in seconds to wait before swapping out the destructible door mesh with the static, permanent mesh which appears "destroyed".
    // * This gives the game time to break apart the destructible mesh, before swapping to a more performant static mesh.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float LifetimeSeconds;

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
    //UNiagaraSystem *DestroyParticle;
};