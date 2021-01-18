// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef ASCMAPKIT_AscMapKitEnvironmentAreaActor_generated_h
#error "AscMapKitEnvironmentAreaActor.generated.h already included, missing '#pragma once' in AscMapKitEnvironmentAreaActor.h"
#endif
#define ASCMAPKIT_AscMapKitEnvironmentAreaActor_generated_h

#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_SPARSE_DATA
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnConstruction) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConstruction(Z_Param_Out_Transform); \
		P_NATIVE_END; \
	}


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnConstruction) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConstruction(Z_Param_Out_Transform); \
		P_NATIVE_END; \
	}


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAscMapKitEnvironmentAreaActor(); \
	friend struct Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitEnvironmentAreaActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitEnvironmentAreaActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAAscMapKitEnvironmentAreaActor(); \
	friend struct Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitEnvironmentAreaActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitEnvironmentAreaActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAscMapKitEnvironmentAreaActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAscMapKitEnvironmentAreaActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitEnvironmentAreaActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitEnvironmentAreaActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitEnvironmentAreaActor(AAscMapKitEnvironmentAreaActor&&); \
	NO_API AAscMapKitEnvironmentAreaActor(const AAscMapKitEnvironmentAreaActor&); \
public:


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitEnvironmentAreaActor(AAscMapKitEnvironmentAreaActor&&); \
	NO_API AAscMapKitEnvironmentAreaActor(const AAscMapKitEnvironmentAreaActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitEnvironmentAreaActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitEnvironmentAreaActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAscMapKitEnvironmentAreaActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_PRIVATE_PROPERTY_OFFSET
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_16_PROLOG
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_INCLASS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_INCLASS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCMAPKIT_API UClass* StaticClass<class AAscMapKitEnvironmentAreaActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Area_AscMapKitEnvironmentAreaActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
