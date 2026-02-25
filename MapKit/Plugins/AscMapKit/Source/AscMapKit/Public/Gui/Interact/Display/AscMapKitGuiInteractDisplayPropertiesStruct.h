#pragma once

// Generated
#include "AscMapKitGuiInteractDisplayPropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitGuiInteractDisplayPropertiesStruct
{
    GENERATED_BODY()

    // Used by the game runtime to identify this display. This is required and must be unique per display.
    // * If display IDs are not set, or not unique, the game logs should provide an error message.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString Id;

    // The text for the code. This will be auto-populated (or overridden) by triggers/doors if the game is set to use random door codes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString Text;

    // Used by the game runtime for the display color.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FLinearColor Color;

    // Used by the game runtime for the display color emit multiplier.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float EmitColorMultiplyBy;

    // If not checked, the display will be hidden when the game starts (default).
    // If checked, the display will be visible (not hidden) when the game starts.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool VisibleOnStart;
};