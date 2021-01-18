// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerBillboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerBillboardComponent() {}
// Cross Module References
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_NoRegister();
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitTriggerBillboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerTypeEnum();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UAscMapKitTriggerBillboardComponent::StaticRegisterNativesUAscMapKitTriggerBillboardComponent()
	{
#if WITH_EDITOR
		UClass* Class = UAscMapKitTriggerBillboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditorUpdateTriggerType", &UAscMapKitTriggerBillboardComponent::execEditorUpdateTriggerType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics
	{
		struct AscMapKitTriggerBillboardComponent_eventEditorUpdateTriggerType_Parms
		{
			EAscMapKitTriggerTypeEnum TriggerType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TriggerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TriggerType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics::NewProp_TriggerType = { "TriggerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AscMapKitTriggerBillboardComponent_eventEditorUpdateTriggerType_Parms, TriggerType), Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerTypeEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics::NewProp_TriggerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics::NewProp_TriggerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics::NewProp_TriggerType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAscMapKitTriggerBillboardComponent, nullptr, "EditorUpdateTriggerType", nullptr, nullptr, sizeof(AscMapKitTriggerBillboardComponent_eventEditorUpdateTriggerType_Parms), Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_NoRegister()
	{
		return UAscMapKitTriggerBillboardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Basic001Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Basic001Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBillboardComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAscMapKitTriggerBillboardComponent_EditorUpdateTriggerType, "EditorUpdateTriggerType" }, // 3228528166
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility Trigger" },
		{ "IncludePath", "Trigger/AscMapKitTriggerBillboardComponent.h" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerBillboardComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::NewProp_Basic001Texture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::NewProp_Basic001Texture = { "Basic001Texture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitTriggerBillboardComponent, Basic001Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::NewProp_Basic001Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::NewProp_Basic001Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::NewProp_CurrentTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::NewProp_CurrentTexture = { "CurrentTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitTriggerBillboardComponent, CurrentTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::NewProp_CurrentTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::NewProp_CurrentTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::NewProp_Basic001Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::NewProp_CurrentTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAscMapKitTriggerBillboardComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::ClassParams = {
		&UAscMapKitTriggerBillboardComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAscMapKitTriggerBillboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAscMapKitTriggerBillboardComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAscMapKitTriggerBillboardComponent, 3739284515);
	template<> ASCMAPKIT_API UClass* StaticClass<UAscMapKitTriggerBillboardComponent>()
	{
		return UAscMapKitTriggerBillboardComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAscMapKitTriggerBillboardComponent(Z_Construct_UClass_UAscMapKitTriggerBillboardComponent, &UAscMapKitTriggerBillboardComponent::StaticClass, TEXT("/Script/AscMapKit"), TEXT("UAscMapKitTriggerBillboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAscMapKitTriggerBillboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
