#pragma once

// Ascentroid
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaCollisionTypeEnum.h"

// Generated
#include "AscMapKitEnvironmentAreaPropertiesCollisionStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesCollisionStruct
{
	GENERATED_BODY()

	// Used by the game runtime to implement the collision type for this environment area.
	// * For basic area collision, you can use a "Box".
	// * If you need more advanced collision, you can use a "Static Mesh" (the static mesh will be invisible during game runtime).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitEnvironmentAreaCollisionTypeEnum CollisionType;
};