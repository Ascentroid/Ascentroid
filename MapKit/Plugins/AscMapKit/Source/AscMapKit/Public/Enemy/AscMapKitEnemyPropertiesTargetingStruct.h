#pragma once

// Generated
#include "AscMapKitEnemyPropertiesTargetingStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesTargetingStruct
{
    GENERATED_BODY()

    // When an enemy is targeting and traveling towards a target, this is an offset distance from the target that the enemy will pursue towards.
    // The angle is relative to the enemy and the target. This offset can be used as a distancing mechanism to control how far or close the enemy will travel towards the target.
    // The offset distance source begins at the target location (enemy ← offset ← target).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float TargetLocationOffset;
    
    // If the enemy is hit by another enemy, use this percent value as a chance for the enemy to target the attacking enemy.
    // * 0 to 100 (percent)
    // * This may change in the future as more behavior properties are added.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "100"))
    int32 ChanceToAttackEnemyWhoHitUs;

    // If enabled, non-melee enemies will attack multiple targets simultaneously.
    // * This would typically be used for really aggressive enemies, and/or bosses.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool AttackMultipleTargets;
    
    // The size of the cone for the enemy to use for target/attack checking. You may need to tweak this value depending on how aggressive, or passive, you want the enemy to be.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "360.0"))
    float AttackCheckConeAngle;

    // The distance in front of the enemy, within scope of the cone angle, for the enemy to use for targeting/attacking. You may need to tweak this value depending on how aggressive, or passive, you want the enemy to be.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float AttackCheckMaxSearchRadius;

    // The time, in second(s), an enemy will delay looking at one target to another target.
    // * This helps give enemies a more natural appearance when detecting and looking at different targets.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float LookAtProgressSeconds;
};