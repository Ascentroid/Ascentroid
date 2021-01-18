// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaActor() {}
// Cross Module References
	ASCMAPKIT_API UClass* Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_NoRegister();
	ASCMAPKIT_API UClass* Z_Construct_UClass_AAscMapKitEnvironmentAreaActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct();
// End Cross Module References
	void AAscMapKitEnvironmentAreaActor::StaticRegisterNativesAAscMapKitEnvironmentAreaActor()
	{
		UClass* Class = AAscMapKitEnvironmentAreaActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnConstruction", &AAscMapKitEnvironmentAreaActor::execOnConstruction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics
	{
		struct AscMapKitEnvironmentAreaActor_eventOnConstruction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AscMapKitEnvironmentAreaActor_eventOnConstruction_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAscMapKitEnvironmentAreaActor, nullptr, "OnConstruction", nullptr, nullptr, sizeof(AscMapKitEnvironmentAreaActor_eventOnConstruction_Parms), Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_NoRegister()
	{
		return AAscMapKitEnvironmentAreaActor::StaticClass();
	}
	struct Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptyRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapKit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapKit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAscMapKitEnvironmentAreaActor_OnConstruction, "OnConstruction" }, // 1361440036
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Actor Asset User Data Collision Cooking HLOD Input LOD Lighting Mobile Physics Rendering Replication Sprite Tags Virtual Texture" },
		{ "IncludePath", "Area/AscMapKitEnvironmentAreaActor.h" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_BillboardComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitEnvironmentAreaActor, BillboardComponent), Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_BillboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_BillboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitEnvironmentAreaActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_EmptyRootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_EmptyRootComponent = { "EmptyRootComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitEnvironmentAreaActor, EmptyRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_EmptyRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_EmptyRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Ascentroid|Components|Collision" },
		{ "Comment", "// If you selected a map kit collision type of \"Static Mesh\", specify the static mesh in the \"Static Mesh\" property.\n// * Only the \"Static Mesh\" property is used at runtime.\n// * All other properties are ignored.\n// * These are configured as components in the map kit so you can visualize the collision in the editor.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaActor.h" },
		{ "ToolTip", "If you selected a map kit collision type of \"Static Mesh\", specify the static mesh in the \"Static Mesh\" property.\n* Only the \"Static Mesh\" property is used at runtime.\n* All other properties are ignored.\n* These are configured as components in the map kit so you can visualize the collision in the editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitEnvironmentAreaActor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "Ascentroid|Components|Collision" },
		{ "Comment", "// If you selected a map kit collision type of \"Box\", specify the size of the box in the \"Shape -> Box Extent\" property.\n// * Only the \"Shape -> Box Extent\" property is used at runtime.\n// * All other properties are ignored.\n// * These are configured as components in the map kit so you can visualize the collision in the editor.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaActor.h" },
		{ "ToolTip", "If you selected a map kit collision type of \"Box\", specify the size of the box in the \"Shape -> Box Extent\" property.\n* Only the \"Shape -> Box Extent\" property is used at runtime.\n* All other properties are ignored.\n* These are configured as components in the map kit so you can visualize the collision in the editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitEnvironmentAreaActor, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_MapKit_MetaData[] = {
		{ "Category", "Ascentroid" },
		{ "Comment", "// Edit the majority of the map kit actor properties here.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaActor.h" },
		{ "ToolTip", "Edit the majority of the map kit actor properties here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_MapKit = { "MapKit", nullptr, (EPropertyFlags)0x0010008001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAscMapKitEnvironmentAreaActor, MapKit), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_MapKit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_MapKit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_BillboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_ArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_EmptyRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::NewProp_MapKit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAscMapKitEnvironmentAreaActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::ClassParams = {
		&AAscMapKitEnvironmentAreaActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAscMapKitEnvironmentAreaActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAscMapKitEnvironmentAreaActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAscMapKitEnvironmentAreaActor, 3917406164);
	template<> ASCMAPKIT_API UClass* StaticClass<AAscMapKitEnvironmentAreaActor>()
	{
		return AAscMapKitEnvironmentAreaActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAscMapKitEnvironmentAreaActor(Z_Construct_UClass_AAscMapKitEnvironmentAreaActor, &AAscMapKitEnvironmentAreaActor::StaticClass, TEXT("/Script/AscMapKit"), TEXT("AAscMapKitEnvironmentAreaActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAscMapKitEnvironmentAreaActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
