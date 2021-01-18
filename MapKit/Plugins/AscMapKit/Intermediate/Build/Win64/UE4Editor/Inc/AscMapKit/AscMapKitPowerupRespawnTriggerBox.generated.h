// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAscMapKitPowerupTypeEnum : uint8;
struct FVector;
struct FTransform;
#ifdef ASCMAPKIT_AscMapKitPowerupRespawnTriggerBox_generated_h
#error "AscMapKitPowerupRespawnTriggerBox.generated.h already included, missing '#pragma once' in AscMapKitPowerupRespawnTriggerBox.h"
#endif
#define ASCMAPKIT_AscMapKitPowerupRespawnTriggerBox_generated_h

#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_SPARSE_DATA
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSupports) \
	{ \
		P_GET_ENUM(EAscMapKitPowerupTypeEnum,Z_Param_PowerupType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Supports(EAscMapKitPowerupTypeEnum(Z_Param_PowerupType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomLocationWithinBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRandomLocationWithinBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnConstruction) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConstruction(Z_Param_Out_Transform); \
		P_NATIVE_END; \
	}


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSupports) \
	{ \
		P_GET_ENUM(EAscMapKitPowerupTypeEnum,Z_Param_PowerupType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Supports(EAscMapKitPowerupTypeEnum(Z_Param_PowerupType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomLocationWithinBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRandomLocationWithinBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnConstruction) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConstruction(Z_Param_Out_Transform); \
		P_NATIVE_END; \
	}


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAscMapKitPowerupRespawnTriggerBox(); \
	friend struct Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitPowerupRespawnTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitPowerupRespawnTriggerBox)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAscMapKitPowerupRespawnTriggerBox(); \
	friend struct Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitPowerupRespawnTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitPowerupRespawnTriggerBox)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAscMapKitPowerupRespawnTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAscMapKitPowerupRespawnTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitPowerupRespawnTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitPowerupRespawnTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitPowerupRespawnTriggerBox(AAscMapKitPowerupRespawnTriggerBox&&); \
	NO_API AAscMapKitPowerupRespawnTriggerBox(const AAscMapKitPowerupRespawnTriggerBox&); \
public:


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitPowerupRespawnTriggerBox(AAscMapKitPowerupRespawnTriggerBox&&); \
	NO_API AAscMapKitPowerupRespawnTriggerBox(const AAscMapKitPowerupRespawnTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitPowerupRespawnTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitPowerupRespawnTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAscMapKitPowerupRespawnTriggerBox)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_12_PROLOG
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_INCLASS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCMAPKIT_API UClass* StaticClass<class AAscMapKitPowerupRespawnTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupRespawnTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
