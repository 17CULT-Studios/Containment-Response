// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/SCP_103_Penut.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCP_103_Penut() {}
// Cross Module References
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_103_Penut();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_103_Penut_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	void ASCP_103_Penut::StaticRegisterNativesASCP_103_Penut()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCP_103_Penut);
	UClass* Z_Construct_UClass_ASCP_103_Penut_NoRegister()
	{
		return ASCP_103_Penut::StaticClass();
	}
	struct Z_Construct_UClass_ASCP_103_Penut_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SCPMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SCPMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionCapsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCP_103_Penut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_Penut_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_103_Penut_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCP_103_Penut.h" },
		{ "ModuleRelativePath", "SCP_103_Penut.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_SCPMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_103_Penut.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_SCPMesh = { "SCPMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_103_Penut, SCPMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_SCPMesh_MetaData), Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_SCPMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_CollisionCapsule_MetaData[] = {
		{ "Category", "SCP_103_Penut" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_103_Penut.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_CollisionCapsule = { "CollisionCapsule", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_103_Penut, CollisionCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_CollisionCapsule_MetaData), Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_CollisionCapsule_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "SCP_103_Penut" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_103_Penut.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_103_Penut, MovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_MovementComponent_MetaData), Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_MovementComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_HeadComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_103_Penut.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_HeadComponent = { "HeadComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_103_Penut, HeadComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_HeadComponent_MetaData), Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_HeadComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCP_103_Penut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_SCPMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_CollisionCapsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_103_Penut_Statics::NewProp_HeadComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCP_103_Penut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCP_103_Penut>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCP_103_Penut_Statics::ClassParams = {
		&ASCP_103_Penut::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASCP_103_Penut_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_Penut_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_Penut_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCP_103_Penut_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_103_Penut_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASCP_103_Penut()
	{
		if (!Z_Registration_Info_UClass_ASCP_103_Penut.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCP_103_Penut.OuterSingleton, Z_Construct_UClass_ASCP_103_Penut_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASCP_103_Penut.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<ASCP_103_Penut>()
	{
		return ASCP_103_Penut::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCP_103_Penut);
	ASCP_103_Penut::~ASCP_103_Penut() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_103_Penut_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_103_Penut_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASCP_103_Penut, ASCP_103_Penut::StaticClass, TEXT("ASCP_103_Penut"), &Z_Registration_Info_UClass_ASCP_103_Penut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCP_103_Penut), 2378407134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_103_Penut_h_3084165308(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_103_Penut_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_103_Penut_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
