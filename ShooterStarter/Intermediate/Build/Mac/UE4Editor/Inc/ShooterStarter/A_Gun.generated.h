// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERSTARTER_A_Gun_generated_h
#error "A_Gun.generated.h already included, missing '#pragma once' in A_Gun.h"
#endif
#define SHOOTERSTARTER_A_Gun_generated_h

#define ShooterStarter_Source_ShooterStarter_A_Gun_h_12_SPARSE_DATA
#define ShooterStarter_Source_ShooterStarter_A_Gun_h_12_RPC_WRAPPERS
#define ShooterStarter_Source_ShooterStarter_A_Gun_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterStarter_Source_ShooterStarter_A_Gun_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAA_Gun(); \
	friend struct Z_Construct_UClass_AA_Gun_Statics; \
public: \
	DECLARE_CLASS(AA_Gun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(AA_Gun)


#define ShooterStarter_Source_ShooterStarter_A_Gun_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAA_Gun(); \
	friend struct Z_Construct_UClass_AA_Gun_Statics; \
public: \
	DECLARE_CLASS(AA_Gun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(AA_Gun)


#define ShooterStarter_Source_ShooterStarter_A_Gun_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AA_Gun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AA_Gun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AA_Gun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AA_Gun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AA_Gun(AA_Gun&&); \
	NO_API AA_Gun(const AA_Gun&); \
public:


#define ShooterStarter_Source_ShooterStarter_A_Gun_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AA_Gun(AA_Gun&&); \
	NO_API AA_Gun(const AA_Gun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AA_Gun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AA_Gun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AA_Gun)


#define ShooterStarter_Source_ShooterStarter_A_Gun_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AA_Gun, Root); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AA_Gun, Mesh); } \
	FORCEINLINE static uint32 __PPO__MuzzleFlash() { return STRUCT_OFFSET(AA_Gun, MuzzleFlash); } \
	FORCEINLINE static uint32 __PPO__HitFlash() { return STRUCT_OFFSET(AA_Gun, HitFlash); } \
	FORCEINLINE static uint32 __PPO__MaxRange() { return STRUCT_OFFSET(AA_Gun, MaxRange); }


#define ShooterStarter_Source_ShooterStarter_A_Gun_h_9_PROLOG
#define ShooterStarter_Source_ShooterStarter_A_Gun_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_A_Gun_h_12_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_A_Gun_h_12_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_A_Gun_h_12_RPC_WRAPPERS \
	ShooterStarter_Source_ShooterStarter_A_Gun_h_12_INCLASS \
	ShooterStarter_Source_ShooterStarter_A_Gun_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterStarter_Source_ShooterStarter_A_Gun_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_A_Gun_h_12_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_A_Gun_h_12_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_A_Gun_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_A_Gun_h_12_INCLASS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_A_Gun_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERSTARTER_API UClass* StaticClass<class AA_Gun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterStarter_Source_ShooterStarter_A_Gun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
