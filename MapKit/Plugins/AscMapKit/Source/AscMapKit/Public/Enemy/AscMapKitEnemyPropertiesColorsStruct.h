#pragma once

// UE4
#include "Engine/Classes/Materials/MaterialInstanceDynamic.h"

// Generated
#include "AscMapKitEnemyPropertiesColorsStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesColorsStruct
{
    GENERATED_BODY()

    // Override the enemy primary color.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool OverridePrimaryColor;

    // The enemy primary color.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FLinearColor PrimaryColor;

    // Override the enemy emit color.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool OverrideEmitColor;

    // The enemy emit color.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FLinearColor EmitColor;

    // Override this to increase the emit color amount.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool OverrideEmitColorMultiplyBy;

    // Use this to increase the emit color amount.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float EmitColorMultiplyBy;

	// Read-only. Used for the material assigned to the enemy.
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame)
    TMap<FString, UMaterialInstanceDynamic *> PrimaryMaterialInstances;

	// Read-only. Used for the material assigned to the enemy.
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame)
    TMap<FString, UMaterialInstanceDynamic *> EmitMaterialInstances;
};