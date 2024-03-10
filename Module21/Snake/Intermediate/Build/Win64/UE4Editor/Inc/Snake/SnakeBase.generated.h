// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASnakeElementBase;
class AActor;
#ifdef SNAKE_SnakeBase_generated_h
#error "SnakeBase.generated.h already included, missing '#pragma once' in SnakeBase.h"
#endif
#define SNAKE_SnakeBase_generated_h

#define Snake_Source_Snake_SnakeBase_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSnakeElementOverlapElement) \
	{ \
		P_GET_OBJECT(ASnakeElementBase,Z_Param_OvelappedElement); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SnakeElementOverlapElement(Z_Param_OvelappedElement,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Move(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSnakeElement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementsNum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSnakeElement(Z_Param_ElementsNum); \
		P_NATIVE_END; \
	}


#define Snake_Source_Snake_SnakeBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSnakeElementOverlapElement) \
	{ \
		P_GET_OBJECT(ASnakeElementBase,Z_Param_OvelappedElement); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SnakeElementOverlapElement(Z_Param_OvelappedElement,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Move(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSnakeElement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementsNum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSnakeElement(Z_Param_ElementsNum); \
		P_NATIVE_END; \
	}


#define Snake_Source_Snake_SnakeBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeBase(); \
	friend struct Z_Construct_UClass_ASnakeBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Snake"), NO_API) \
	DECLARE_SERIALIZER(ASnakeBase)


#define Snake_Source_Snake_SnakeBase_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASnakeBase(); \
	friend struct Z_Construct_UClass_ASnakeBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Snake"), NO_API) \
	DECLARE_SERIALIZER(ASnakeBase)


#define Snake_Source_Snake_SnakeBase_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeBase(ASnakeBase&&); \
	NO_API ASnakeBase(const ASnakeBase&); \
public:


#define Snake_Source_Snake_SnakeBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeBase(ASnakeBase&&); \
	NO_API ASnakeBase(const ASnakeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeBase)


#define Snake_Source_Snake_SnakeBase_h_23_PRIVATE_PROPERTY_OFFSET
#define Snake_Source_Snake_SnakeBase_h_20_PROLOG
#define Snake_Source_Snake_SnakeBase_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Snake_Source_Snake_SnakeBase_h_23_PRIVATE_PROPERTY_OFFSET \
	Snake_Source_Snake_SnakeBase_h_23_RPC_WRAPPERS \
	Snake_Source_Snake_SnakeBase_h_23_INCLASS \
	Snake_Source_Snake_SnakeBase_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Snake_Source_Snake_SnakeBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Snake_Source_Snake_SnakeBase_h_23_PRIVATE_PROPERTY_OFFSET \
	Snake_Source_Snake_SnakeBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Snake_Source_Snake_SnakeBase_h_23_INCLASS_NO_PURE_DECLS \
	Snake_Source_Snake_SnakeBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKE_API UClass* StaticClass<class ASnakeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Snake_Source_Snake_SnakeBase_h


#define FOREACH_ENUM_EMOVEMENTDIRECTION(op) \
	op(EMovementDirection::UP) \
	op(EMovementDirection::DOWN) \
	op(EMovementDirection::LEFT) \
	op(EMovementDirection::RIGHT) 

enum class EMovementDirection;
template<> SNAKE_API UEnum* StaticEnum<EMovementDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
