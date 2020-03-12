// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Teste/TesteGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTesteGameMode() {}
// Cross Module References
	TESTE_API UClass* Z_Construct_UClass_ATesteGameMode_NoRegister();
	TESTE_API UClass* Z_Construct_UClass_ATesteGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Teste();
// End Cross Module References
	void ATesteGameMode::StaticRegisterNativesATesteGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATesteGameMode_NoRegister()
	{
		return ATesteGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATesteGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATesteGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Teste,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATesteGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TesteGameMode.h" },
		{ "ModuleRelativePath", "TesteGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATesteGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATesteGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATesteGameMode_Statics::ClassParams = {
		&ATesteGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATesteGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATesteGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATesteGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATesteGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATesteGameMode, 1581368684);
	template<> TESTE_API UClass* StaticClass<ATesteGameMode>()
	{
		return ATesteGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATesteGameMode(Z_Construct_UClass_ATesteGameMode, &ATesteGameMode::StaticClass, TEXT("/Script/Teste"), TEXT("ATesteGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATesteGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
