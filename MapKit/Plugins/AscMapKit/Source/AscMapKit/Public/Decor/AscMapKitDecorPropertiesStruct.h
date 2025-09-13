#pragma once

// Ascentroid
#include "AscMapKit/Public/Destructible/AscMapKitDestructiblePropertiesSplashDamageStruct.h"
#include "AscMapKit/Public/Destructible/AscMapKitDestructiblePropertiesStruct.h"

// Generated
#include "AscMapKitDecorPropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDecorPropertiesStruct
{
    GENERATED_BODY()

    // Used by the game runtime to disable all collision on the decor actor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableCollision;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDestructiblePropertiesStruct Destructible;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDestructiblePropertiesSplashDamageStruct SplashDamage;
};