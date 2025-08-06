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
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_939();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_939_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	DEFINE_FUNCTION(ASCP_939::execOnHearNoise)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Loctaion);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHearNoise(Z_Param_InstigatorPawn,Z_Param_Out_Loctaion,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCP_939::execOnSeePawn)
	{
		P_GET_OBJECT(APawn,Z_Param_OtherPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSeePawn(Z_Param_OtherPawn);
		P_NATIVE_END;
	}
	void ASCP_939::StaticRegisterNativesASCP_939()
	{
		UClass* Class = ASCP_939::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHearNoise", &ASCP_939::execOnHearNoise },
			{ "OnSeePawn", &ASCP_939::execOnSeePawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics
	{
		struct SCP_939_eventOnHearNoise_Parms
		{
			APawn* InstigatorPawn;
			FVector Loctaion;
			float Volume;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Loctaion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Loctaion;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCP_939_eventOnHearNoise_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::NewProp_Loctaion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::NewProp_Loctaion = { "Loctaion", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCP_939_eventOnHearNoise_Parms, Loctaion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::NewProp_Loctaion_MetaData), Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::NewProp_Loctaion_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCP_939_eventOnHearNoise_Parms, Volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::NewProp_InstigatorPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::NewProp_Loctaion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCP_939.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCP_939, nullptr, "OnHearNoise", nullptr, nullptr, Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::SCP_939_eventOnHearNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::SCP_939_eventOnHearNoise_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASCP_939_OnHearNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCP_939_OnHearNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics
	{
		struct SCP_939_eventOnSeePawn_Parms
		{
			APawn* OtherPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::NewProp_OtherPawn = { "OtherPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCP_939_eventOnSeePawn_Parms, OtherPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::NewProp_OtherPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCP_939.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCP_939, nullptr, "OnSeePawn", nullptr, nullptr, Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::SCP_939_eventOnSeePawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::SCP_939_eventOnSeePawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASCP_939_OnSeePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCP_939_OnSeePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCP_939);
	UClass* Z_Construct_UClass_ASCP_939_NoRegister()
	{
		return ASCP_939::StaticClass();
	}
	struct Z_Construct_UClass_ASCP_939_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCP_939_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_939_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASCP_939_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASCP_939_OnHearNoise, "OnHearNoise" }, // 1829854033
		{ &Z_Construct_UFunction_ASCP_939_OnSeePawn, "OnSeePawn" }, // 1364139420
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_939_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_939_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCP_939.h" },
		{ "ModuleRelativePath", "SCP_939.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_939_Statics::NewProp_PawnSensingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_939.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_939_Statics::NewProp_PawnSensingComponent = { "PawnSensingComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_939, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_939_Statics::NewProp_PawnSensingComponent_MetaData), Z_Construct_UClass_ASCP_939_Statics::NewProp_PawnSensingComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_939_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_939.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_939_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_939, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_939_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UClass_ASCP_939_Statics::NewProp_SkeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCP_939_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_939_Statics::NewProp_PawnSensingComponent,
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
		FuncInfo,
		Z_Construct_UClass_ASCP_939_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ASCP_939, ASCP_939::StaticClass, TEXT("ASCP_939"), &Z_Registration_Info_UClass_ASCP_939, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCP_939), 3234656711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_939_h_505616018(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_939_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_939_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
