// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASCMAPKIT_AscMapKitTriggerTypeEnum_generated_h
#error "AscMapKitTriggerTypeEnum.generated.h already included, missing '#pragma once' in AscMapKitTriggerTypeEnum.h"
#endif
#define ASCMAPKIT_AscMapKitTriggerTypeEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerTypeEnum_h


#define FOREACH_ENUM_EASCMAPKITTRIGGERTYPEENUM(op) \
	op(EAscMapKitTriggerTypeEnum::PleaseSelect) \
	op(EAscMapKitTriggerTypeEnum::Invisible) \
	op(EAscMapKitTriggerTypeEnum::Basic001) \
	op(EAscMapKitTriggerTypeEnum::Custom) 

enum class EAscMapKitTriggerTypeEnum : uint8;
template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitTriggerTypeEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
