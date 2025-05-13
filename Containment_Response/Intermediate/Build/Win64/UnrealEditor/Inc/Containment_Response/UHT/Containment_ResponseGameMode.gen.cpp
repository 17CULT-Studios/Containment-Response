// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/Containment_ResponseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContainment_ResponseGameMode() {}
// Cross Module References
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_AContainment_ResponseGameMode();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_AContainment_ResponseGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	void AContainment_ResponseGameMode::StaticRegisterNativesAContainment_ResponseGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AContainment_ResponseGameMode);
	UClass* Z_Construct_UClass_AContainment_ResponseGameMode_NoRegister()
	{
		return AContainment_ResponseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AContainment_ResponseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AContainment_ResponseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Containment_ResponseGameMode.h" },
		{ "ModuleRelativePath", "Containment_ResponseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AContainment_ResponseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AContainment_ResponseGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AContainment_ResponseGameMode_Statics::ClassParams = {
		&AContainment_ResponseGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AContainment_ResponseGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AContainment_ResponseGameMode()
	{
		if (!Z_Registration_Info_UClass_AContainment_ResponseGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AContainment_ResponseGameMode.OuterSingleton, Z_Construct_UClass_AContainment_ResponseGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AContainment_ResponseGameMode.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<AContainment_ResponseGameMode>()
	{
		return AContainment_ResponseGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AContainment_ResponseGameMode);
	AContainment_ResponseGameMode::~AContainment_ResponseGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Containment_ResponseGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Containment_ResponseGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AContainment_ResponseGameMode, AContainment_ResponseGameMode::StaticClass, TEXT("AContainment_ResponseGameMode"), &Z_Registration_Info_UClass_AContainment_ResponseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AContainment_ResponseGameMode), 62108718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Containment_ResponseGameMode_h_3081694756(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Containment_ResponseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Containment_ResponseGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
