// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTE_TesteGameMode_generated_h
#error "TesteGameMode.generated.h already included, missing '#pragma once' in TesteGameMode.h"
#endif
#define TESTE_TesteGameMode_generated_h

#define Teste_Source_Teste_TesteGameMode_h_12_RPC_WRAPPERS
#define Teste_Source_Teste_TesteGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Teste_Source_Teste_TesteGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATesteGameMode(); \
	friend struct Z_Construct_UClass_ATesteGameMode_Statics; \
public: \
	DECLARE_CLASS(ATesteGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Teste"), TESTE_API) \
	DECLARE_SERIALIZER(ATesteGameMode)


#define Teste_Source_Teste_TesteGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATesteGameMode(); \
	friend struct Z_Construct_UClass_ATesteGameMode_Statics; \
public: \
	DECLARE_CLASS(ATesteGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Teste"), TESTE_API) \
	DECLARE_SERIALIZER(ATesteGameMode)


#define Teste_Source_Teste_TesteGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TESTE_API ATesteGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATesteGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTE_API, ATesteGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATesteGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTE_API ATesteGameMode(ATesteGameMode&&); \
	TESTE_API ATesteGameMode(const ATesteGameMode&); \
public:


#define Teste_Source_Teste_TesteGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTE_API ATesteGameMode(ATesteGameMode&&); \
	TESTE_API ATesteGameMode(const ATesteGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTE_API, ATesteGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATesteGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATesteGameMode)


#define Teste_Source_Teste_TesteGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Teste_Source_Teste_TesteGameMode_h_9_PROLOG
#define Teste_Source_Teste_TesteGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Teste_Source_Teste_TesteGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Teste_Source_Teste_TesteGameMode_h_12_RPC_WRAPPERS \
	Teste_Source_Teste_TesteGameMode_h_12_INCLASS \
	Teste_Source_Teste_TesteGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Teste_Source_Teste_TesteGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Teste_Source_Teste_TesteGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Teste_Source_Teste_TesteGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Teste_Source_Teste_TesteGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Teste_Source_Teste_TesteGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTE_API UClass* StaticClass<class ATesteGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Teste_Source_Teste_TesteGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
