// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef ASCMAPKIT_AscMapKitEnemyActor_generated_h
#error "AscMapKitEnemyActor.generated.h already included, missing '#pragma once' in AscMapKitEnemyActor.h"
#endif
#define ASCMAPKIT_AscMapKitEnemyActor_generated_h

#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_SPARSE_DATA
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_RPC_WRAPPERS \
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


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAscMapKitEnemyActor(); \
	friend struct Z_Construct_UClass_AAscMapKitEnemyActor_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitEnemyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitEnemyActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAAscMapKitEnemyActor(); \
	friend struct Z_Construct_UClass_AAscMapKitEnemyActor_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitEnemyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitEnemyActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAscMapKitEnemyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAscMapKitEnemyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitEnemyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitEnemyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitEnemyActor(AAscMapKitEnemyActor&&); \
	NO_API AAscMapKitEnemyActor(const AAscMapKitEnemyActor&); \
public:


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitEnemyActor(AAscMapKitEnemyActor&&); \
	NO_API AAscMapKitEnemyActor(const AAscMapKitEnemyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitEnemyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitEnemyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAscMapKitEnemyActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_PRIVATE_PROPERTY_OFFSET
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_15_PROLOG
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_INCLASS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_INCLASS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCMAPKIT_API UClass* StaticClass<class AAscMapKitEnemyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Enemy_AscMapKitEnemyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
