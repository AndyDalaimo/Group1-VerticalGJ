// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VerticalGJ_Group1/VerticalGJ_Group1Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVerticalGJ_Group1Character() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VerticalGJ_Group1();
	VERTICALGJ_GROUP1_API UClass* Z_Construct_UClass_AVerticalGJ_Group1Character();
	VERTICALGJ_GROUP1_API UClass* Z_Construct_UClass_AVerticalGJ_Group1Character_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVerticalGJ_Group1Character::execFire)
	{
		P_GET_STRUCT(FVector,Z_Param_Loc);
		P_GET_STRUCT(FRotator,Z_Param_Rot);
		P_GET_OBJECT(UClass,Z_Param_Spawning);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire(Z_Param_Loc,Z_Param_Rot,Z_Param_Spawning);
		P_NATIVE_END;
	}
	void AVerticalGJ_Group1Character::StaticRegisterNativesAVerticalGJ_Group1Character()
	{
		UClass* Class = AVerticalGJ_Group1Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AVerticalGJ_Group1Character::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics
	{
		struct VerticalGJ_Group1Character_eventFire_Parms
		{
			FVector Loc;
			FRotator Rot;
			UClass* Spawning;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Loc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rot;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Spawning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::NewProp_Loc = { "Loc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VerticalGJ_Group1Character_eventFire_Parms, Loc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::NewProp_Rot = { "Rot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VerticalGJ_Group1Character_eventFire_Parms, Rot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::NewProp_Spawning = { "Spawning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VerticalGJ_Group1Character_eventFire_Parms, Spawning), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::NewProp_Loc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::NewProp_Rot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::NewProp_Spawning,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VerticalGJ_Group1Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVerticalGJ_Group1Character, nullptr, "Fire", nullptr, nullptr, Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::VerticalGJ_Group1Character_eventFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::VerticalGJ_Group1Character_eventFire_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVerticalGJ_Group1Character);
	UClass* Z_Construct_UClass_AVerticalGJ_Group1Character_NoRegister()
	{
		return AVerticalGJ_Group1Character::StaticClass();
	}
	struct Z_Construct_UClass_AVerticalGJ_Group1Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VerticalGJ_Group1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVerticalGJ_Group1Character_Fire, "Fire" }, // 1192474265
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VerticalGJ_Group1Character.h" },
		{ "ModuleRelativePath", "VerticalGJ_Group1Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VerticalGJ_Group1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVerticalGJ_Group1Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VerticalGJ_Group1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVerticalGJ_Group1Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "VerticalGJ_Group1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVerticalGJ_Group1Character, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "VerticalGJ_Group1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVerticalGJ_Group1Character, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "VerticalGJ_Group1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVerticalGJ_Group1Character, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "VerticalGJ_Group1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVerticalGJ_Group1Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_LookAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::NewProp_LookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVerticalGJ_Group1Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::ClassParams = {
		&AVerticalGJ_Group1Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVerticalGJ_Group1Character()
	{
		if (!Z_Registration_Info_UClass_AVerticalGJ_Group1Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVerticalGJ_Group1Character.OuterSingleton, Z_Construct_UClass_AVerticalGJ_Group1Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVerticalGJ_Group1Character.OuterSingleton;
	}
	template<> VERTICALGJ_GROUP1_API UClass* StaticClass<AVerticalGJ_Group1Character>()
	{
		return AVerticalGJ_Group1Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVerticalGJ_Group1Character);
	AVerticalGJ_Group1Character::~AVerticalGJ_Group1Character() {}
	struct Z_CompiledInDeferFile_FID_Uni_Work_Year_3_Group1_VerticalGJ_VerticalGJ_Group1_Source_VerticalGJ_Group1_VerticalGJ_Group1Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Uni_Work_Year_3_Group1_VerticalGJ_VerticalGJ_Group1_Source_VerticalGJ_Group1_VerticalGJ_Group1Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVerticalGJ_Group1Character, AVerticalGJ_Group1Character::StaticClass, TEXT("AVerticalGJ_Group1Character"), &Z_Registration_Info_UClass_AVerticalGJ_Group1Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVerticalGJ_Group1Character), 4098727046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Uni_Work_Year_3_Group1_VerticalGJ_VerticalGJ_Group1_Source_VerticalGJ_Group1_VerticalGJ_Group1Character_h_2331749659(TEXT("/Script/VerticalGJ_Group1"),
		Z_CompiledInDeferFile_FID_Uni_Work_Year_3_Group1_VerticalGJ_VerticalGJ_Group1_Source_VerticalGJ_Group1_VerticalGJ_Group1Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Uni_Work_Year_3_Group1_VerticalGJ_VerticalGJ_Group1_Source_VerticalGJ_Group1_VerticalGJ_Group1Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
