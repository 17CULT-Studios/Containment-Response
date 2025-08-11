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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCP_173_Penut_OnRep_ReplicatedRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCP_173_Penut, nullptr, "OnRep_ReplicatedRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_173_Penut_OnRep_ReplicatedRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCP_173_Penut_OnRep_ReplicatedRotation_Statics::Function_MetaDataParams) };
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsChasingPlayer_MetaData[];
#endif
		static void NewProp_bIsChasingPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChasingPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastSeen_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastSeen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeactivationDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeactivationDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playerFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debug_MetaData[];
#endif
		static void NewProp_debug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapKillRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapKillRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCP_173_Penut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASCP_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASCP_173_Penut_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASCP_173_Penut_OnRep_ReplicatedRotation, "OnRep_ReplicatedRotation" }, // 1579090549
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "SCP_173" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------- Components -----------------\n" },
#endif
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Components -----------------" },
#endif
	};
#endif
	void Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((ASCP_173_Penut*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCP_173_Penut), &Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsActive_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsChasingPlayer_MetaData[] = {
		{ "Category", "SCP_173" },
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
	void Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsChasingPlayer_SetBit(void* Obj)
	{
		((ASCP_173_Penut*)Obj)->bIsChasingPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsChasingPlayer = { "bIsChasingPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCP_173_Penut), &Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsChasingPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsChasingPlayer_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsChasingPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_TimeSinceLastSeen_MetaData[] = {
		{ "Category", "SCP_173" },
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_TimeSinceLastSeen = { "TimeSinceLastSeen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_173_Penut, TimeSinceLastSeen), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_TimeSinceLastSeen_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_TimeSinceLastSeen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_DeactivationDelay_MetaData[] = {
		{ "Category", "SCP_173" },
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_DeactivationDelay = { "DeactivationDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_173_Penut, DeactivationDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_DeactivationDelay_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_DeactivationDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_playerFOV_MetaData[] = {
		{ "Category", "SCP_173" },
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_playerFOV = { "playerFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_173_Penut, playerFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_playerFOV_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_playerFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_debug_MetaData[] = {
		{ "Category", "SCP_173" },
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
	void Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_debug_SetBit(void* Obj)
	{
		((ASCP_173_Penut*)Obj)->debug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCP_173_Penut), &Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_debug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_debug_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_debug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_SnapKillRange_MetaData[] = {
		{ "Category", "SCP_173" },
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_SnapKillRange = { "SnapKillRange", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_173_Penut, SnapKillRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_SnapKillRange_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_SnapKillRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_ReplicatedRotation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------- Networking -----------------\n" },
#endif
		{ "ModuleRelativePath", "SCP_173_Penut.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Networking -----------------" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_ReplicatedRotation = { "ReplicatedRotation", "OnRep_ReplicatedRotation", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_173_Penut, ReplicatedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_ReplicatedRotation_MetaData), Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_ReplicatedRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCP_173_Penut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_bIsChasingPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_TimeSinceLastSeen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_DeactivationDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_playerFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_173_Penut_Statics::NewProp_SnapKillRange,
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
		{ Z_Construct_UClass_ASCP_173_Penut, ASCP_173_Penut::StaticClass, TEXT("ASCP_173_Penut"), &Z_Registration_Info_UClass_ASCP_173_Penut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCP_173_Penut), 902473051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_1296738356(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_173_Penut_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
