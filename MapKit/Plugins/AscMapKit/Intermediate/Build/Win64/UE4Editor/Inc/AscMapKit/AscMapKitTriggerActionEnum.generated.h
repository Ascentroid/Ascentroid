// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASCMAPKIT_AscMapKitTriggerActionEnum_generated_h
#error "AscMapKitTriggerActionEnum.generated.h already included, missing '#pragma once' in AscMapKitTriggerActionEnum.h"
#endif
#define ASCMAPKIT_AscMapKitTriggerActionEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActionEnum_h


#define FOREACH_ENUM_EASCMAPKITTRIGGERACTIONENUM(op) \
	op(EAscMapKitTriggerActionEnum::Unknown) \
	op(EAscMapKitTriggerActionEnum::Execute) \
	op(EAscMapKitTriggerActionEnum::Inactive) \
	op(EAscMapKitTriggerActionEnum::UnlockDoor) \
	op(EAscMapKitTriggerActionEnum::LockDoor) \
	op(EAscMapKitTriggerActionEnum::OpenDoor) \
	op(EAscMapKitTriggerActionEnum::CloseDoor) 

enum class EAscMapKitTriggerActionEnum : uint8;
template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitTriggerActionEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
