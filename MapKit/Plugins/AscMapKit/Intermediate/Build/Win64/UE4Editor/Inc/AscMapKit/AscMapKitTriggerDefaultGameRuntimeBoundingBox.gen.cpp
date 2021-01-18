// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerDefaultGameRuntimeBoundingBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerDefaultGameRuntimeBoundingBox() {}
// Cross Module References
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_NoRegister();
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerTypeEnum();
// End Cross Module References
	void UAscMapKitTriggerDefaultGameRuntimeBoundingBox::StaticRegisterNativesUAscMapKitTriggerDefaultGameRuntimeBoundingBox()
	{
#if WITH_EDITOR
		UClass* Class = UAscMapKitTriggerDefaultGameRuntimeBoundingBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditorUpdateTriggerType", &UAscMapKitTriggerDefaultGameRuntimeBoundingBox::execEditorUpdateTriggerType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics
	{
		struct AscMapKitTriggerDefaultGameRuntimeBoundingBox_eventEditorUpdateTriggerType_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics::NewProp_TriggerType = { "TriggerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AscMapKitTriggerDefaultGameRuntimeBoundingBox_eventEditorUpdateTriggerType_Parms, TriggerType), Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerTypeEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics::NewProp_TriggerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics::NewProp_TriggerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics::NewProp_TriggerType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerDefaultGameRuntimeBoundingBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox, nullptr, "EditorUpdateTriggerType", nullptr, nullptr, sizeof(AscMapKitTriggerDefaultGameRuntimeBoundingBox_eventEditorUpdateTriggerType_Parms), Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_NoRegister()
	{
		return UAscMapKitTriggerDefaultGameRuntimeBoundingBox::StaticClass();
	}
	struct Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_EditorUpdateTriggerType, "EditorUpdateTriggerType" }, // 3647677238
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "Trigger/AscMapKitTriggerDefaultGameRuntimeBoundingBox.h" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerDefaultGameRuntimeBoundingBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAscMapKitTriggerDefaultGameRuntimeBoundingBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_Statics::ClassParams = {
		&UAscMapKitTriggerDefaultGameRuntimeBoundingBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAscMapKitTriggerDefaultGameRuntimeBoundingBox, 1873446493);
	template<> ASCMAPKIT_API UClass* StaticClass<UAscMapKitTriggerDefaultGameRuntimeBoundingBox>()
	{
		return UAscMapKitTriggerDefaultGameRuntimeBoundingBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox(Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox, &UAscMapKitTriggerDefaultGameRuntimeBoundingBox::StaticClass, TEXT("/Script/AscMapKit"), TEXT("UAscMapKitTriggerDefaultGameRuntimeBoundingBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAscMapKitTriggerDefaultGameRuntimeBoundingBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
