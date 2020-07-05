// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonEscape/WorldLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldLocation() {}
// Cross Module References
	DUNGEONESCAPE_API UClass* Z_Construct_UClass_UWorldLocation_NoRegister();
	DUNGEONESCAPE_API UClass* Z_Construct_UClass_UWorldLocation();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DungeonEscape();
// End Cross Module References
	void UWorldLocation::StaticRegisterNativesUWorldLocation()
	{
	}
	UClass* Z_Construct_UClass_UWorldLocation_NoRegister()
	{
		return UWorldLocation::StaticClass();
	}
	struct Z_Construct_UClass_UWorldLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldLocation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WorldLocation.h" },
		{ "ModuleRelativePath", "WorldLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorldLocation_Statics::ClassParams = {
		&UWorldLocation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorldLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldLocation, 2837442903);
	template<> DUNGEONESCAPE_API UClass* StaticClass<UWorldLocation>()
	{
		return UWorldLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldLocation(Z_Construct_UClass_UWorldLocation, &UWorldLocation::StaticClass, TEXT("/Script/DungeonEscape"), TEXT("UWorldLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
