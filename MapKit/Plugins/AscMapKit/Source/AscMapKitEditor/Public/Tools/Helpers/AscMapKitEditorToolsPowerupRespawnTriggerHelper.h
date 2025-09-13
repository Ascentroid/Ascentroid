#pragma once

// Ascentroid
#include "AscMapKit/Public/Powerup/AscMapKitPowerupTypeEnum.h"

// Generated
#include "AscMapKitEditorToolsPowerupRespawnTriggerHelper.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKITEDITOR_API UAscMapKitEditorToolsPowerupRespawnTriggerHelper : public UObject
{
	GENERATED_BODY()

public:
	static void Generate(const FString &ForClassName, const char *ForFunction, const bool &bDeleteExistingTriggers = false);
};