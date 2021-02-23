// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENA_ArenaCharacter_generated_h
#error "ArenaCharacter.generated.h already included, missing '#pragma once' in ArenaCharacter.h"
#endif
#define ARENA_ArenaCharacter_generated_h

#define Arena_Source_Arena_ArenaCharacter_h_15_SPARSE_DATA
#define Arena_Source_Arena_ArenaCharacter_h_15_RPC_WRAPPERS
#define Arena_Source_Arena_ArenaCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Arena_Source_Arena_ArenaCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArenaCharacter(); \
	friend struct Z_Construct_UClass_AArenaCharacter_Statics; \
public: \
	DECLARE_CLASS(AArenaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(AArenaCharacter)


#define Arena_Source_Arena_ArenaCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAArenaCharacter(); \
	friend struct Z_Construct_UClass_AArenaCharacter_Statics; \
public: \
	DECLARE_CLASS(AArenaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arena"), NO_API) \
	DECLARE_SERIALIZER(AArenaCharacter)


#define Arena_Source_Arena_ArenaCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArenaCharacter(AArenaCharacter&&); \
	NO_API AArenaCharacter(const AArenaCharacter&); \
public:


#define Arena_Source_Arena_ArenaCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArenaCharacter(AArenaCharacter&&); \
	NO_API AArenaCharacter(const AArenaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArenaCharacter)


#define Arena_Source_Arena_ArenaCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AArenaCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AArenaCharacter, FollowCamera); }


#define Arena_Source_Arena_ArenaCharacter_h_12_PROLOG
#define Arena_Source_Arena_ArenaCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arena_Source_Arena_ArenaCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Arena_Source_Arena_ArenaCharacter_h_15_SPARSE_DATA \
	Arena_Source_Arena_ArenaCharacter_h_15_RPC_WRAPPERS \
	Arena_Source_Arena_ArenaCharacter_h_15_INCLASS \
	Arena_Source_Arena_ArenaCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arena_Source_Arena_ArenaCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arena_Source_Arena_ArenaCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Arena_Source_Arena_ArenaCharacter_h_15_SPARSE_DATA \
	Arena_Source_Arena_ArenaCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Arena_Source_Arena_ArenaCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Arena_Source_Arena_ArenaCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENA_API UClass* StaticClass<class AArenaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arena_Source_Arena_ArenaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
