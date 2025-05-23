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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	DEFINE_FUNCTION(ASCP_173_Penut::execOnRep_ReplicatedRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedRotation();
		P_NATIVE_END;
	}
	void ASCP_173_Penut::StaticRegisterNativesASCP_173_Penut()
	{
		UClass* Class = ASCP_173_Penut::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ReplicatedRotation", &ASCP_173_Penut::execOnRep_ReplicatedRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASCP_173_Penut_OnRep_ReplicatedRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCP_173_Penut_OnRep_ReplicatedRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCP_173_Penut_OnRep_ReplicatedRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCP_173_Penut, nullptr, "OnRep_ReplicatedRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_173_Penut_OnRep_ReplicatedRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCP_173_Penut_OnRep_ReplicatedRotation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASCP_173_Penut_OnRep_ReplicatedRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCP_173_Penut_OnRep_ReplicatedRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCP_173_Penut);
	UClass* Z_Construct_UClass_ASCP_173_Penut_NoRegister()
	{
		return ASCP_173_Penut::StaticClass();
	}
	struct Z_Construct_UClass_ASCP_173_Penut_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCP_173_Penut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASCP_173_Penut_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASCP_173_Penut_OnRep_ReplicatedRotation, "OnRep_ReplicatedRotation" }, // 1675379460
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCP_173_Penut.h" },
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_SCPMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_SCPMesh = { "SCPMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_173_Penut, SCPMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_SCPMesh_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_SCPMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_CollisionCapsule_MetaData[] = {
		{ "Category", "SCP_173_Penut" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_CollisionCapsule = { "CollisionCapsule", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_173_Penut, CollisionCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_CollisionCapsule_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_CollisionCapsule_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "SCP_173_Penut" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_173_Penut, MovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_MovementComponent_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_MovementComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_HeadComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_HeadComponent = { "HeadComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_173_Penut, HeadComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_HeadComponent_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_HeadComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_ReplicatedRotation_MetaData[] = {
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_ReplicatedRotation = { "ReplicatedRotation", "OnRep_ReplicatedRotation", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_173_Penut, ReplicatedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_ReplicatedRotation_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_ReplicatedRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCP_173_Penut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_SCPMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_CollisionCapsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_HeadComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_ReplicatedRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCP_173_Penut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCP_173_Penut>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCP_173_Penut_Statics::ClassParams = {
		&ASCP_173_Penut::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASCP_173_Penut_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCP_173_Penut_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::PropPointers) < 2048);
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

	void ASCP_173_Penut::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedRotation(TEXT("ReplicatedRotation"));

		const bool bIsValid = true
			&& Name_ReplicatedRotation == ClassReps[(int32)ENetFields_Private::ReplicatedRotation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASCP_173_Penut"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCP_173_Penut);
	ASCP_173_Penut::~ASCP_173_Penut() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASCP_173_Penut, ASCP_173_Penut::StaticClass, TEXT("ASCP_173_Penut"), &Z_Registration_Info_UClass_ASCP_173_Penut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCP_173_Penut), 3459010628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_1474943109(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
