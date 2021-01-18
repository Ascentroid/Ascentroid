// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAscMapKitEnemyTypeEnum : uint8;
#ifdef ASCMAPKIT_AscMapKitEnemyBillboardComponent_generated_h
#error "AscMapKitEnemyBillboardComponent.generated.h already included, missing '#pragma once' in AscMapKitEnemyBillboardComponent.h"
#endif
#define ASCMAPKIT_AscMapKitEnemyBillboardComponent_generated_h

#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_SPARSE_DATA
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_RPC_WRAPPERS
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEditorUpdateEnemyType) \
	{ \
		P_GET_ENUM(EAscMapKitEnemyTypeEnum,Z_Param_EnemyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EditorUpdateEnemyType(EAscMapKitEnemyTypeEnum(Z_Param_EnemyType)); \
		P_NATIVE_END; \
	}


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEditorUpdateEnemyType) \
	{ \
		P_GET_ENUM(EAscMapKitEnemyTypeEnum,Z_Param_EnemyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EditorUpdateEnemyType(EAscMapKitEnemyTypeEnum(Z_Param_EnemyType)); \
		P_NATIVE_END; \
	}


#else
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAscMapKitEnemyBillboardComponent(); \
	friend struct Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics; \
public: \
	DECLARE_CLASS(UAscMapKitEnemyBillboardComponent, UBillboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(UAscMapKitEnemyBillboardComponent)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAscMapKitEnemyBillboardComponent(); \
	friend struct Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics; \
public: \
	DECLARE_CLASS(UAscMapKitEnemyBillboardComponent, UBillboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(UAscMapKitEnemyBillboardComponent)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAscMapKitEnemyBillboardComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAscMapKitEnemyBillboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAscMapKitEnemyBillboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAscMapKitEnemyBillboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAscMapKitEnemyBillboardComponent(UAscMapKitEnemyBillboardComponent&&); \
	NO_API UAscMapKitEnemyBillboardComponent(const UAscMapKitEnemyBillboardComponent&); \
public:


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAscMapKitEnemyBillboardComponent(UAscMapKitEnemyBillboardComponent&&); \
	NO_API UAscMapKitEnemyBillboardComponent(const UAscMapKitEnemyBillboardComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAscMapKitEnemyBillboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAscMapKitEnemyBillboardComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAscMapKitEnemyBillboardComponent)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AlienCylonTexture() { return STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, AlienCylonTexture); } \
	FORCEINLINE static uint32 __PPO__AlienGrawnTexture() { return STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, AlienGrawnTexture); } \
	FORCEINLINE static uint32 __PPO__MachineAssaultCacheTexture() { return STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, MachineAssaultCacheTexture); } \
	FORCEINLINE static uint32 __PPO__MachineAssaultTankTexture() { return STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, MachineAssaultTankTexture); } \
	FORCEINLINE static uint32 __PPO__MachineGeminiTurretTexture() { return STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, MachineGeminiTurretTexture); } \
	FORCEINLINE static uint32 __PPO__MachineSarkTurretTexture() { return STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, MachineSarkTurretTexture); } \
	FORCEINLINE static uint32 __PPO__MachineSecureGageTexture() { return STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, MachineSecureGageTexture); } \
	FORCEINLINE static uint32 __PPO__MachineServasTurretTexture() { return STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, MachineServasTurretTexture); }


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_12_PROLOG
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_INCLASS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_INCLASS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCMAPKIT_API UClass* StaticClass<class UAscMapKitEnemyBillboardComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyBillboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
