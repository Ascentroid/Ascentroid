#pragma once

// Generated
#include "AscMapKitTriggerPropertiesOnForcefieldChangeStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesOnForcefieldChangeStruct
{
    GENERATED_BODY()

    // Check this if you want the trigger to affect forcefield(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // A delay in seconds before the forcefield(s) are affected.
    // * This is helpful in case you have effects you want to execute before the operation is performed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DelaySeconds;

    // A list of forcefield IDs that should be disabled when this operation executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> ForcefieldIdsToDisable;

    // Check this if you want to show a HUD message when the trigger affects forcefield(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowDisableHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomDisableHudMessage;
    
    // A list of forcefield IDs that should be enabled when this operation executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> ForcefieldIdsToEnable;

    // Check this if you want to show a HUD message when the trigger affects forcefield(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowEnableHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomEnableHudMessage;

    // A list of forcefield IDs that should be disable pulse when this operation executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> ForcefieldIdsToDisablePulse;

    // Check this if you want to show a HUD message when the trigger affects forcefield(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowDisablePulseHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomDisablePulseHudMessage;
    
    // A list of forcefield IDs that should be enable pulse when this operation executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> ForcefieldIdsToEnablePulse;

    // Check this if you want to show a HUD message when the trigger affects forcefield(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowEnablePulseHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomEnablePulseHudMessage;
};