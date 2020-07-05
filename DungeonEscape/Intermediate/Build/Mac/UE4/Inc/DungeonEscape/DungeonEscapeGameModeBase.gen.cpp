// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonEscape/DungeonEscapeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonEscapeGameModeBase() {}
// Cross Module References
	DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapeGameModeBase_NoRegister();
	DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DungeonEscape();
// End Cross Module References
	void ADungeonEscapeGameModeBase::StaticRegisterNativesADungeonEscapeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADungeonEscapeGameModeBase_NoRegister()
	{
		return ADungeonEscapeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonEscapeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonEscapeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonEscapeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DungeonEscapeGameModeBase.h" },
		{ "ModuleRelativePath", "DungeonEscapeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonEscapeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonEscapeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADungeonEscapeGameModeBase_Statics::ClassParams = {
		&ADungeonEscapeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonEscapeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonEscapeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonEscapeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADungeonEscapeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADungeonEscapeGameModeBase, 2241162255);
	template<> DUNGEONESCAPE_API UClass* StaticClass<ADungeonEscapeGameModeBase>()
	{
		return ADungeonEscapeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADungeonEscapeGameModeBase(Z_Construct_UClass_ADungeonEscapeGameModeBase, &ADungeonEscapeGameModeBase::StaticClass, TEXT("/Script/DungeonEscape"), TEXT("ADungeonEscapeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonEscapeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
