// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/SCP_103_AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCP_103_AIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_103_AIController();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_103_AIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	void ASCP_103_AIController::StaticRegisterNativesASCP_103_AIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCP_103_AIController);
	UClass* Z_Construct_UClass_ASCP_103_AIController_NoRegister()
	{
		return ASCP_103_AIController::StaticClass();
	}
	struct Z_Construct_UClass_ASCP_103_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMoveTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMoveTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCP_103_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_AIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_103_AIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SCP_103_AIController.h" },
		{ "ModuleRelativePath", "SCP_103_AIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_103_AIController_Statics::NewProp_CurrentMoveTarget_MetaData[] = {
		{ "ModuleRelativePath", "SCP_103_AIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_103_AIController_Statics::NewProp_CurrentMoveTarget = { "CurrentMoveTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_103_AIController, CurrentMoveTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_AIController_Statics::NewProp_CurrentMoveTarget_MetaData), Z_Construct_UClass_ASCP_103_AIController_Statics::NewProp_CurrentMoveTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCP_103_AIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_103_AIController_Statics::NewProp_CurrentMoveTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCP_103_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCP_103_AIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCP_103_AIController_Statics::ClassParams = {
		&ASCP_103_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASCP_103_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCP_103_AIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_AIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASCP_103_AIController()
	{
		if (!Z_Registration_Info_UClass_ASCP_103_AIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCP_103_AIController.OuterSingleton, Z_Construct_UClass_ASCP_103_AIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASCP_103_AIController.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<ASCP_103_AIController>()
	{
		return ASCP_103_AIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCP_103_AIController);
	ASCP_103_AIController::~ASCP_103_AIController() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_103_AIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_103_AIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASCP_103_AIController, ASCP_103_AIController::StaticClass, TEXT("ASCP_103_AIController"), &Z_Registration_Info_UClass_ASCP_103_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCP_103_AIController), 1607289683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_103_AIController_h_1116901069(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_103_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_103_AIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
