#pragma once

// Ascentroid
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaCollisionBoxBoundsVector.h"
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

	// If "Collision Type" is set to "Box", these values are used for the collision bounds.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Collision", DisplayName="Collision Box Bounds")
	FAscMapKitEnvironmentAreaCollisionBoxBoundsVector BoxBounds;

	// If "Collision Type" is set to "Static Mesh", this asset is used for the collision bounds.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Collision", DisplayName="Collision Static Mesh")
	UStaticMesh *StaticMesh;
};