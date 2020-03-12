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
#ifdef PROJECT420J12AS_Project420J12ASProjectile_generated_h
#error "Project420J12ASProjectile.generated.h already included, missing '#pragma once' in Project420J12ASProjectile.h"
#endif
#define PROJECT420J12AS_Project420J12ASProjectile_generated_h

#define Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_RPC_WRAPPERS \
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


#define Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProject420J12ASProjectile(); \
	friend struct Z_Construct_UClass_AProject420J12ASProjectile_Statics; \
public: \
	DECLARE_CLASS(AProject420J12ASProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project420J12AS"), NO_API) \
	DECLARE_SERIALIZER(AProject420J12ASProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProject420J12ASProjectile(); \
	friend struct Z_Construct_UClass_AProject420J12ASProjectile_Statics; \
public: \
	DECLARE_CLASS(AProject420J12ASProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project420J12AS"), NO_API) \
	DECLARE_SERIALIZER(AProject420J12ASProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProject420J12ASProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProject420J12ASProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject420J12ASProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject420J12ASProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProject420J12ASProjectile(AProject420J12ASProjectile&&); \
	NO_API AProject420J12ASProjectile(const AProject420J12ASProjectile&); \
public:


#define Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProject420J12ASProjectile(AProject420J12ASProjectile&&); \
	NO_API AProject420J12ASProjectile(const AProject420J12ASProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject420J12ASProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject420J12ASProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProject420J12ASProjectile)


#define Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AProject420J12ASProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AProject420J12ASProjectile, ProjectileMovement); }


#define Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_12_PROLOG
#define Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_RPC_WRAPPERS \
	Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_INCLASS \
	Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT420J12AS_API UClass* StaticClass<class AProject420J12ASProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project420J12AS_Source_Project420J12AS_Project420J12ASProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
