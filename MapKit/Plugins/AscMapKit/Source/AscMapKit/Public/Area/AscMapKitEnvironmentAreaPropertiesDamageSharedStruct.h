#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitDamageEventTypeEnum.h"
#include "AscMapKit/Public/Core/Constant/AscMapKitSoundClassEnum.h"

// Generated
#include "AscMapKitEnvironmentAreaPropertiesDamageSharedStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct
{
	GENERATED_BODY()

	// Used by the game runtime to implement the damage event type for this environment area. This value is used by the game runtime to indicate HUD and network messages. It is a separate type so you can customize it differently from the environment area type itself.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitDamageEventTypeEnum DamageEventType;

	// If checked, when a bomb is dropped in this environment area, and it is configured to apply damage to players or enemies, it will auto destroy itself.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool AutoDestroyBombs;

	// When an actor (such as a player or enemy) spawns, apply a delay (in seconds) to the damage timer before it begins execution.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float BeginPlayActivateDamageDelaySeconds;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayAmbientSoundCue;

	// Specify a custom sound to play as an ambient effect for the environment area. Leave empty for game runtime default.
	// * This is typically a looping sound effect which plays continuously, like a background sound effect.
	// * For example: an electric area could play a looping sound effect of zapping noises.
	// * Another example: an acid pool could play a looping sound effect of bubbly, hissing noises.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayAmbientSoundCue;

	// Specify a custom game runtime sound class for the ambient damage sound. If set to "Default", it will use the game runtime default (sound class "SFX").
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	EAscMapKitSoundClassEnum PlayAmbientSoundCueClass;
};