// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitForcefieldActor() {}
// Cross Module References
	ASCMAPKIT_API UClass* Z_Construct_UClass_AAscMapKitForcefieldActor_NoRegister();
	ASCMAPKIT_API UClass* Z_Construct_UClass_AAscMapKitForcefieldActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_AAscMapKitForcefieldActor_BeginPlay();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct();
// End Cross Module References
	void AAscMapKitForcefieldActor::StaticRegisterNativesAAscMapKitForcefieldActor()
	{
		UClass* Class = AAscMapKitForcefieldActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &AAscMapKitForcefieldActor::execBeginPlay },
			{ "OnConstruction", &AAscMapKitForcefieldActor::execOnConstruction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAscMapKitForcefieldActor_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAscMapKitForcefieldActor_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAscMapKitForcefieldActor_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAscMapKitForcefieldActor, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAscMapKitForcefieldActor_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitForcefieldActor_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAscMapKitForcefieldActor_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAscMapKitForcefieldActor_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics
	{
		struct AscMapKitForcefieldActor_eventOnConstruction_Parms
		{
			FTransform Transform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AscMapKitForcefieldActor_eventOnConstruction_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAscMapKitForcefieldActor, nullptr, "OnConstruction", nullptr, nullptr, sizeof(AscMapKitForcefieldActor_eventOnConstruction_Parms), Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAscMapKitForcefieldActor_NoRegister()
	{
		return AAscMapKitForcefieldActor::StaticClass();
	}
	struct Z_Construct_UClass_AAscMapKitForcefieldActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryColorMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimaryColorMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryColorMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimaryColorMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptyRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapKit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapKit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAscMapKitForcefieldActor_BeginPlay, "BeginPlay" }, // 4172194120
		{ &Z_Construct_UFunction_AAscMapKitForcefieldActor_OnConstruction, "OnConstruction" }, // 1591163562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Actor Asset User Data Collision Cooking HLOD Input LOD Lighting Mobile Physics Rendering Replication Sprite Tags Virtual Texture" },
		{ "IncludePath", "Forcefield/AscMapKitForcefieldActor.h" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_PrimaryColorMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_PrimaryColorMaterialInstance = { "PrimaryColorMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitForcefieldActor, PrimaryColorMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_PrimaryColorMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_PrimaryColorMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_PrimaryColorMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_PrimaryColorMaterial = { "PrimaryColorMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitForcefieldActor, PrimaryColorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_PrimaryColorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_PrimaryColorMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitForcefieldActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_EmptyRootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_EmptyRootComponent = { "EmptyRootComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitForcefieldActor, EmptyRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_EmptyRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_EmptyRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_MapKit_MetaData[] = {
		{ "Category", "Ascentroid" },
		{ "Comment", "// Edit the majority of the map kit actor properties here.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldActor.h" },
		{ "ToolTip", "Edit the majority of the map kit actor properties here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_MapKit = { "MapKit", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitForcefieldActor, MapKit), Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_MapKit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_MapKit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_PrimaryColorMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_PrimaryColorMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_EmptyRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::NewProp_MapKit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAscMapKitForcefieldActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::ClassParams = {
		&AAscMapKitForcefieldActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAscMapKitForcefieldActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAscMapKitForcefieldActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAscMapKitForcefieldActor, 4078041204);
	template<> ASCMAPKIT_API UClass* StaticClass<AAscMapKitForcefieldActor>()
	{
		return AAscMapKitForcefieldActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAscMapKitForcefieldActor(Z_Construct_UClass_AAscMapKitForcefieldActor, &AAscMapKitForcefieldActor::StaticClass, TEXT("/Script/AscMapKit"), TEXT("AAscMapKitForcefieldActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAscMapKitForcefieldActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
