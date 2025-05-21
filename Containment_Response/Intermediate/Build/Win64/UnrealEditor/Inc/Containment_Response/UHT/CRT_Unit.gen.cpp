// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/CRT_Unit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRT_Unit() {}
// Cross Module References
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ACRT_Unit();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ACRT_Unit_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	DEFINE_FUNCTION(ACRT_Unit::execGetSimulatedVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSimulatedVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACRT_Unit::execIsMoving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMoving();
		P_NATIVE_END;
	}
	void ACRT_Unit::StaticRegisterNativesACRT_Unit()
	{
		UClass* Class = ACRT_Unit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSimulatedVelocity", &ACRT_Unit::execGetSimulatedVelocity },
			{ "IsMoving", &ACRT_Unit::execIsMoving },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics
	{
		struct CRT_Unit_eventGetSimulatedVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CRT_Unit_eventGetSimulatedVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CRT_Unit.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACRT_Unit, nullptr, "GetSimulatedVelocity", nullptr, nullptr, Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::CRT_Unit_eventGetSimulatedVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::CRT_Unit_eventGetSimulatedVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics
	{
		struct CRT_Unit_eventIsMoving_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CRT_Unit_eventIsMoving_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CRT_Unit_eventIsMoving_Parms), &Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CRT_Unit.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACRT_Unit, nullptr, "IsMoving", nullptr, nullptr, Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::CRT_Unit_eventIsMoving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::CRT_Unit_eventIsMoving_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACRT_Unit_IsMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACRT_Unit_IsMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACRT_Unit);
	UClass* Z_Construct_UClass_ACRT_Unit_NoRegister()
	{
		return ACRT_Unit::StaticClass();
	}
	struct Z_Construct_UClass_ACRT_Unit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionCapsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CRTMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CRTMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACRT_Unit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACRT_Unit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACRT_Unit_GetSimulatedVelocity, "GetSimulatedVelocity" }, // 3398289421
		{ &Z_Construct_UFunction_ACRT_Unit_IsMoving, "IsMoving" }, // 1571493351
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACRT_Unit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CRT_Unit.h" },
		{ "ModuleRelativePath", "CRT_Unit.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACRT_Unit_Statics::NewProp_CollisionCapsule_MetaData[] = {
		{ "Category", "CRT_Unit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CRT_Unit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACRT_Unit_Statics::NewProp_CollisionCapsule = { "CollisionCapsule", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACRT_Unit, CollisionCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_Statics::NewProp_CollisionCapsule_MetaData), Z_Construct_UClass_ACRT_Unit_Statics::NewProp_CollisionCapsule_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACRT_Unit_Statics::NewProp_CRTMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CRT_Unit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACRT_Unit_Statics::NewProp_CRTMesh = { "CRTMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACRT_Unit, CRTMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_Statics::NewProp_CRTMesh_MetaData), Z_Construct_UClass_ACRT_Unit_Statics::NewProp_CRTMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACRT_Unit_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CRT_Unit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACRT_Unit_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACRT_Unit, MovementComponent), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_Statics::NewProp_MovementComponent_MetaData), Z_Construct_UClass_ACRT_Unit_Statics::NewProp_MovementComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACRT_Unit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACRT_Unit_Statics::NewProp_CollisionCapsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACRT_Unit_Statics::NewProp_CRTMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACRT_Unit_Statics::NewProp_MovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACRT_Unit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACRT_Unit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACRT_Unit_Statics::ClassParams = {
		&ACRT_Unit::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACRT_Unit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_Statics::Class_MetaDataParams), Z_Construct_UClass_ACRT_Unit_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACRT_Unit_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACRT_Unit()
	{
		if (!Z_Registration_Info_UClass_ACRT_Unit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACRT_Unit.OuterSingleton, Z_Construct_UClass_ACRT_Unit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACRT_Unit.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<ACRT_Unit>()
	{
		return ACRT_Unit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACRT_Unit);
	ACRT_Unit::~ACRT_Unit() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_CRT_Unit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_CRT_Unit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACRT_Unit, ACRT_Unit::StaticClass, TEXT("ACRT_Unit"), &Z_Registration_Info_UClass_ACRT_Unit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACRT_Unit), 4105272385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_CRT_Unit_h_3674683234(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_CRT_Unit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_CRT_Unit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
