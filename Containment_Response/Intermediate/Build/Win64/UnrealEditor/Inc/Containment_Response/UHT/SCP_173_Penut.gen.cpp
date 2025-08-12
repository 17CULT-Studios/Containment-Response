// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/SCP_173_Penut.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCP_173_Penut() {}
// Cross Module References
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_173_Penut();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_173_Penut_NoRegister();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_Base();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	void ASCP_173_Penut::StaticRegisterNativesASCP_173_Penut()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCP_173_Penut);
	UClass* Z_Construct_UClass_ASCP_173_Penut_NoRegister()
	{
		return ASCP_173_Penut::StaticClass();
	}
	struct Z_Construct_UClass_ASCP_173_Penut_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCP_173_Penut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASCP_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * SCP-173 (\"The Sculpture\") class.\n * Inherits base SCP properties and overrides behavior like freezing when observed,\n * moving quickly when unobserved, and snapping necks.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCP_173_Penut.h" },
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SCP-173 (\"The Sculpture\") class.\nInherits base SCP properties and overrides behavior like freezing when observed,\nmoving quickly when unobserved, and snapping necks." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCP_173_Penut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCP_173_Penut>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCP_173_Penut_Statics::ClassParams = {
		&ASCP_173_Penut::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCP_173_Penut_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASCP_173_Penut()
	{
		if (!Z_Registration_Info_UClass_ASCP_173_Penut.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCP_173_Penut.OuterSingleton, Z_Construct_UClass_ASCP_173_Penut_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASCP_173_Penut.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<ASCP_173_Penut>()
	{
		return ASCP_173_Penut::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCP_173_Penut);
	ASCP_173_Penut::~ASCP_173_Penut() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASCP_173_Penut, ASCP_173_Penut::StaticClass, TEXT("ASCP_173_Penut"), &Z_Registration_Info_UClass_ASCP_173_Penut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCP_173_Penut), 1052379290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_4281714647(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
