// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snake/SnakeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeBase() {}
// Cross Module References
	SNAKE_API UEnum* Z_Construct_UEnum_Snake_EMovementDirection();
	UPackage* Z_Construct_UPackage__Script_Snake();
	SNAKE_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	SNAKE_API UClass* Z_Construct_UClass_ASnakeBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SNAKE_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EMovementDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Snake_EMovementDirection, Z_Construct_UPackage__Script_Snake(), TEXT("EMovementDirection"));
		}
		return Singleton;
	}
	template<> SNAKE_API UEnum* StaticEnum<EMovementDirection>()
	{
		return EMovementDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementDirection(EMovementDirection_StaticEnum, TEXT("/Script/Snake"), TEXT("EMovementDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Snake_EMovementDirection_Hash() { return 822684428U; }
	UEnum* Z_Construct_UEnum_Snake_EMovementDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Snake();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementDirection"), 0, Get_Z_Construct_UEnum_Snake_EMovementDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementDirection::UP", (int64)EMovementDirection::UP },
				{ "EMovementDirection::DOWN", (int64)EMovementDirection::DOWN },
				{ "EMovementDirection::LEFT", (int64)EMovementDirection::LEFT },
				{ "EMovementDirection::RIGHT", (int64)EMovementDirection::RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "SnakeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Snake,
				nullptr,
				"EMovementDirection",
				"EMovementDirection",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ASnakeBase::StaticRegisterNativesASnakeBase()
	{
	}
	UClass* Z_Construct_UClass_ASnakeBase_NoRegister()
	{
		return ASnakeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMoveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastMoveDirection;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LastMoveDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnakeElement;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnakeElement_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElementSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeElementClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnakeElementClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Snake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SnakeBase.h" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection_MetaData[] = {
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection = { "LastMoveDirection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, LastMoveDirection), Z_Construct_UEnum_Snake_EMovementDirection, METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElement_MetaData[] = {
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElement = { "SnakeElement", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, SnakeElement), METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElement_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElement_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElement_Inner = { "SnakeElement", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASnakeElementBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "SnakeBase" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_MovementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize_MetaData[] = {
		{ "Category", "SnakeBase" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize = { "ElementSize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, ElementSize), METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass_MetaData[] = {
		{ "Category", "SnakeBase" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass = { "SnakeElementClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, SnakeElementClass), Z_Construct_UClass_ASnakeElementBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElement_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnakeBase_Statics::ClassParams = {
		&ASnakeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASnakeBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnakeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnakeBase, 496921424);
	template<> SNAKE_API UClass* StaticClass<ASnakeBase>()
	{
		return ASnakeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnakeBase(Z_Construct_UClass_ASnakeBase, &ASnakeBase::StaticClass, TEXT("/Script/Snake"), TEXT("ASnakeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
