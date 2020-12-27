#pragma once

// Ascentroid
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesInvisibleCollisionTypeEnum.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerInvisibleTypeEnum.h"

// Generated
#include "AscMapKitTriggerPropertiesInvisibleStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesInvisibleStruct
{
    GENERATED_BODY()

    // The type of invisible trigger this is.
    // * If the top level "Trigger Type" is not set to "Invisible", these properties will be ignored.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitTriggerInvisibleTypeEnum Type;

    // Used by the game runtime to implement the collision type for this invisible trigger.
    // * For basic area collision, you can use a "Box".
    // * If you need more advanced collision, you can use a "Static Mesh" (the static mesh will be invisible during game runtime).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum CollisionType;
};