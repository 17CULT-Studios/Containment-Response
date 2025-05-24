// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/SCP_096_AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCP_096_AIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_096_AIController();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_096_AIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	void ASCP_096_AIController::StaticRegisterNativesASCP_096_AIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCP_096_AIController);
	UClass* Z_Construct_UClass_ASCP_096_AIController_NoRegister()
	{
		return ASCP_096_AIController::StaticClass();
	}
	struct Z_Construct_UClass_ASCP_096_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCP_096_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_096_AIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_096_AIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SCP_096_AIController.h" },
		{ "ModuleRelativePath", "SCP_096_AIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCP_096_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCP_096_AIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCP_096_AIController_Statics::ClassParams = {
		&ASCP_096_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_096_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCP_096_AIController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASCP_096_AIController()
	{
		if (!Z_Registration_Info_UClass_ASCP_096_AIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCP_096_AIController.OuterSingleton, Z_Construct_UClass_ASCP_096_AIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASCP_096_AIController.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<ASCP_096_AIController>()
	{
		return ASCP_096_AIController::StaticClass();
	}
	ASCP_096_AIController::ASCP_096_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCP_096_AIController);
	ASCP_096_AIController::~ASCP_096_AIController() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_096_AIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_096_AIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASCP_096_AIController, ASCP_096_AIController::StaticClass, TEXT("ASCP_096_AIController"), &Z_Registration_Info_UClass_ASCP_096_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCP_096_AIController), 1797409814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_096_AIController_h_1994128733(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_096_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_096_AIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
