// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/CRT_Unit_AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRT_Unit_AIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ACRT_Unit_AIController();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ACRT_Unit_AIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	void ACRT_Unit_AIController::StaticRegisterNativesACRT_Unit_AIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACRT_Unit_AIController);
	UClass* Z_Construct_UClass_ACRT_Unit_AIController_NoRegister()
	{
		return ACRT_Unit_AIController::StaticClass();
	}
	struct Z_Construct_UClass_ACRT_Unit_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACRT_Unit_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_AIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACRT_Unit_AIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CRT_Unit_AIController.h" },
		{ "ModuleRelativePath", "CRT_Unit_AIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACRT_Unit_AIController_Statics::NewProp_FollowDistance_MetaData[] = {
		{ "Category", "CRT_Unit_AIController" },
		{ "ModuleRelativePath", "CRT_Unit_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACRT_Unit_AIController_Statics::NewProp_FollowDistance = { "FollowDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACRT_Unit_AIController, FollowDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_AIController_Statics::NewProp_FollowDistance_MetaData), Z_Construct_UClass_ACRT_Unit_AIController_Statics::NewProp_FollowDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACRT_Unit_AIController_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "CRT_Unit_AIController" },
		{ "ModuleRelativePath", "CRT_Unit_AIController.h" },
	};
#endif
	void Z_Construct_UClass_ACRT_Unit_AIController_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((ACRT_Unit_AIController*)Obj)->bIsMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACRT_Unit_AIController_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACRT_Unit_AIController), &Z_Construct_UClass_ACRT_Unit_AIController_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_AIController_Statics::NewProp_bIsMoving_MetaData), Z_Construct_UClass_ACRT_Unit_AIController_Statics::NewProp_bIsMoving_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACRT_Unit_AIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACRT_Unit_AIController_Statics::NewProp_FollowDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACRT_Unit_AIController_Statics::NewProp_bIsMoving,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACRT_Unit_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACRT_Unit_AIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACRT_Unit_AIController_Statics::ClassParams = {
		&ACRT_Unit_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACRT_Unit_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACRT_Unit_AIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_AIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACRT_Unit_AIController()
	{
		if (!Z_Registration_Info_UClass_ACRT_Unit_AIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACRT_Unit_AIController.OuterSingleton, Z_Construct_UClass_ACRT_Unit_AIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACRT_Unit_AIController.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<ACRT_Unit_AIController>()
	{
		return ACRT_Unit_AIController::StaticClass();
	}
	ACRT_Unit_AIController::ACRT_Unit_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACRT_Unit_AIController);
	ACRT_Unit_AIController::~ACRT_Unit_AIController() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_CRT_Unit_AIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_CRT_Unit_AIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACRT_Unit_AIController, ACRT_Unit_AIController::StaticClass, TEXT("ACRT_Unit_AIController"), &Z_Registration_Info_UClass_ACRT_Unit_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACRT_Unit_AIController), 1721997939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_CRT_Unit_AIController_h_1364315685(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_CRT_Unit_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_CRT_Unit_AIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
