#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitXYZEnum.h"

// Generated
#include "AscMapKitForcefieldPropertiesAnimateStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitForcefieldPropertiesAnimateStruct
{
    GENERATED_BODY()

	// If checked, the forcefield mesh will animate (bob up and down).
    // * This is currently a fixed animation that is baked into the game runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

	// Which world axis to animate bobbing on.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitXYZEnum Axis;
	
	// How far to move the forcefield every tick.
	// * Must be greater than zero.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Size;

	// How fast to move the forcefield every tick.
	// * Must be greater than zero.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Speed;
	
	// The world axis threshold for the bob up and down animation.
	// * Must be greater than zero.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Threshold;
	
	// How long, in seconds, to wait before the initial animation begins.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float InitialDelaySeconds;
};