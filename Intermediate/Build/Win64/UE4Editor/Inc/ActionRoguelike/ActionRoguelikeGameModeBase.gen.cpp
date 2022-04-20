// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/ActionRoguelikeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionRoguelikeGameModeBase() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_AActionRoguelikeGameModeBase_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_AActionRoguelikeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AActionRoguelikeGameModeBase::execOnBotSpawnQueryCompleted)
	{
		P_GET_OBJECT(UEnvQueryInstanceBlueprintWrapper,Z_Param_QueryInstance);
		P_GET_PROPERTY(FByteProperty,Z_Param_QueryStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBotSpawnQueryCompleted(Z_Param_QueryInstance,EEnvQueryStatus::Type(Z_Param_QueryStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActionRoguelikeGameModeBase::execSpawnBotTimerElapsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBotTimerElapsed();
		P_NATIVE_END;
	}
	void AActionRoguelikeGameModeBase::StaticRegisterNativesAActionRoguelikeGameModeBase()
	{
		UClass* Class = AActionRoguelikeGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBotSpawnQueryCompleted", &AActionRoguelikeGameModeBase::execOnBotSpawnQueryCompleted },
			{ "SpawnBotTimerElapsed", &AActionRoguelikeGameModeBase::execSpawnBotTimerElapsed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics
	{
		struct ActionRoguelikeGameModeBase_eventOnBotSpawnQueryCompleted_Parms
		{
			UEnvQueryInstanceBlueprintWrapper* QueryInstance;
			TEnumAsByte<EEnvQueryStatus::Type> QueryStatus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryInstance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics::NewProp_QueryInstance = { "QueryInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionRoguelikeGameModeBase_eventOnBotSpawnQueryCompleted_Parms, QueryInstance), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics::NewProp_QueryStatus = { "QueryStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionRoguelikeGameModeBase_eventOnBotSpawnQueryCompleted_Parms, QueryStatus), Z_Construct_UEnum_AIModule_EEnvQueryStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics::NewProp_QueryInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics::NewProp_QueryStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionRoguelikeGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActionRoguelikeGameModeBase, nullptr, "OnBotSpawnQueryCompleted", nullptr, nullptr, sizeof(ActionRoguelikeGameModeBase_eventOnBotSpawnQueryCompleted_Parms), Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActionRoguelikeGameModeBase_SpawnBotTimerElapsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActionRoguelikeGameModeBase_SpawnBotTimerElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionRoguelikeGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActionRoguelikeGameModeBase_SpawnBotTimerElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActionRoguelikeGameModeBase, nullptr, "SpawnBotTimerElapsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActionRoguelikeGameModeBase_SpawnBotTimerElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActionRoguelikeGameModeBase_SpawnBotTimerElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActionRoguelikeGameModeBase_SpawnBotTimerElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActionRoguelikeGameModeBase_SpawnBotTimerElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AActionRoguelikeGameModeBase_NoRegister()
	{
		return AActionRoguelikeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MinionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBotQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnBotQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTimerInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnTimerInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AActionRoguelikeGameModeBase_OnBotSpawnQueryCompleted, "OnBotSpawnQueryCompleted" }, // 2442684983
		{ &Z_Construct_UFunction_AActionRoguelikeGameModeBase_SpawnBotTimerElapsed, "SpawnBotTimerElapsed" }, // 699886493
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ActionRoguelikeGameModeBase.h" },
		{ "ModuleRelativePath", "ActionRoguelikeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_MinionClass_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "ActionRoguelikeGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_MinionClass = { "MinionClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActionRoguelikeGameModeBase, MinionClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_MinionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_MinionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_SpawnBotQuery_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "ActionRoguelikeGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_SpawnBotQuery = { "SpawnBotQuery", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActionRoguelikeGameModeBase, SpawnBotQuery), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_SpawnBotQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_SpawnBotQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_SpawnTimerInterval_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "ActionRoguelikeGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_SpawnTimerInterval = { "SpawnTimerInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActionRoguelikeGameModeBase, SpawnTimerInterval), METADATA_PARAMS(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_SpawnTimerInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_SpawnTimerInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_MinionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_SpawnBotQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::NewProp_SpawnTimerInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionRoguelikeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::ClassParams = {
		&AActionRoguelikeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActionRoguelikeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActionRoguelikeGameModeBase, 1131610571);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<AActionRoguelikeGameModeBase>()
	{
		return AActionRoguelikeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActionRoguelikeGameModeBase(Z_Construct_UClass_AActionRoguelikeGameModeBase, &AActionRoguelikeGameModeBase::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("AActionRoguelikeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionRoguelikeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
