// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAscMapKitPowerupTypeEnum : uint8;
#ifdef ASCMAPKIT_AscMapKitPowerupBillboardComponent_generated_h
#error "AscMapKitPowerupBillboardComponent.generated.h already included, missing '#pragma once' in AscMapKitPowerupBillboardComponent.h"
#endif
#define ASCMAPKIT_AscMapKitPowerupBillboardComponent_generated_h

#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_SPARSE_DATA
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_RPC_WRAPPERS
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEditorUpdatePowerupType) \
	{ \
		P_GET_ENUM(EAscMapKitPowerupTypeEnum,Z_Param_PowerupType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EditorUpdatePowerupType(EAscMapKitPowerupTypeEnum(Z_Param_PowerupType)); \
		P_NATIVE_END; \
	}


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEditorUpdatePowerupType) \
	{ \
		P_GET_ENUM(EAscMapKitPowerupTypeEnum,Z_Param_PowerupType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EditorUpdatePowerupType(EAscMapKitPowerupTypeEnum(Z_Param_PowerupType)); \
		P_NATIVE_END; \
	}


#else
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAscMapKitPowerupBillboardComponent(); \
	friend struct Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics; \
public: \
	DECLARE_CLASS(UAscMapKitPowerupBillboardComponent, UBillboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(UAscMapKitPowerupBillboardComponent)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAscMapKitPowerupBillboardComponent(); \
	friend struct Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics; \
public: \
	DECLARE_CLASS(UAscMapKitPowerupBillboardComponent, UBillboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(UAscMapKitPowerupBillboardComponent)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAscMapKitPowerupBillboardComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAscMapKitPowerupBillboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAscMapKitPowerupBillboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAscMapKitPowerupBillboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAscMapKitPowerupBillboardComponent(UAscMapKitPowerupBillboardComponent&&); \
	NO_API UAscMapKitPowerupBillboardComponent(const UAscMapKitPowerupBillboardComponent&); \
public:


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAscMapKitPowerupBillboardComponent(UAscMapKitPowerupBillboardComponent&&); \
	NO_API UAscMapKitPowerupBillboardComponent(const UAscMapKitPowerupBillboardComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAscMapKitPowerupBillboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAscMapKitPowerupBillboardComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAscMapKitPowerupBillboardComponent)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AuxAmmoTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxAmmoTexture); } \
	FORCEINLINE static uint32 __PPO__AuxAmmoCacheTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxAmmoCacheTexture); } \
	FORCEINLINE static uint32 __PPO__AuxBoostTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxBoostTexture); } \
	FORCEINLINE static uint32 __PPO__AuxConcealTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxConcealTexture); } \
	FORCEINLINE static uint32 __PPO__AuxInvincibleTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxInvincibleTexture); } \
	FORCEINLINE static uint32 __PPO__AuxLaserCouplerTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxLaserCouplerTexture); } \
	FORCEINLINE static uint32 __PPO__AuxPowerTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxPowerTexture); } \
	FORCEINLINE static uint32 __PPO__AuxPowerTransferTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxPowerTransferTexture); } \
	FORCEINLINE static uint32 __PPO__AuxShieldTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxShieldTexture); } \
	FORCEINLINE static uint32 __PPO__PriLaserTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriLaserTexture); } \
	FORCEINLINE static uint32 __PPO__PriShredTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriShredTexture); } \
	FORCEINLINE static uint32 __PPO__PriMechTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriMechTexture); } \
	FORCEINLINE static uint32 __PPO__PriToxTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriToxTexture); } \
	FORCEINLINE static uint32 __PPO__PriCoilTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriCoilTexture); } \
	FORCEINLINE static uint32 __PPO__PriPhaseTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriPhaseTexture); } \
	FORCEINLINE static uint32 __PPO__PriHydraTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriHydraTexture); } \
	FORCEINLINE static uint32 __PPO__PriNeutronTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriNeutronTexture); } \
	FORCEINLINE static uint32 __PPO__SecAssaultTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecAssaultTexture); } \
	FORCEINLINE static uint32 __PPO__SecAssaultPackTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecAssaultPackTexture); } \
	FORCEINLINE static uint32 __PPO__SecProwlerTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecProwlerTexture); } \
	FORCEINLINE static uint32 __PPO__SecProwlerPackTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecProwlerPackTexture); } \
	FORCEINLINE static uint32 __PPO__SecRNATexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecRNATexture); } \
	FORCEINLINE static uint32 __PPO__SecDeadeyeTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecDeadeyeTexture); } \
	FORCEINLINE static uint32 __PPO__SecDeadeyePackTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecDeadeyePackTexture); } \
	FORCEINLINE static uint32 __PPO__SecVexTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecVexTexture); } \
	FORCEINLINE static uint32 __PPO__SecAftershockTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecAftershockTexture); } \
	FORCEINLINE static uint32 __PPO__TetBioTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, TetBioTexture); } \
	FORCEINLINE static uint32 __PPO__TetBioPackTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, TetBioPackTexture); } \
	FORCEINLINE static uint32 __PPO__TetHowlerTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, TetHowlerTexture); } \
	FORCEINLINE static uint32 __PPO__TetHowlerPackTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, TetHowlerPackTexture); } \
	FORCEINLINE static uint32 __PPO__TetRadialTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, TetRadialTexture); } \
	FORCEINLINE static uint32 __PPO__TetRadialPackTexture() { return STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, TetRadialPackTexture); }


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_12_PROLOG
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_INCLASS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_INCLASS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCMAPKIT_API UClass* StaticClass<class UAscMapKitPowerupBillboardComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Powerup_AscMapKitPowerupBillboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
