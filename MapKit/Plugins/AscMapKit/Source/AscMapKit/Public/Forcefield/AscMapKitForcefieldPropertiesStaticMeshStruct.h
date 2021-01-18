#pragma once

// Generated
#include "AscMapKitForcefieldPropertiesStaticMeshStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitForcefieldPropertiesStaticMeshStruct
{
    GENERATED_BODY()

	// Scale used for the static mesh.
	// * If the scale doesn't work right, you may want to use multiple forcefield actors instead.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FVector Scale;

	// Override the color.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool OverrideColor;

	// The color.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FLinearColor Color;

	// Override this to increase the emit color amount.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool OverrideEmitColorMultiplyBy;

	// Use this to increase the emit color amount.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float EmitColorMultiplyBy;

	// Read-only. Used for the material assigned to the forcefield.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame)
    UMaterialInstanceDynamic * PrimaryMaterialInstance;
};