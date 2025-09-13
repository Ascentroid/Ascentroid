#pragma once

// Generated
#include "AscMapKitEnemyPropertiesMovementCollisionStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesMovementCollisionStruct
{
    GENERATED_BODY()

    // When an enemy is moving, the offset is used to determine the direction/angle the enemy is moving in. It is utilized to detect things like turn/roll strength relative to the enemy forward vector.
    // Default: 4000. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float DirectionOffset;

    // When an enemy is moving, if they bump into something and get "stuck", this is the number of collisions that are checked before a collision modification impulse is applied to attempt to get the enemy "unstuck".
    // Default: 3. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "1000"))
    int32 StuckBounceCount;

    // When an enemy is moving, 18 directional collision checks are executing to assist with enemy navigation through a 3D environment.
    // This value is the backward offset distance for collision checking.
    // Default: 3200. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float CollisionCheckDirectionBackwardOffset;

    // When an enemy is moving, 18 directional collision checks are executing to assist with enemy navigation through a 3D environment.
    // This value is the up and down offset distances for collision checking.
    // Default: 700. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float CollisionCheckDirectionUpDownOffset;

    // When an enemy is moving, 18 directional collision checks are executing to assist with enemy navigation through a 3D environment.
    // This value is all other collisions offset distances (excluding: backward, up, down) for collision checking.
    // Default: 4200. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float CollisionCheckDirectionOtherOffset;

    // When an enemy is moving, 18 directional collision checks are executing to assist with enemy navigation through a 3D environment.
    // This value is used to determine if the enemy should attempt to re-center itself if the directional collision checks register a hit >= Recenter Hit Threshold at this offset distance.
    // Default: 2200. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float CollisionCheckRecenterDistance;

    // When an enemy is moving, 18 directional collision checks are executing to assist with enemy navigation through a 3D environment.
    // This value is used to determine if the enemy should attempt to re-center itself if the directional collision checks register a hit >= Recenter Hit Threshold at this offset distance.
    // Default: 4. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "1000"))
    int32 CollisionCheckRecenterHitThreshold;
};