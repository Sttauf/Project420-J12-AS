// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TESTE_TesteProjectile_generated_h
#error "TesteProjectile.generated.h already included, missing '#pragma once' in TesteProjectile.h"
#endif
#define TESTE_TesteProjectile_generated_h

#define Teste_Source_Teste_TesteProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Teste_Source_Teste_TesteProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Teste_Source_Teste_TesteProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATesteProjectile(); \
	friend struct Z_Construct_UClass_ATesteProjectile_Statics; \
public: \
	DECLARE_CLASS(ATesteProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Teste"), NO_API) \
	DECLARE_SERIALIZER(ATesteProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Teste_Source_Teste_TesteProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATesteProjectile(); \
	friend struct Z_Construct_UClass_ATesteProjectile_Statics; \
public: \
	DECLARE_CLASS(ATesteProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Teste"), NO_API) \
	DECLARE_SERIALIZER(ATesteProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Teste_Source_Teste_TesteProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATesteProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATesteProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATesteProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATesteProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATesteProjectile(ATesteProjectile&&); \
	NO_API ATesteProjectile(const ATesteProjectile&); \
public:


#define Teste_Source_Teste_TesteProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATesteProjectile(ATesteProjectile&&); \
	NO_API ATesteProjectile(const ATesteProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATesteProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATesteProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATesteProjectile)


#define Teste_Source_Teste_TesteProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ATesteProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATesteProjectile, ProjectileMovement); }


#define Teste_Source_Teste_TesteProjectile_h_12_PROLOG
#define Teste_Source_Teste_TesteProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Teste_Source_Teste_TesteProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Teste_Source_Teste_TesteProjectile_h_15_RPC_WRAPPERS \
	Teste_Source_Teste_TesteProjectile_h_15_INCLASS \
	Teste_Source_Teste_TesteProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Teste_Source_Teste_TesteProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Teste_Source_Teste_TesteProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Teste_Source_Teste_TesteProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Teste_Source_Teste_TesteProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Teste_Source_Teste_TesteProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTE_API UClass* StaticClass<class ATesteProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Teste_Source_Teste_TesteProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
