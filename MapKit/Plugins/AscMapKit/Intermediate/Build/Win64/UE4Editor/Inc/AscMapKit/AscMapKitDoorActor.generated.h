// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef ASCMAPKIT_AscMapKitDoorActor_generated_h
#error "AscMapKitDoorActor.generated.h already included, missing '#pragma once' in AscMapKitDoorActor.h"
#endif
#define ASCMAPKIT_AscMapKitDoorActor_generated_h

#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_SPARSE_DATA
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginPlay(); \
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


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginPlay(); \
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


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAscMapKitDoorActor(); \
	friend struct Z_Construct_UClass_AAscMapKitDoorActor_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitDoorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitDoorActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAscMapKitDoorActor(); \
	friend struct Z_Construct_UClass_AAscMapKitDoorActor_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitDoorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitDoorActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAscMapKitDoorActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAscMapKitDoorActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitDoorActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitDoorActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitDoorActor(AAscMapKitDoorActor&&); \
	NO_API AAscMapKitDoorActor(const AAscMapKitDoorActor&); \
public:


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitDoorActor(AAscMapKitDoorActor&&); \
	NO_API AAscMapKitDoorActor(const AAscMapKitDoorActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitDoorActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitDoorActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAscMapKitDoorActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Animated20x20mBasic001Material() { return STRUCT_OFFSET(AAscMapKitDoorActor, Animated20x20mBasic001Material); } \
	FORCEINLINE static uint32 __PPO__Animated20x20mBasic002Material() { return STRUCT_OFFSET(AAscMapKitDoorActor, Animated20x20mBasic002Material); } \
	FORCEINLINE static uint32 __PPO__Animated20x20mBasic003Material() { return STRUCT_OFFSET(AAscMapKitDoorActor, Animated20x20mBasic003Material); } \
	FORCEINLINE static uint32 __PPO__Animated20x20mBasic004Material() { return STRUCT_OFFSET(AAscMapKitDoorActor, Animated20x20mBasic004Material); } \
	FORCEINLINE static uint32 __PPO__Animated20x20mSciFiDoorsDoor1Material() { return STRUCT_OFFSET(AAscMapKitDoorActor, Animated20x20mSciFiDoorsDoor1Material); } \
	FORCEINLINE static uint32 __PPO__Animated20x20mSciFiDoorsDoor2Material() { return STRUCT_OFFSET(AAscMapKitDoorActor, Animated20x20mSciFiDoorsDoor2Material); } \
	FORCEINLINE static uint32 __PPO__Animated20x20mSciFiDoorsDoor4Material() { return STRUCT_OFFSET(AAscMapKitDoorActor, Animated20x20mSciFiDoorsDoor4Material); } \
	FORCEINLINE static uint32 __PPO__Animated20x20mSciFiPropsDoor1Material() { return STRUCT_OFFSET(AAscMapKitDoorActor, Animated20x20mSciFiPropsDoor1Material); } \
	FORCEINLINE static uint32 __PPO__Animated40x20mBasic001Material() { return STRUCT_OFFSET(AAscMapKitDoorActor, Animated40x20mBasic001Material); } \
	FORCEINLINE static uint32 __PPO__Animated40x20mSciFiDoorsDoor3Material() { return STRUCT_OFFSET(AAscMapKitDoorActor, Animated40x20mSciFiDoorsDoor3Material); } \
	FORCEINLINE static uint32 __PPO__Destructible20x20mBasic001Material() { return STRUCT_OFFSET(AAscMapKitDoorActor, Destructible20x20mBasic001Material); }


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_12_PROLOG
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_INCLASS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_INCLASS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCMAPKIT_API UClass* StaticClass<class AAscMapKitDoorActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Door_AscMapKitDoorActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
