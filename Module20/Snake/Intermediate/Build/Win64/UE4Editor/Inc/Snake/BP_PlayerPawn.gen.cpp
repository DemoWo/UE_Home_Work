// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snake/BP_PlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_PlayerPawn() {}
// Cross Module References
	SNAKE_API UClass* Z_Construct_UClass_ABP_PlayerPawn_NoRegister();
	SNAKE_API UClass* Z_Construct_UClass_ABP_PlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Snake();
	SNAKE_API UFunction* Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput();
	SNAKE_API UFunction* Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SNAKE_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ABP_PlayerPawn::StaticRegisterNativesABP_PlayerPawn()
	{
		UClass* Class = ABP_PlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePlayerHorizontalInput", &ABP_PlayerPawn::execHandlePlayerHorizontalInput },
			{ "HandlePlayerVerticalInput", &ABP_PlayerPawn::execHandlePlayerVerticalInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput_Statics
	{
		struct BP_PlayerPawn_eventHandlePlayerHorizontalInput_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_PlayerPawn_eventHandlePlayerHorizontalInput_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BP_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PlayerPawn, nullptr, "HandlePlayerHorizontalInput", sizeof(BP_PlayerPawn_eventHandlePlayerHorizontalInput_Parms), Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput_Statics
	{
		struct BP_PlayerPawn_eventHandlePlayerVerticalInput_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_PlayerPawn_eventHandlePlayerVerticalInput_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BP_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PlayerPawn, nullptr, "HandlePlayerVerticalInput", sizeof(BP_PlayerPawn_eventHandlePlayerVerticalInput_Parms), Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_PlayerPawn_NoRegister()
	{
		return ABP_PlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_ABP_PlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnakeActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnakeActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_PlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Snake,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_PlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerHorizontalInput, "HandlePlayerHorizontalInput" }, // 3081015207
		{ &Z_Construct_UFunction_ABP_PlayerPawn_HandlePlayerVerticalInput, "HandlePlayerVerticalInput" }, // 550821299
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BP_PlayerPawn.h" },
		{ "ModuleRelativePath", "BP_PlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_SnakeActorClass_MetaData[] = {
		{ "Category", "BP_PlayerPawn" },
		{ "ModuleRelativePath", "BP_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_SnakeActorClass = { "SnakeActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerPawn, SnakeActorClass), Z_Construct_UClass_ASnakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_SnakeActorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_SnakeActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_SnakeActor_MetaData[] = {
		{ "Category", "BP_PlayerPawn" },
		{ "ModuleRelativePath", "BP_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_SnakeActor = { "SnakeActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerPawn, SnakeActor), Z_Construct_UClass_ASnakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_SnakeActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_SnakeActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_PawnCamera_MetaData[] = {
		{ "Category", "BP_PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BP_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_PawnCamera = { "PawnCamera", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerPawn, PawnCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_PawnCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_PawnCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_PlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_SnakeActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_SnakeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerPawn_Statics::NewProp_PawnCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_PlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_PlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_PlayerPawn_Statics::ClassParams = {
		&ABP_PlayerPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_PlayerPawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerPawn_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_PlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_PlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABP_PlayerPawn, 3917832754);
	template<> SNAKE_API UClass* StaticClass<ABP_PlayerPawn>()
	{
		return ABP_PlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_PlayerPawn(Z_Construct_UClass_ABP_PlayerPawn, &ABP_PlayerPawn::StaticClass, TEXT("/Script/Snake"), TEXT("ABP_PlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_PlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
