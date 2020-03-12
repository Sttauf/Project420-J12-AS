// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project420J12AS/Project420J12ASGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject420J12ASGameMode() {}
// Cross Module References
	PROJECT420J12AS_API UClass* Z_Construct_UClass_AProject420J12ASGameMode_NoRegister();
	PROJECT420J12AS_API UClass* Z_Construct_UClass_AProject420J12ASGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Project420J12AS();
// End Cross Module References
	void AProject420J12ASGameMode::StaticRegisterNativesAProject420J12ASGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProject420J12ASGameMode_NoRegister()
	{
		return AProject420J12ASGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProject420J12ASGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject420J12ASGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project420J12AS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject420J12ASGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Project420J12ASGameMode.h" },
		{ "ModuleRelativePath", "Project420J12ASGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject420J12ASGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject420J12ASGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProject420J12ASGameMode_Statics::ClassParams = {
		&AProject420J12ASGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProject420J12ASGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProject420J12ASGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProject420J12ASGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProject420J12ASGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProject420J12ASGameMode, 513772170);
	template<> PROJECT420J12AS_API UClass* StaticClass<AProject420J12ASGameMode>()
	{
		return AProject420J12ASGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject420J12ASGameMode(Z_Construct_UClass_AProject420J12ASGameMode, &AProject420J12ASGameMode::StaticClass, TEXT("/Script/Project420J12AS"), TEXT("AProject420J12ASGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject420J12ASGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
