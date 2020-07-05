// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONESCAPE_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define DUNGEONESCAPE_OpenDoor_generated_h

#define DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_SPARSE_DATA
#define DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_RPC_WRAPPERS
#define DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetYaw() { return STRUCT_OFFSET(UOpenDoor, TargetYaw); } \
	FORCEINLINE static uint32 __PPO__OpenActivator() { return STRUCT_OFFSET(UOpenDoor, OpenActivator); } \
	FORCEINLINE static uint32 __PPO__DoorCloseDelay() { return STRUCT_OFFSET(UOpenDoor, DoorCloseDelay); } \
	FORCEINLINE static uint32 __PPO__MassToOpenDoor() { return STRUCT_OFFSET(UOpenDoor, MassToOpenDoor); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(UOpenDoor, AudioComponent); }


#define DungeonEscape_Source_DungeonEscape_OpenDoor_h_11_PROLOG
#define DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_SPARSE_DATA \
	DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_RPC_WRAPPERS \
	DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_INCLASS \
	DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_SPARSE_DATA \
	DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_INCLASS_NO_PURE_DECLS \
	DungeonEscape_Source_DungeonEscape_OpenDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONESCAPE_API UClass* StaticClass<class UOpenDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DungeonEscape_Source_DungeonEscape_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
