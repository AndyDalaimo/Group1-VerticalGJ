// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VerticalGJ_Group1/VerticalGJ_Group1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVerticalGJ_Group1GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VerticalGJ_Group1();
	VERTICALGJ_GROUP1_API UClass* Z_Construct_UClass_AVerticalGJ_Group1GameMode();
	VERTICALGJ_GROUP1_API UClass* Z_Construct_UClass_AVerticalGJ_Group1GameMode_NoRegister();
// End Cross Module References
	void AVerticalGJ_Group1GameMode::StaticRegisterNativesAVerticalGJ_Group1GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVerticalGJ_Group1GameMode);
	UClass* Z_Construct_UClass_AVerticalGJ_Group1GameMode_NoRegister()
	{
		return AVerticalGJ_Group1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AVerticalGJ_Group1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVerticalGJ_Group1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VerticalGJ_Group1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalGJ_Group1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VerticalGJ_Group1GameMode.h" },
		{ "ModuleRelativePath", "VerticalGJ_Group1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVerticalGJ_Group1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVerticalGJ_Group1GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVerticalGJ_Group1GameMode_Statics::ClassParams = {
		&AVerticalGJ_Group1GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVerticalGJ_Group1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalGJ_Group1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVerticalGJ_Group1GameMode()
	{
		if (!Z_Registration_Info_UClass_AVerticalGJ_Group1GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVerticalGJ_Group1GameMode.OuterSingleton, Z_Construct_UClass_AVerticalGJ_Group1GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVerticalGJ_Group1GameMode.OuterSingleton;
	}
	template<> VERTICALGJ_GROUP1_API UClass* StaticClass<AVerticalGJ_Group1GameMode>()
	{
		return AVerticalGJ_Group1GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVerticalGJ_Group1GameMode);
	AVerticalGJ_Group1GameMode::~AVerticalGJ_Group1GameMode() {}
	struct Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_VerticalGJ_Group1GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_VerticalGJ_Group1GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVerticalGJ_Group1GameMode, AVerticalGJ_Group1GameMode::StaticClass, TEXT("AVerticalGJ_Group1GameMode"), &Z_Registration_Info_UClass_AVerticalGJ_Group1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVerticalGJ_Group1GameMode), 1180679708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_VerticalGJ_Group1GameMode_h_856452778(TEXT("/Script/VerticalGJ_Group1"),
		Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_VerticalGJ_Group1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VerticalGJ_Group1_Source_VerticalGJ_Group1_VerticalGJ_Group1GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
