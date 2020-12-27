#pragma once

// Generated
#include "AscMapKitForcefieldPropertiesPulseStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitForcefieldPropertiesPulseStruct
{
    GENERATED_BODY()

	// If enabled, the forcefield will enable and disable itself based on the rate settings (below).
	// * You can use this setting to have forcefields disappear and reappear on an interval. This could be useful for traps/puzzles.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool Enable;

	// If checked, the pulse initial state with be enabled. If unchecked, the pulse initial state with be disabled.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool InitialStateEnabled;

	// A delay, in seconds, before the forcefield toggles between enabled and disabled.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float RateSeconds;
};