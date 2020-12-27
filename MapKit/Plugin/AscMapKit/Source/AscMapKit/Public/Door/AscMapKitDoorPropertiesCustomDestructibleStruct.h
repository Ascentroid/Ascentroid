#pragma once

// Generated
#include "AscMapKitDoorPropertiesCustomDestructibleStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDoorPropertiesCustomDestructibleStruct
{
    GENERATED_BODY()

    // The static mesh used for the non-destroyed state of the destructible door.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMesh *StaticMesh;
    
    // If you need to modify the static mesh transform, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform StaticMeshRelativeTransform;
    
    // The static mesh used for the destroyed state of the destructible door. 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMesh *StaticMeshDestroyed;

    // If you need to modify the static mesh destroyed state transform, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform StaticMeshDestroyedRelativeTransform;
};