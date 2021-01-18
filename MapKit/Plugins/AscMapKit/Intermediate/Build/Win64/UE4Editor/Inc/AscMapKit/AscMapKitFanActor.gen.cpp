// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Fan/AscMapKitFanActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitFanActor() {}
// Cross Module References
	ASCMAPKIT_API UClass* Z_Construct_UClass_AAscMapKitFanActor_NoRegister();
	ASCMAPKIT_API UClass* Z_Construct_UClass_AAscMapKitFanActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_AAscMapKitFanActor_BeginPlay();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct();
// End Cross Module References
	void AAscMapKitFanActor::StaticRegisterNativesAAscMapKitFanActor()
	{
		UClass* Class = AAscMapKitFanActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &AAscMapKitFanActor::execBeginPlay },
			{ "OnConstruction", &AAscMapKitFanActor::execOnConstruction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAscMapKitFanActor_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAscMapKitFanActor_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAscMapKitFanActor_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAscMapKitFanActor, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAscMapKitFanActor_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitFanActor_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAscMapKitFanActor_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAscMapKitFanActor_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics
	{
		struct AscMapKitFanActor_eventOnConstruction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AscMapKitFanActor_eventOnConstruction_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAscMapKitFanActor, nullptr, "OnConstruction", nullptr, nullptr, sizeof(AscMapKitFanActor_eventOnConstruction_Parms), Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAscMapKitFanActor_NoRegister()
	{
		return AAscMapKitFanActor::StaticClass();
	}
	struct Z_Construct_UClass_AAscMapKitFanActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animated20x20mBasic001StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animated20x20mBasic001StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
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
	UObject* (*const Z_Construct_UClass_AAscMapKitFanActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAscMapKitFanActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAscMapKitFanActor_BeginPlay, "BeginPlay" }, // 2753189263
		{ &Z_Construct_UFunction_AAscMapKitFanActor_OnConstruction, "OnConstruction" }, // 3403075789
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitFanActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Actor Asset User Data Collision Cooking HLOD Input LOD Lighting Mobile Physics Rendering Replication Sprite Tags Virtual Texture" },
		{ "IncludePath", "Fan/AscMapKitFanActor.h" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_Animated20x20mBasic001StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_Animated20x20mBasic001StaticMesh = { "Animated20x20mBasic001StaticMesh", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitFanActor, Animated20x20mBasic001StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_Animated20x20mBasic001StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_Animated20x20mBasic001StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Comment", "// todo: need for facing direction\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanActor.h" },
		{ "ToolTip", "todo: need for facing direction" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitFanActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitFanActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_EmptyRootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_EmptyRootComponent = { "EmptyRootComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitFanActor, EmptyRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_EmptyRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_EmptyRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_MapKit_MetaData[] = {
		{ "Category", "Ascentroid" },
		{ "Comment", "// Edit the majority of the map kit actor properties here.\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanActor.h" },
		{ "ToolTip", "Edit the majority of the map kit actor properties here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_MapKit = { "MapKit", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitFanActor, MapKit), Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_MapKit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_MapKit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAscMapKitFanActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_Animated20x20mBasic001StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_ArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_EmptyRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitFanActor_Statics::NewProp_MapKit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAscMapKitFanActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAscMapKitFanActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAscMapKitFanActor_Statics::ClassParams = {
		&AAscMapKitFanActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAscMapKitFanActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitFanActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAscMapKitFanActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitFanActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAscMapKitFanActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAscMapKitFanActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAscMapKitFanActor, 2112685766);
	template<> ASCMAPKIT_API UClass* StaticClass<AAscMapKitFanActor>()
	{
		return AAscMapKitFanActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAscMapKitFanActor(Z_Construct_UClass_AAscMapKitFanActor, &AAscMapKitFanActor::StaticClass, TEXT("/Script/AscMapKit"), TEXT("AAscMapKitFanActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAscMapKitFanActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
