// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VerticalGJ_Group1/Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VerticalGJ_Group1();
	VERTICALGJ_GROUP1_API UClass* Z_Construct_UClass_AEnemy();
	VERTICALGJ_GROUP1_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	VERTICALGJ_GROUP1_API UEnum* Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType();
	VERTICALGJ_GROUP1_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyProperties();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyType;
	static UEnum* EEnemyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType, (UObject*)Z_Construct_UPackage__Script_VerticalGJ_Group1(), TEXT("EEnemyType"));
		}
		return Z_Registration_Info_UEnum_EEnemyType.OuterSingleton;
	}
	template<> VERTICALGJ_GROUP1_API UEnum* StaticEnum<EEnemyType>()
	{
		return EEnemyType_StaticEnum();
	}
	struct Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType_Statics::Enumerators[] = {
		{ "EEnemyType::SMALL", (int64)EEnemyType::SMALL },
		{ "EEnemyType::MEDIUM", (int64)EEnemyType::MEDIUM },
		{ "EEnemyType::LARGE", (int64)EEnemyType::LARGE },
		{ "EEnemyType::FLYING", (int64)EEnemyType::FLYING },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Enum for defining different enemy Types\n" },
		{ "FLYING.DisplayName", "Flying" },
		{ "FLYING.Name", "EEnemyType::FLYING" },
		{ "LARGE.DisplayName", "Large" },
		{ "LARGE.Name", "EEnemyType::LARGE" },
		{ "MEDIUM.DisplayName", "Medium" },
		{ "MEDIUM.Name", "EEnemyType::MEDIUM" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "SMALL.DisplayName", "Small" },
		{ "SMALL.Name", "EEnemyType::SMALL" },
		{ "ToolTip", "Enum for defining different enemy Types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VerticalGJ_Group1,
		nullptr,
		"EEnemyType",
		"EEnemyType",
		Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType()
	{
		if (!Z_Registration_Info_UEnum_EEnemyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyType.InnerSingleton, Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnemyProperties;
class UScriptStruct* FEnemyProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnemyProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnemyProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyProperties, (UObject*)Z_Construct_UPackage__Script_VerticalGJ_Group1(), TEXT("EnemyProperties"));
	}
	return Z_Registration_Info_UScriptStruct_EnemyProperties.OuterSingleton;
}
template<> VERTICALGJ_GROUP1_API UScriptStruct* StaticStruct<FEnemyProperties>()
{
	return FEnemyProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnemyProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct to set properties for Each enemy type.\n// Properties will be set from initialize function\n" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "Struct to set properties for Each enemy type.\nProperties will be set from initialize function" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyProperties>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_type_MetaData[] = {
		{ "Category", "Enemy Struct" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnemyProperties, type), Z_Construct_UEnum_VerticalGJ_Group1_EEnemyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_type_MetaData)) }; // 1729794081
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "Enemy Struct" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnemyProperties, HP), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Enemy Struct" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnemyProperties, damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Enemy Struct" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnemyProperties, speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_speed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_HP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewProp_speed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VerticalGJ_Group1,
		nullptr,
		&NewStructOps,
		"EnemyProperties",
		sizeof(FEnemyProperties),
		alignof(FEnemyProperties),
		Z_Construct_UScriptStruct_FEnemyProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_EnemyProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnemyProperties.InnerSingleton, Z_Construct_UScriptStruct_FEnemyProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnemyProperties.InnerSingleton;
	}
	void AEnemy::StaticRegisterNativesAEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy);
	UClass* Z_Construct_UClass_AEnemy_NoRegister()
	{
		return AEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnemyProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VerticalGJ_Group1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy.h" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyProperties_MetaData[] = {
		{ "Category", "Enemy Properties" },
		{ "Comment", "// Struct holding all of the Enemy properties (HP, Damage, Speed, isFlying)\n" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "Struct holding all of the Enemy properties (HP, Damage, Speed, isFlying)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyProperties = { "EnemyProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemy, EnemyProperties), Z_Construct_UScriptStruct_FEnemyProperties, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyProperties_MetaData)) }; // 2783978694
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
		&AEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy()
	{
		if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
	}
	template<> VERTICALGJ_GROUP1_API UClass* StaticClass<AEnemy>()
	{
		return AEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
	AEnemy::~AEnemy() {}
	struct Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_Statics::EnumInfo[] = {
		{ EEnemyType_StaticEnum, TEXT("EEnemyType"), &Z_Registration_Info_UEnum_EEnemyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1729794081U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_Statics::ScriptStructInfo[] = {
		{ FEnemyProperties::StaticStruct, Z_Construct_UScriptStruct_FEnemyProperties_Statics::NewStructOps, TEXT("EnemyProperties"), &Z_Registration_Info_UScriptStruct_EnemyProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyProperties), 2783978694U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 3555859721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_831128681(TEXT("/Script/VerticalGJ_Group1"),
		Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_Enemy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
