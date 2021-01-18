// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaBillboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaBillboardComponent() {}
// Cross Module References
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_NoRegister();
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitEnvironmentAreaTypeEnum();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UAscMapKitEnvironmentAreaBillboardComponent::StaticRegisterNativesUAscMapKitEnvironmentAreaBillboardComponent()
	{
#if WITH_EDITOR
		UClass* Class = UAscMapKitEnvironmentAreaBillboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditorUpdateEnvironmentAreaType", &UAscMapKitEnvironmentAreaBillboardComponent::execEditorUpdateEnvironmentAreaType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics
	{
		struct AscMapKitEnvironmentAreaBillboardComponent_eventEditorUpdateEnvironmentAreaType_Parms
		{
			EAscMapKitEnvironmentAreaTypeEnum EnvironmentAreaType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnvironmentAreaType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnvironmentAreaType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics::NewProp_EnvironmentAreaType = { "EnvironmentAreaType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AscMapKitEnvironmentAreaBillboardComponent_eventEditorUpdateEnvironmentAreaType_Parms, EnvironmentAreaType), Z_Construct_UEnum_AscMapKit_EAscMapKitEnvironmentAreaTypeEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics::NewProp_EnvironmentAreaType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics::NewProp_EnvironmentAreaType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics::NewProp_EnvironmentAreaType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent, nullptr, "EditorUpdateEnvironmentAreaType", nullptr, nullptr, sizeof(AscMapKitEnvironmentAreaBillboardComponent_eventEditorUpdateEnvironmentAreaType_Parms), Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_NoRegister()
	{
		return UAscMapKitEnvironmentAreaBillboardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerStationTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerStationTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LavaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LavaTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElectricTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElectricTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcidTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcidTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnknownTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnknownTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBillboardComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAscMapKitEnvironmentAreaBillboardComponent_EditorUpdateEnvironmentAreaType, "EditorUpdateEnvironmentAreaType" }, // 1913755255
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility Trigger" },
		{ "IncludePath", "Area/AscMapKitEnvironmentAreaBillboardComponent.h" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaBillboardComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_WaterTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_WaterTexture = { "WaterTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnvironmentAreaBillboardComponent, WaterTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_WaterTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_WaterTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_PowerStationTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_PowerStationTexture = { "PowerStationTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnvironmentAreaBillboardComponent, PowerStationTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_PowerStationTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_PowerStationTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_LavaTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_LavaTexture = { "LavaTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnvironmentAreaBillboardComponent, LavaTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_LavaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_LavaTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_ElectricTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_ElectricTexture = { "ElectricTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnvironmentAreaBillboardComponent, ElectricTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_ElectricTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_ElectricTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_AcidTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_AcidTexture = { "AcidTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnvironmentAreaBillboardComponent, AcidTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_AcidTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_AcidTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_UnknownTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_UnknownTexture = { "UnknownTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnvironmentAreaBillboardComponent, UnknownTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_UnknownTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_UnknownTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_WaterTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_PowerStationTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_LavaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_ElectricTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_AcidTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::NewProp_UnknownTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAscMapKitEnvironmentAreaBillboardComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::ClassParams = {
		&UAscMapKitEnvironmentAreaBillboardComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAscMapKitEnvironmentAreaBillboardComponent, 2071485022);
	template<> ASCMAPKIT_API UClass* StaticClass<UAscMapKitEnvironmentAreaBillboardComponent>()
	{
		return UAscMapKitEnvironmentAreaBillboardComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAscMapKitEnvironmentAreaBillboardComponent(Z_Construct_UClass_UAscMapKitEnvironmentAreaBillboardComponent, &UAscMapKitEnvironmentAreaBillboardComponent::StaticClass, TEXT("/Script/AscMapKit"), TEXT("UAscMapKitEnvironmentAreaBillboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAscMapKitEnvironmentAreaBillboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
