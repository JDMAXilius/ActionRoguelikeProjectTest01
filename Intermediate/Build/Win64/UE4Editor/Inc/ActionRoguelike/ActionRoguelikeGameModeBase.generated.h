// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnvQueryInstanceBlueprintWrapper;
#ifdef ACTIONROGUELIKE_ActionRoguelikeGameModeBase_generated_h
#error "ActionRoguelikeGameModeBase.generated.h already included, missing '#pragma once' in ActionRoguelikeGameModeBase.h"
#endif
#define ACTIONROGUELIKE_ActionRoguelikeGameModeBase_generated_h

#define ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_SPARSE_DATA
#define ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBotSpawnQueryCompleted); \
	DECLARE_FUNCTION(execSpawnBotTimerElapsed);


#define ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBotSpawnQueryCompleted); \
	DECLARE_FUNCTION(execSpawnBotTimerElapsed);


#define ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActionRoguelikeGameModeBase(); \
	friend struct Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AActionRoguelikeGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(AActionRoguelikeGameModeBase)


#define ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAActionRoguelikeGameModeBase(); \
	friend struct Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AActionRoguelikeGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRoguelike"), NO_API) \
	DECLARE_SERIALIZER(AActionRoguelikeGameModeBase)


#define ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActionRoguelikeGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActionRoguelikeGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActionRoguelikeGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActionRoguelikeGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActionRoguelikeGameModeBase(AActionRoguelikeGameModeBase&&); \
	NO_API AActionRoguelikeGameModeBase(const AActionRoguelikeGameModeBase&); \
public:


#define ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActionRoguelikeGameModeBase(AActionRoguelikeGameModeBase&&); \
	NO_API AActionRoguelikeGameModeBase(const AActionRoguelikeGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActionRoguelikeGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActionRoguelikeGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActionRoguelikeGameModeBase)


#define ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinionClass() { return STRUCT_OFFSET(AActionRoguelikeGameModeBase, MinionClass); } \
	FORCEINLINE static uint32 __PPO__SpawnBotQuery() { return STRUCT_OFFSET(AActionRoguelikeGameModeBase, SpawnBotQuery); } \
	FORCEINLINE static uint32 __PPO__SpawnTimerInterval() { return STRUCT_OFFSET(AActionRoguelikeGameModeBase, SpawnTimerInterval); }


#define ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_18_PROLOG
#define ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_RPC_WRAPPERS \
	ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_INCLASS \
	ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_PRIVATE_PROPERTY_OFFSET \
	ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_SPARSE_DATA \
	ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_INCLASS_NO_PURE_DECLS \
	ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class AActionRoguelikeGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
