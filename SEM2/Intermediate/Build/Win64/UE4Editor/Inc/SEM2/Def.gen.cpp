// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SEM2/Def.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDef() {}
// Cross Module References
	SEM2_API UClass* Z_Construct_UClass_ADef_NoRegister();
	SEM2_API UClass* Z_Construct_UClass_ADef();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SEM2();
// End Cross Module References
	void ADef::StaticRegisterNativesADef()
	{
	}
	UClass* Z_Construct_UClass_ADef_NoRegister()
	{
		return ADef::StaticClass();
	}
	struct Z_Construct_UClass_ADef_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADef_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SEM2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADef_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Def.h" },
		{ "ModuleRelativePath", "Def.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADef_Statics::NewProp_input_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Def.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADef_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADef, input), METADATA_PARAMS(Z_Construct_UClass_ADef_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADef_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADef_Statics::NewProp_input,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADef_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADef>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADef_Statics::ClassParams = {
		&ADef::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADef_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADef_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADef_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADef_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADef()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADef_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADef, 864097622);
	template<> SEM2_API UClass* StaticClass<ADef>()
	{
		return ADef::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADef(Z_Construct_UClass_ADef, &ADef::StaticClass, TEXT("/Script/SEM2"), TEXT("ADef"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADef);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
