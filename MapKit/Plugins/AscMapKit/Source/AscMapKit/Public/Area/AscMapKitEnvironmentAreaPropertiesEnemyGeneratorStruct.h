#pragma once

// Ascentroid
#include "AscMapKitEnvironmentAreaEnemyGeneratorStateEnum.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesStruct.h"

// Generated
#include "AscMapKitEnvironmentAreaPropertiesEnemyGeneratorStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesEnemyGeneratorStruct
{
	GENERATED_BODY()

	// If checked, the enemy generator will execute the intended behavior.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool Enable;

	// If Active, the enemy generator will spawn enemies.
	// If Inactive, the enemy generator will not spawn enemies.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	EAscMapKitEnvironmentAreaEnemyGeneratorStateEnum InitialState;

	// If checked, and the enemy template list is not empty, then items from the template list will be selected randomly for spawning.
	// If checked, and the enemy template list is empty, then random enemies will be generated with random settings.
	// If not checked, the enemy template list will be traversed linearly. The template list must have at least one entry.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool Randomize;

	// If checked, the enemy generator will never be disabled. This overrides trigger relationships (triggers will have no affect).
	// The only way to disable it is to set "Enable" to false, or "Infinite" to false (i.e. MOD scripting).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool Infinite;

	// If checked, the enemy generator will execute iterations to toggle between enabled and disabled.
	// If the enemy generator is associated to a trigger, this will be ignored.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool EnableIterations;
	
	// If Infinite is unchecked, this value is the number of times the enemy generator will toggle between enabled and disabled.
	// If Infinite is checked, this is ignored.
	// If the enemy generator is associated to a trigger, this will be ignored.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float Iterations;

	// If the enemy generator is executing iterations, this is the delay between enable/disable toggling. The selection range is random between minimum and maximum.
	// If the enemy generator is associated to a trigger, this will be ignored.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float DelayBetweenIterationsMinimumSeconds;

	// If the enemy generator is executing iterations, this is the delay between enable/disable toggling. The selection range is random between minimum and maximum.
	// If the enemy generator is associated to a trigger, this will be ignored.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float DelayBetweenIterationsMaximumSeconds;

	// If checked, when the final iteration count is reached, the enemy generator will be permanently disabled.
	// If the enemy generator is associated to a trigger, this will be ignored.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool OnIterationsCompletePermanentlyDisable;

	// The amount of time given for the enemy generator to spawn an enemy. The selection range is random between minimum and maximum.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float SpawnMinimumSeconds;

	// The amount of time given for the enemy generator to spawn an enemy. The selection range is random between minimum and maximum.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float SpawnMaximumSeconds;

	// A list of enemy map kit settings this generator will spawn.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FAscMapKitEnemyPropertiesStruct> Templates;

	// If not checked, the enemy generator will always spawn enemies at the environment area center.
	// If checked, the enemy generator will spawn enemies in random locations inside the designated collision component.
	// If you are using box collision, and the relative spawn location list is empty, the generator will attempt to randomize spawning inside the box collision component using the padding value.
	//   * Note: if the box extent is less then 20m x 20m x 20m, it will always use the environment area center.
	// If you are using static mesh collision, you *must* provide at least one or more spawn locations in the list. Otherwise, it will always use the environment area center.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool SpawnInRandomLocations;

	// The padding distance from the boundaries of the box component.
	// Default: 800. Change with caution and test extensively if you modify it!
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float SpawnRandomPadding;

	// If "Spawn in Random Locations" is checked, the enemy generator will attempt to use these locations relative to the environment area center.
	// If you are using box collision, and the relative spawn location list is empty, the generator will attempt to randomize spawning inside the box collision component.
	// If you are using static mesh collision, you *must* provide at least one or more spawn locations in the list. Otherwise, it will also use the environment area center.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FVector> SpawnRandomRelativeLocations;
};