// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASCMAPKIT_AscMapKitSoundClassEnum_generated_h
#error "AscMapKitSoundClassEnum.generated.h already included, missing '#pragma once' in AscMapKitSoundClassEnum.h"
#endif
#define ASCMAPKIT_AscMapKitSoundClassEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Core_Constant_AscMapKitSoundClassEnum_h


#define FOREACH_ENUM_EASCMAPKITSOUNDCLASSENUM(op) \
	op(EAscMapKitSoundClassEnum::Default) \
	op(EAscMapKitSoundClassEnum::Ambient) \
	op(EAscMapKitSoundClassEnum::Master) \
	op(EAscMapKitSoundClassEnum::Music) \
	op(EAscMapKitSoundClassEnum::SFX) \
	op(EAscMapKitSoundClassEnum::UI) \
	op(EAscMapKitSoundClassEnum::Voice) 

enum class EAscMapKitSoundClassEnum : uint8;
template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitSoundClassEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
