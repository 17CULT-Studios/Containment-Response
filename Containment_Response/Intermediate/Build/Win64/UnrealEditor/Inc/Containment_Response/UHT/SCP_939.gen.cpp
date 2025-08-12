// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/SCP_939.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCP_939() {}
// Cross Module References
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_939();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_939_NoRegister();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_Base();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	void ASCP_939::StaticRegisterNativesASCP_939()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCP_939);
	UClass* Z_Construct_UClass_ASCP_939_NoRegister()
	{
		return ASCP_939::StaticClass();
	}
	struct Z_Construct_UClass_ASCP_939_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCP_939_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASCP_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_939_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_939_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCP_939.h" },
		{ "ModuleRelativePath", "SCP_939.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_939_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_939.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_939_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_939, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_939_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UClass_ASCP_939_Statics::NewProp_SkeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCP_939_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_939_Statics::NewProp_SkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCP_939_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCP_939>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCP_939_Statics::ClassParams = {
		&ASCP_939::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASCP_939_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_939_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_939_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCP_939_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_939_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASCP_939()
	{
		if (!Z_Registration_Info_UClass_ASCP_939.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCP_939.OuterSingleton, Z_Construct_UClass_ASCP_939_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASCP_939.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<ASCP_939>()
	{
		return ASCP_939::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCP_939);
	ASCP_939::~ASCP_939() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_939_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_939_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASCP_939, ASCP_939::StaticClass, TEXT("ASCP_939"), &Z_Registration_Info_UClass_ASCP_939, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCP_939), 1762081109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_939_h_3030375893(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_939_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_939_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
