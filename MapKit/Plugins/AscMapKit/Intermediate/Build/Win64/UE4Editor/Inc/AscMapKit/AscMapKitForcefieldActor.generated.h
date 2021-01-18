// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef ASCMAPKIT_AscMapKitForcefieldActor_generated_h
#error "AscMapKitForcefieldActor.generated.h already included, missing '#pragma once' in AscMapKitForcefieldActor.h"
#endif
#define ASCMAPKIT_AscMapKitForcefieldActor_generated_h

#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_SPARSE_DATA
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_RPC_WRAPPERS \
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


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAscMapKitForcefieldActor(); \
	friend struct Z_Construct_UClass_AAscMapKitForcefieldActor_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitForcefieldActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitForcefieldActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAscMapKitForcefieldActor(); \
	friend struct Z_Construct_UClass_AAscMapKitForcefieldActor_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitForcefieldActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitForcefieldActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAscMapKitForcefieldActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAscMapKitForcefieldActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitForcefieldActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitForcefieldActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitForcefieldActor(AAscMapKitForcefieldActor&&); \
	NO_API AAscMapKitForcefieldActor(const AAscMapKitForcefieldActor&); \
public:


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitForcefieldActor(AAscMapKitForcefieldActor&&); \
	NO_API AAscMapKitForcefieldActor(const AAscMapKitForcefieldActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitForcefieldActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitForcefieldActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAscMapKitForcefieldActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_PRIVATE_PROPERTY_OFFSET
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_13_PROLOG
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_INCLASS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_INCLASS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCMAPKIT_API UClass* StaticClass<class AAscMapKitForcefieldActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Forcefield_AscMapKitForcefieldActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
