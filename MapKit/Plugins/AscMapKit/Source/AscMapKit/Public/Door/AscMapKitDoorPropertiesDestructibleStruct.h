#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitPropertiesCustomMaterialStruct.h"
#include "AscMapKit/Public/Core/Global/AscMapKitPropertiesMaterialInfoStruct.h"
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

    // The static mesh material information (in case you want to override anything, please use this list data).
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<FAscMapKitPropertiesMaterialInfoStruct> MaterialInfo;
    
    // If you need to override the static mesh materials, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FAscMapKitPropertiesCustomMaterialStruct> OverrideMaterials;

    // The destroyed static mesh material information (in case you want to override anything, please use this list data).
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<FAscMapKitPropertiesMaterialInfoStruct> MaterialInfoDestroyed;
    
    // If you need to override the destroyed static mesh materials, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FAscMapKitPropertiesCustomMaterialStruct> OverrideMaterialsDestroyed;

    // todo: for custom only, update documentation later
    // The static mesh used for the non-destroyed state of the destructible door.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMesh *StaticMesh;

    // todo: for custom only, update documentation later
    // The static mesh used for the destroyed state of the destructible door. 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMesh *StaticMeshDestroyed;
};