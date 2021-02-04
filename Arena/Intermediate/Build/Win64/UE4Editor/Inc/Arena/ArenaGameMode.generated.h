// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENA_ArenaGameMode_generated_h
#error "ArenaGameMode.generated.h already included, missing '#pragma once' in ArenaGameMode.h"
#endif
#define ARENA_ArenaGameMode_generated_h

#define Arena_Source_Arena_ArenaGameMode_h_12_SPARSE_DATA
#define Arena_Source_Arena_ArenaGameMode_h_12_RPC_WRAPPERS
#define Arena_Source_Arena_ArenaGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Arena_Source_Arena_ArenaGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArenaGameMode(); \
	friend struct Z_Construct_UClass_AArenaGameMode_Statics; \
public: \
	DECLARE_CLASS(AArenaGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arena"), ARENA_API) \
	DECLARE_SERIALIZER(AArenaGameMode)


#define Arena_Source_Arena_ArenaGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAArenaGameMode(); \
	friend struct Z_Construct_UClass_AArenaGameMode_Statics; \
public: \
	DECLARE_CLASS(AArenaGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arena"), ARENA_API) \
	DECLARE_SERIALIZER(AArenaGameMode)


#define Arena_Source_Arena_ArenaGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARENA_API AArenaGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARENA_API, AArenaGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARENA_API AArenaGameMode(AArenaGameMode&&); \
	ARENA_API AArenaGameMode(const AArenaGameMode&); \
public:


#define Arena_Source_Arena_ArenaGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARENA_API AArenaGameMode(AArenaGameMode&&); \
	ARENA_API AArenaGameMode(const AArenaGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARENA_API, AArenaGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArenaGameMode)


#define Arena_Source_Arena_ArenaGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Arena_Source_Arena_ArenaGameMode_h_9_PROLOG
#define Arena_Source_Arena_ArenaGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arena_Source_Arena_ArenaGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Arena_Source_Arena_ArenaGameMode_h_12_SPARSE_DATA \
	Arena_Source_Arena_ArenaGameMode_h_12_RPC_WRAPPERS \
	Arena_Source_Arena_ArenaGameMode_h_12_INCLASS \
	Arena_Source_Arena_ArenaGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arena_Source_Arena_ArenaGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arena_Source_Arena_ArenaGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Arena_Source_Arena_ArenaGameMode_h_12_SPARSE_DATA \
	Arena_Source_Arena_ArenaGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Arena_Source_Arena_ArenaGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Arena_Source_Arena_ArenaGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class AArenaGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arena_Source_Arena_ArenaGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
