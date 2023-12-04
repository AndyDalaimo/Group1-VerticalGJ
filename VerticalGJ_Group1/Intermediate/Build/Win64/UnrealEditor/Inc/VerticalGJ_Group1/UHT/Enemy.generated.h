// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERTICALGJ_GROUP1_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define VERTICALGJ_GROUP1_Enemy_generated_h

#define FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnemyProperties_Statics; \
	VERTICALGJ_GROUP1_API static class UScriptStruct* StaticStruct();


template<> VERTICALGJ_GROUP1_API UScriptStruct* StaticStruct<struct FEnemyProperties>();

#define FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_SPARSE_DATA
#define FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_RPC_WRAPPERS
#define FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_ACCESSORS
#define FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VerticalGJ_Group1"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VerticalGJ_Group1"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	NO_API virtual ~AEnemy();


#define FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy) \
	NO_API virtual ~AEnemy();


#define FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_53_PROLOG
#define FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_SPARSE_DATA \
	FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_RPC_WRAPPERS \
	FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_ACCESSORS \
	FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_INCLASS \
	FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_SPARSE_DATA \
	FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_ACCESSORS \
	FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_INCLASS_NO_PURE_DECLS \
	FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERTICALGJ_GROUP1_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h


#define FOREACH_ENUM_EENEMYTYPE(op) \
	op(EEnemyType::SMALL) \
	op(EEnemyType::MEDIUM) \
	op(EEnemyType::LARGE) \
	op(EEnemyType::FLYING) 

enum class EEnemyType : uint8;
template<> struct TIsUEnumClass<EEnemyType> { enum { Value = true }; };
template<> VERTICALGJ_GROUP1_API UEnum* StaticEnum<EEnemyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
