// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef ASCMAPKIT_AscMapKitTriggerActor_generated_h
#error "AscMapKitTriggerActor.generated.h already included, missing '#pragma once' in AscMapKitTriggerActor.h"
#endif
#define ASCMAPKIT_AscMapKitTriggerActor_generated_h

#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_SPARSE_DATA
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_RPC_WRAPPERS \
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


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_EVENT_PARMS
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_CALLBACK_WRAPPERS
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAscMapKitTriggerActor(); \
	friend struct Z_Construct_UClass_AAscMapKitTriggerActor_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitTriggerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitTriggerActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAAscMapKitTriggerActor(); \
	friend struct Z_Construct_UClass_AAscMapKitTriggerActor_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitTriggerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitTriggerActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAscMapKitTriggerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAscMapKitTriggerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitTriggerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitTriggerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitTriggerActor(AAscMapKitTriggerActor&&); \
	NO_API AAscMapKitTriggerActor(const AAscMapKitTriggerActor&); \
public:


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitTriggerActor(AAscMapKitTriggerActor&&); \
	NO_API AAscMapKitTriggerActor(const AAscMapKitTriggerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitTriggerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitTriggerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAscMapKitTriggerActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_PRIVATE_PROPERTY_OFFSET
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_15_PROLOG \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_EVENT_PARMS


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_CALLBACK_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_INCLASS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_CALLBACK_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_INCLASS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCMAPKIT_API UClass* StaticClass<class AAscMapKitTriggerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Trigger_AscMapKitTriggerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
