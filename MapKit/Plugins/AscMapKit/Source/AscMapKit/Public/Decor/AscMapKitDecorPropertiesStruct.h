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

    UPROPERTY(meta = (HideInInspector))
    bool bHasDestructibleSupport = false;

    // If this is disabled, it means destructible is not supported for this decor item.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(EditCondition="bHasDestructibleSupport", EditConditionHides="true", HideEditConditionToggle="true"))
    FAscMapKitDestructiblePropertiesStruct Destructible;

    // If this is disabled, it means destructible is not supported for this decor item.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(EditCondition="bHasDestructibleSupport", EditConditionHides="true", HideEditConditionToggle="true"))
    FAscMapKitDestructiblePropertiesSplashDamageStruct SplashDamage;
};