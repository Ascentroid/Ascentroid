// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASCMAPKIT_AscMapKitEnvironmentAreaTypeEnum_generated_h
#error "AscMapKitEnvironmentAreaTypeEnum.generated.h already included, missing '#pragma once' in AscMapKitEnvironmentAreaTypeEnum.h"
#endif
#define ASCMAPKIT_AscMapKitEnvironmentAreaTypeEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaTypeEnum_h


#define FOREACH_ENUM_EASCMAPKITENVIRONMENTAREATYPEENUM(op) \
	op(EAscMapKitEnvironmentAreaTypeEnum::Unknown) \
	op(EAscMapKitEnvironmentAreaTypeEnum::Acid) \
	op(EAscMapKitEnvironmentAreaTypeEnum::Electric) \
	op(EAscMapKitEnvironmentAreaTypeEnum::Lava) \
	op(EAscMapKitEnvironmentAreaTypeEnum::PowerStationWithoutEffects) \
	op(EAscMapKitEnvironmentAreaTypeEnum::PowerStationWithEffects) \
	op(EAscMapKitEnvironmentAreaTypeEnum::Water) 

enum class EAscMapKitEnvironmentAreaTypeEnum : uint8;
template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitEnvironmentAreaTypeEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
