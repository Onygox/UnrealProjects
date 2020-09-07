// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERSTARTER_ShooterStarterPlayerController_generated_h
#error "ShooterStarterPlayerController.generated.h already included, missing '#pragma once' in ShooterStarterPlayerController.h"
#endif
#define SHOOTERSTARTER_ShooterStarterPlayerController_generated_h

#define ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_SPARSE_DATA
#define ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_RPC_WRAPPERS
#define ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterStarterPlayerController(); \
	friend struct Z_Construct_UClass_AShooterStarterPlayerController_Statics; \
public: \
	DECLARE_CLASS(AShooterStarterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(AShooterStarterPlayerController)


#define ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShooterStarterPlayerController(); \
	friend struct Z_Construct_UClass_AShooterStarterPlayerController_Statics; \
public: \
	DECLARE_CLASS(AShooterStarterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(AShooterStarterPlayerController)


#define ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterStarterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterStarterPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterStarterPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterStarterPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterStarterPlayerController(AShooterStarterPlayerController&&); \
	NO_API AShooterStarterPlayerController(const AShooterStarterPlayerController&); \
public:


#define ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterStarterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterStarterPlayerController(AShooterStarterPlayerController&&); \
	NO_API AShooterStarterPlayerController(const AShooterStarterPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterStarterPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterStarterPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterStarterPlayerController)


#define ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoseScreenClass() { return STRUCT_OFFSET(AShooterStarterPlayerController, LoseScreenClass); } \
	FORCEINLINE static uint32 __PPO__RestartDelay() { return STRUCT_OFFSET(AShooterStarterPlayerController, RestartDelay); }


#define ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_12_PROLOG
#define ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_RPC_WRAPPERS \
	ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_INCLASS \
	ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERSTARTER_API UClass* StaticClass<class AShooterStarterPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterStarter_Source_ShooterStarter_ShooterStarterPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
