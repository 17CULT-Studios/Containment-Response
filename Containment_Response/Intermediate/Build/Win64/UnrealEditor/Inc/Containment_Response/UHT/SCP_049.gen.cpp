// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/SCP_049.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCP_049() {}
// Cross Module References
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_049();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_049_NoRegister();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_Base();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	void ASCP_049::StaticRegisterNativesASCP_049()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCP_049);
	UClass* Z_Construct_UClass_ASCP_049_NoRegister()
	{
		return ASCP_049::StaticClass();
	}
	struct Z_Construct_UClass_ASCP_049_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCP_049_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASCP_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_049_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_049_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * SCP-173 (\"The Sculpture\") class.\n * Inherits base SCP properties and overrides behavior like freezing when observed,\n * moving quickly when unobserved, and snapping necks.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCP_049.h" },
		{ "ModuleRelativePath", "SCP_049.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SCP-173 (\"The Sculpture\") class.\nInherits base SCP properties and overrides behavior like freezing when observed,\nmoving quickly when unobserved, and snapping necks." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCP_049_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCP_049>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCP_049_Statics::ClassParams = {
		&ASCP_049::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_049_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCP_049_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASCP_049()
	{
		if (!Z_Registration_Info_UClass_ASCP_049.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCP_049.OuterSingleton, Z_Construct_UClass_ASCP_049_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASCP_049.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<ASCP_049>()
	{
		return ASCP_049::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCP_049);
	ASCP_049::~ASCP_049() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_049_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_049_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASCP_049, ASCP_049::StaticClass, TEXT("ASCP_049"), &Z_Registration_Info_UClass_ASCP_049, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCP_049), 2074744476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_049_h_4179381954(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_049_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_049_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
