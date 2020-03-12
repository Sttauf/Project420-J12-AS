// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TESTE_TestePawn_generated_h
#error "TestePawn.generated.h already included, missing '#pragma once' in TestePawn.h"
#endif
#define TESTE_TestePawn_generated_h

#define Teste_Source_Teste_TestePawn_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_PlayerActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_PlayerActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Teste_Source_Teste_TestePawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_PlayerActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_PlayerActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Teste_Source_Teste_TestePawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestePawn(); \
	friend struct Z_Construct_UClass_ATestePawn_Statics; \
public: \
	DECLARE_CLASS(ATestePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Teste"), NO_API) \
	DECLARE_SERIALIZER(ATestePawn)


#define Teste_Source_Teste_TestePawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATestePawn(); \
	friend struct Z_Construct_UClass_ATestePawn_Statics; \
public: \
	DECLARE_CLASS(ATestePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Teste"), NO_API) \
	DECLARE_SERIALIZER(ATestePawn)


#define Teste_Source_Teste_TestePawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestePawn(ATestePawn&&); \
	NO_API ATestePawn(const ATestePawn&); \
public:


#define Teste_Source_Teste_TestePawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestePawn(ATestePawn&&); \
	NO_API ATestePawn(const ATestePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestePawn)


#define Teste_Source_Teste_TestePawn_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(ATestePawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ATestePawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATestePawn, CameraBoom); }


#define Teste_Source_Teste_TestePawn_h_10_PROLOG
#define Teste_Source_Teste_TestePawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Teste_Source_Teste_TestePawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Teste_Source_Teste_TestePawn_h_13_RPC_WRAPPERS \
	Teste_Source_Teste_TestePawn_h_13_INCLASS \
	Teste_Source_Teste_TestePawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Teste_Source_Teste_TestePawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Teste_Source_Teste_TestePawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Teste_Source_Teste_TestePawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Teste_Source_Teste_TestePawn_h_13_INCLASS_NO_PURE_DECLS \
	Teste_Source_Teste_TestePawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTE_API UClass* StaticClass<class ATestePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Teste_Source_Teste_TestePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
