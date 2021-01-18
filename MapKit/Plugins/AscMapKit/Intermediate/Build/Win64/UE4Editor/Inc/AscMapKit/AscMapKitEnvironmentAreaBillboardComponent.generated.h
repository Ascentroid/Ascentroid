// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAscMapKitEnvironmentAreaTypeEnum : uint8;
#ifdef ASCMAPKIT_AscMapKitEnvironmentAreaBillboardComponent_generated_h
#error "AscMapKitEnvironmentAreaBillboardComponent.generated.h already included, missing '#pragma once' in AscMapKitEnvironmentAreaBillboardComponent.h"
#endif
#define ASCMAPKIT_AscMapKitEnvironmentAreaBillboardComponent_generated_h

#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_SPARSE_DATA
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_RPC_WRAPPERS
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEditorUpdateEnvironmentAreaType) \
	{ \
		P_GET_ENUM(EAscMapKitEnvironmentAreaTypeEnum,Z_Param_EnvironmentAreaType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EditorUpdateEnvironmentAreaType(EAscMapKitEnvironmentAreaTypeEnum(Z_Param_EnvironmentAreaType)); \
		P_NATIVE_END; \
	}


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEditorUpdateEnvironmentAreaType) \
	{ \
		P_GET_ENUM(EAscMapKitEnvironmentAreaTypeEnum,Z_Param_EnvironmentAreaType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EditorUpdateEnvironmentAreaType(EAscMapKitEnvironmentAreaTypeEnum(Z_Param_EnvironmentAreaType)); \
		P_NATIVE_END; \
	}


#else
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAscMapKitEnvironmentAreaBillboardComponent(); \
	friend struct Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics; \
public: \
	DECLARE_CLASS(UAscMapKitEnvironmentAreaBillboardComponent, UBillboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(UAscMapKitEnvironmentAreaBillboardComponent)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAscMapKitEnvironmentAreaBillboardComponent(); \
	friend struct Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics; \
public: \
	DECLARE_CLASS(UAscMapKitEnvironmentAreaBillboardComponent, UBillboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(UAscMapKitEnvironmentAreaBillboardComponent)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAscMapKitEnvironmentAreaBillboardComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAscMapKitEnvironmentAreaBillboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAscMapKitEnvironmentAreaBillboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAscMapKitEnvironmentAreaBillboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAscMapKitEnvironmentAreaBillboardComponent(UAscMapKitEnvironmentAreaBillboardComponent&&); \
	NO_API UAscMapKitEnvironmentAreaBillboardComponent(const UAscMapKitEnvironmentAreaBillboardComponent&); \
public:


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAscMapKitEnvironmentAreaBillboardComponent(UAscMapKitEnvironmentAreaBillboardComponent&&); \
	NO_API UAscMapKitEnvironmentAreaBillboardComponent(const UAscMapKitEnvironmentAreaBillboardComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAscMapKitEnvironmentAreaBillboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAscMapKitEnvironmentAreaBillboardComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAscMapKitEnvironmentAreaBillboardComponent)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UnknownTexture() { return STRUCT_OFFSET(UAscMapKitEnvironmentAreaBillboardComponent, UnknownTexture); } \
	FORCEINLINE static uint32 __PPO__AcidTexture() { return STRUCT_OFFSET(UAscMapKitEnvironmentAreaBillboardComponent, AcidTexture); } \
	FORCEINLINE static uint32 __PPO__ElectricTexture() { return STRUCT_OFFSET(UAscMapKitEnvironmentAreaBillboardComponent, ElectricTexture); } \
	FORCEINLINE static uint32 __PPO__LavaTexture() { return STRUCT_OFFSET(UAscMapKitEnvironmentAreaBillboardComponent, LavaTexture); } \
	FORCEINLINE static uint32 __PPO__PowerStationTexture() { return STRUCT_OFFSET(UAscMapKitEnvironmentAreaBillboardComponent, PowerStationTexture); } \
	FORCEINLINE static uint32 __PPO__WaterTexture() { return STRUCT_OFFSET(UAscMapKitEnvironmentAreaBillboardComponent, WaterTexture); }


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_12_PROLOG
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_INCLASS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_INCLASS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCMAPKIT_API UClass* StaticClass<class UAscMapKitEnvironmentAreaBillboardComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaBillboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
