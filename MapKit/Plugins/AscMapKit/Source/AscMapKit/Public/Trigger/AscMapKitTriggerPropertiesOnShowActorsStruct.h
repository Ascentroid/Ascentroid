#pragma once

// Generated
#include "AscMapKitTriggerPropertiesOnShowActorsStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesOnShowActorsStruct
{
    GENERATED_BODY()

    // Check this if you want the trigger to affect actor(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // A delay in seconds before the actor(s) are affected.
    // * This is helpful in case you have effects you want to execute before the operation is performed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DelaySeconds;

    // If this is checked, the actor will appear immediately without any fade effect applied.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableFade;

    // If fade is not disabled, a delay in seconds before the actor(s) are affected by the fade material.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float FadeDelaySeconds;

    // A list of actor tags that will find the actor(s) and show them when this operation executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> ActorTagsToShow;

    // Check this if you want to show a HUD message when the actor(s) are shown.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomHudMessage;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayAppearSoundCue;

    // Specify a custom sound to play as an effect for the actor. Leave empty for game runtime default.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayAppearSoundCue;
};