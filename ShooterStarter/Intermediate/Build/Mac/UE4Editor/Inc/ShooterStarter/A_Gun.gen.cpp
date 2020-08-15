// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterStarter/Actors/A_Gun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_Gun() {}
// Cross Module References
	SHOOTERSTARTER_API UClass* Z_Construct_UClass_AA_Gun_NoRegister();
	SHOOTERSTARTER_API UClass* Z_Construct_UClass_AA_Gun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShooterStarter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AA_Gun::StaticRegisterNativesAA_Gun()
	{
	}
	UClass* Z_Construct_UClass_AA_Gun_NoRegister()
	{
		return AA_Gun::StaticClass();
	}
	struct Z_Construct_UClass_AA_Gun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AA_Gun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterStarter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_Gun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/A_Gun.h" },
		{ "ModuleRelativePath", "Actors/A_Gun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_Gun_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "A_Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/A_Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_Gun_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AA_Gun, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AA_Gun_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AA_Gun_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_Gun_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "A_Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/A_Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_Gun_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AA_Gun, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AA_Gun_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AA_Gun_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AA_Gun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_Gun_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_Gun_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA_Gun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_Gun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AA_Gun_Statics::ClassParams = {
		&AA_Gun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AA_Gun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AA_Gun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AA_Gun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AA_Gun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AA_Gun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AA_Gun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AA_Gun, 172754388);
	template<> SHOOTERSTARTER_API UClass* StaticClass<AA_Gun>()
	{
		return AA_Gun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AA_Gun(Z_Construct_UClass_AA_Gun, &AA_Gun::StaticClass, TEXT("/Script/ShooterStarter"), TEXT("AA_Gun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA_Gun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
