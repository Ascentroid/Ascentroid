// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASCMAPKIT_AscMapKitGameDifficultyEnum_generated_h
#error "AscMapKitGameDifficultyEnum.generated.h already included, missing '#pragma once' in AscMapKitGameDifficultyEnum.h"
#endif
#define ASCMAPKIT_AscMapKitGameDifficultyEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Core_Constant_AscMapKitGameDifficultyEnum_h


#define FOREACH_ENUM_EASCMAPKITGAMEDIFFICULTYENUM(op) \
	op(EAscMapKitGameDifficultyEnum::None) \
	op(EAscMapKitGameDifficultyEnum::Easy) \
	op(EAscMapKitGameDifficultyEnum::Moderate) \
	op(EAscMapKitGameDifficultyEnum::Normal) \
	op(EAscMapKitGameDifficultyEnum::Hard) \
	op(EAscMapKitGameDifficultyEnum::Impossible) 

enum class EAscMapKitGameDifficultyEnum : uint8;
template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitGameDifficultyEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
