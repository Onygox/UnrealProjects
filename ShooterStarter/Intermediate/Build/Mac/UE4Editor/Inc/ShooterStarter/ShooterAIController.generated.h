// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERSTARTER_ShooterAIController_generated_h
#error "ShooterAIController.generated.h already included, missing '#pragma once' in ShooterAIController.h"
#endif
#define SHOOTERSTARTER_ShooterAIController_generated_h

#define ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_SPARSE_DATA
#define ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_RPC_WRAPPERS
#define ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterAIController(); \
	friend struct Z_Construct_UClass_AShooterAIController_Statics; \
public: \
	DECLARE_CLASS(AShooterAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(AShooterAIController)


#define ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShooterAIController(); \
	friend struct Z_Construct_UClass_AShooterAIController_Statics; \
public: \
	DECLARE_CLASS(AShooterAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(AShooterAIController)


#define ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterAIController(AShooterAIController&&); \
	NO_API AShooterAIController(const AShooterAIController&); \
public:


#define ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterAIController(AShooterAIController&&); \
	NO_API AShooterAIController(const AShooterAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterAIController)


#define ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AcceptanceRadius() { return STRUCT_OFFSET(AShooterAIController, AcceptanceRadius); }


#define ShooterStarter_Source_ShooterStarter_ShooterAIController_h_12_PROLOG
#define ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_RPC_WRAPPERS \
	ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_INCLASS \
	ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_INCLASS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_ShooterAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERSTARTER_API UClass* StaticClass<class AShooterAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterStarter_Source_ShooterStarter_ShooterAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS