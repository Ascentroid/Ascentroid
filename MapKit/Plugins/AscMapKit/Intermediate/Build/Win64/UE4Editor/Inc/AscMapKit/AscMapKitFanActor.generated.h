// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef ASCMAPKIT_AscMapKitFanActor_generated_h
#error "AscMapKitFanActor.generated.h already included, missing '#pragma once' in AscMapKitFanActor.h"
#endif
#define ASCMAPKIT_AscMapKitFanActor_generated_h

#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_SPARSE_DATA
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_RPC_WRAPPERS \
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


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAscMapKitFanActor(); \
	friend struct Z_Construct_UClass_AAscMapKitFanActor_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitFanActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitFanActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAscMapKitFanActor(); \
	friend struct Z_Construct_UClass_AAscMapKitFanActor_Statics; \
public: \
	DECLARE_CLASS(AAscMapKitFanActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscMapKit"), NO_API) \
	DECLARE_SERIALIZER(AAscMapKitFanActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAscMapKitFanActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAscMapKitFanActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitFanActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitFanActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitFanActor(AAscMapKitFanActor&&); \
	NO_API AAscMapKitFanActor(const AAscMapKitFanActor&); \
public:


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAscMapKitFanActor(AAscMapKitFanActor&&); \
	NO_API AAscMapKitFanActor(const AAscMapKitFanActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAscMapKitFanActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAscMapKitFanActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAscMapKitFanActor)


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Animated20x20mBasic001StaticMesh() { return STRUCT_OFFSET(AAscMapKitFanActor, Animated20x20mBasic001StaticMesh); }


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_13_PROLOG
#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_RPC_WRAPPERS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_INCLASS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_SPARSE_DATA \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_INCLASS_NO_PURE_DECLS \
	Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCMAPKIT_API UClass* StaticClass<class AAscMapKitFanActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Plugins_AscMapKit_Source_AscMapKit_Public_Fan_AscMapKitFanActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
