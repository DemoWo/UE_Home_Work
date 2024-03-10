// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKE_BP_PlayerPawn_generated_h
#error "BP_PlayerPawn.generated.h already included, missing '#pragma once' in BP_PlayerPawn.h"
#endif
#define SNAKE_BP_PlayerPawn_generated_h

#define Snake_Source_Snake_BP_PlayerPawn_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandlePlayerHorizontalInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePlayerHorizontalInput(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandlePlayerVerticalInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePlayerVerticalInput(Z_Param_value); \
		P_NATIVE_END; \
	}


#define Snake_Source_Snake_BP_PlayerPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePlayerHorizontalInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePlayerHorizontalInput(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandlePlayerVerticalInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePlayerVerticalInput(Z_Param_value); \
		P_NATIVE_END; \
	}


#define Snake_Source_Snake_BP_PlayerPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_PlayerPawn(); \
	friend struct Z_Construct_UClass_ABP_PlayerPawn_Statics; \
public: \
	DECLARE_CLASS(ABP_PlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Snake"), NO_API) \
	DECLARE_SERIALIZER(ABP_PlayerPawn)


#define Snake_Source_Snake_BP_PlayerPawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABP_PlayerPawn(); \
	friend struct Z_Construct_UClass_ABP_PlayerPawn_Statics; \
public: \
	DECLARE_CLASS(ABP_PlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Snake"), NO_API) \
	DECLARE_SERIALIZER(ABP_PlayerPawn)


#define Snake_Source_Snake_BP_PlayerPawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_PlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_PlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_PlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_PlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_PlayerPawn(ABP_PlayerPawn&&); \
	NO_API ABP_PlayerPawn(const ABP_PlayerPawn&); \
public:


#define Snake_Source_Snake_BP_PlayerPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_PlayerPawn(ABP_PlayerPawn&&); \
	NO_API ABP_PlayerPawn(const ABP_PlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_PlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_PlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABP_PlayerPawn)


#define Snake_Source_Snake_BP_PlayerPawn_h_15_PRIVATE_PROPERTY_OFFSET
#define Snake_Source_Snake_BP_PlayerPawn_h_12_PROLOG
#define Snake_Source_Snake_BP_PlayerPawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Snake_Source_Snake_BP_PlayerPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	Snake_Source_Snake_BP_PlayerPawn_h_15_RPC_WRAPPERS \
	Snake_Source_Snake_BP_PlayerPawn_h_15_INCLASS \
	Snake_Source_Snake_BP_PlayerPawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Snake_Source_Snake_BP_PlayerPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Snake_Source_Snake_BP_PlayerPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	Snake_Source_Snake_BP_PlayerPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Snake_Source_Snake_BP_PlayerPawn_h_15_INCLASS_NO_PURE_DECLS \
	Snake_Source_Snake_BP_PlayerPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKE_API UClass* StaticClass<class ABP_PlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Snake_Source_Snake_BP_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
