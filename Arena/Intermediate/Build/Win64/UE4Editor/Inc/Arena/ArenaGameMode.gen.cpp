// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arena/ArenaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaGameMode() {}
// Cross Module References
	ARENA_API UClass* Z_Construct_UClass_AArenaGameMode_NoRegister();
	ARENA_API UClass* Z_Construct_UClass_AArenaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Arena();
// End Cross Module References
	void AArenaGameMode::StaticRegisterNativesAArenaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AArenaGameMode_NoRegister()
	{
		return AArenaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AArenaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArenaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arena,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ArenaGameMode.h" },
		{ "ModuleRelativePath", "ArenaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArenaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArenaGameMode_Statics::ClassParams = {
		&AArenaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AArenaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArenaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArenaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArenaGameMode, 2086239051);
	template<> ARENA_API UClass* StaticClass<AArenaGameMode>()
	{
		return AArenaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArenaGameMode(Z_Construct_UClass_AArenaGameMode, &AArenaGameMode::StaticClass, TEXT("/Script/Arena"), TEXT("AArenaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArenaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
