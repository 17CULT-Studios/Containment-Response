// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/SCP_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCP_Base() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_Base();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ASCP_Base_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	DEFINE_FUNCTION(ASCP_Base::execOnHearNoise)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Loctaion);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHearNoise(Z_Param_InstigatorPawn,Z_Param_Out_Loctaion,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCP_Base::execOnSeePawn)
	{
		P_GET_OBJECT(APawn,Z_Param_OtherPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSeePawn_Implementation(Z_Param_OtherPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCP_Base::execHeal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Heal(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCP_Base::execContain)
	{
		P_GET_UBOOL(Z_Param_CanExcape);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Contain(Z_Param_CanExcape);
		P_NATIVE_END;
	}
	struct SCP_Base_eventOnSeePawn_Parms
	{
		APawn* OtherPawn;
	};
	static FName NAME_ASCP_Base_OnSeePawn = FName(TEXT("OnSeePawn"));
	void ASCP_Base::OnSeePawn(APawn* OtherPawn)
	{
		SCP_Base_eventOnSeePawn_Parms Parms;
		Parms.OtherPawn=OtherPawn;
		ProcessEvent(FindFunctionChecked(NAME_ASCP_Base_OnSeePawn),&Parms);
	}
	void ASCP_Base::StaticRegisterNativesASCP_Base()
	{
		UClass* Class = ASCP_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Contain", &ASCP_Base::execContain },
			{ "Heal", &ASCP_Base::execHeal },
			{ "OnHearNoise", &ASCP_Base::execOnHearNoise },
			{ "OnSeePawn", &ASCP_Base::execOnSeePawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASCP_Base_Contain_Statics
	{
		struct SCP_Base_eventContain_Parms
		{
			bool CanExcape;
		};
		static void NewProp_CanExcape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanExcape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASCP_Base_Contain_Statics::NewProp_CanExcape_SetBit(void* Obj)
	{
		((SCP_Base_eventContain_Parms*)Obj)->CanExcape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCP_Base_Contain_Statics::NewProp_CanExcape = { "CanExcape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SCP_Base_eventContain_Parms), &Z_Construct_UFunction_ASCP_Base_Contain_Statics::NewProp_CanExcape_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCP_Base_Contain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCP_Base_Contain_Statics::NewProp_CanExcape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCP_Base_Contain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCP_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCP_Base_Contain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCP_Base, nullptr, "Contain", nullptr, nullptr, Z_Construct_UFunction_ASCP_Base_Contain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_Contain_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASCP_Base_Contain_Statics::SCP_Base_eventContain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_Contain_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCP_Base_Contain_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_Contain_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASCP_Base_Contain_Statics::SCP_Base_eventContain_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASCP_Base_Contain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCP_Base_Contain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCP_Base_Heal_Statics
	{
		struct SCP_Base_eventHeal_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCP_Base_Heal_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCP_Base_eventHeal_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCP_Base_Heal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCP_Base_Heal_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCP_Base_Heal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SCPFunctions" },
		{ "ModuleRelativePath", "SCP_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCP_Base_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCP_Base, nullptr, "Heal", nullptr, nullptr, Z_Construct_UFunction_ASCP_Base_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_Heal_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASCP_Base_Heal_Statics::SCP_Base_eventHeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_Heal_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCP_Base_Heal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_Heal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASCP_Base_Heal_Statics::SCP_Base_eventHeal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASCP_Base_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCP_Base_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics
	{
		struct SCP_Base_eventOnHearNoise_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCP_Base_eventOnHearNoise_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::NewProp_Loctaion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::NewProp_Loctaion = { "Loctaion", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCP_Base_eventOnHearNoise_Parms, Loctaion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::NewProp_Loctaion_MetaData), Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::NewProp_Loctaion_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCP_Base_eventOnHearNoise_Parms, Volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::NewProp_InstigatorPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::NewProp_Loctaion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SCP_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCP_Base, nullptr, "OnHearNoise", nullptr, nullptr, Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::SCP_Base_eventOnHearNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::SCP_Base_eventOnHearNoise_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASCP_Base_OnHearNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCP_Base_OnHearNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCP_Base_OnSeePawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCP_Base_OnSeePawn_Statics::NewProp_OtherPawn = { "OtherPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCP_Base_eventOnSeePawn_Parms, OtherPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCP_Base_OnSeePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCP_Base_OnSeePawn_Statics::NewProp_OtherPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCP_Base_OnSeePawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "SCP_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCP_Base_OnSeePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCP_Base, nullptr, "OnSeePawn", nullptr, nullptr, Z_Construct_UFunction_ASCP_Base_OnSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_OnSeePawn_Statics::PropPointers), sizeof(SCP_Base_eventOnSeePawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_OnSeePawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCP_Base_OnSeePawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCP_Base_OnSeePawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(SCP_Base_eventOnSeePawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASCP_Base_OnSeePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCP_Base_OnSeePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCP_Base);
	UClass* Z_Construct_UClass_ASCP_Base_NoRegister()
	{
		return ASCP_Base::StaticClass();
	}
	struct Z_Construct_UClass_ASCP_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SCPID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SCPID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SCPName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SCPName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SCPClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SCPClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsImmortal_MetaData[];
#endif
		static void NewProp_bIsImmortal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsImmortal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanOpenDoors_MetaData[];
#endif
		static void NewProp_bCanOpenDoors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanOpenDoors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanTeleport_MetaData[];
#endif
		static void NewProp_bCanTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTeleport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanPhaseThroughWalls_MetaData[];
#endif
		static void NewProp_bCanPhaseThroughWalls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPhaseThroughWalls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowPlayer_MetaData[];
#endif
		static void NewProp_bFollowPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsContained_MetaData[];
#endif
		static void NewProp_bIsContained_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsContained;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEscape_MetaData[];
#endif
		static void NewProp_bCanEscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SanityDrainAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SanityDrainAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SCPMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SCPMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCP_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASCP_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASCP_Base_Contain, "Contain" }, // 3896819115
		{ &Z_Construct_UFunction_ASCP_Base_Heal, "Heal" }, // 994174652
		{ &Z_Construct_UFunction_ASCP_Base_OnHearNoise, "OnHearNoise" }, // 1765701052
		{ &Z_Construct_UFunction_ASCP_Base_OnSeePawn, "OnSeePawn" }, // 2802046497
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCP_Base.h" },
		{ "ModuleRelativePath", "SCP_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPID_MetaData[] = {
		{ "Category", "SCPMembers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------- IDENTIFACATION ----------\n" },
#endif
		{ "ModuleRelativePath", "SCP_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- IDENTIFACATION ----------" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPID = { "SCPID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_Base, SCPID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPID_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPName_MetaData[] = {
		{ "Category", "SCPMembers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ID number\n" },
#endif
		{ "ModuleRelativePath", "SCP_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID number" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPName = { "SCPName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_Base, SCPName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPName_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPClass_MetaData[] = {
		{ "Category", "SCPMembers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ID Name\n" },
#endif
		{ "ModuleRelativePath", "SCP_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID Name" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPClass = { "SCPClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_Base, SCPClass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPClass_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "SCPMembers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------- HEALTH ----------\n" },
#endif
		{ "ModuleRelativePath", "SCP_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- HEALTH ----------" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_Base, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "SCPMembers" },
		{ "ModuleRelativePath", "SCP_Base.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_Base, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsImmortal_MetaData[] = {
		{ "Category", "SCPMembers" },
		{ "ModuleRelativePath", "SCP_Base.h" },
	};
#endif
	void Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsImmortal_SetBit(void* Obj)
	{
		((ASCP_Base*)Obj)->bIsImmortal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsImmortal = { "bIsImmortal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCP_Base), &Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsImmortal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsImmortal_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsImmortal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_PawnSensingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------- AWARENESS ----------\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- AWARENESS ----------" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_PawnSensingComponent = { "PawnSensingComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_Base, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_PawnSensingComponent_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_PawnSensingComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanOpenDoors_MetaData[] = {
		{ "Category", "SCPMembers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------- Movement ----------\n" },
#endif
		{ "ModuleRelativePath", "SCP_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- Movement ----------" },
#endif
	};
#endif
	void Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanOpenDoors_SetBit(void* Obj)
	{
		((ASCP_Base*)Obj)->bCanOpenDoors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanOpenDoors = { "bCanOpenDoors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCP_Base), &Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanOpenDoors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanOpenDoors_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanOpenDoors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanTeleport_MetaData[] = {
		{ "Category", "SCPMembers" },
		{ "ModuleRelativePath", "SCP_Base.h" },
	};
#endif
	void Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanTeleport_SetBit(void* Obj)
	{
		((ASCP_Base*)Obj)->bCanTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanTeleport = { "bCanTeleport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCP_Base), &Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanTeleport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanTeleport_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanTeleport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanPhaseThroughWalls_MetaData[] = {
		{ "Category", "SCPMembers" },
		{ "ModuleRelativePath", "SCP_Base.h" },
	};
#endif
	void Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanPhaseThroughWalls_SetBit(void* Obj)
	{
		((ASCP_Base*)Obj)->bCanPhaseThroughWalls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanPhaseThroughWalls = { "bCanPhaseThroughWalls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCP_Base), &Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanPhaseThroughWalls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanPhaseThroughWalls_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanPhaseThroughWalls_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanMove_MetaData[] = {
		{ "Category", "SCPMembers" },
		{ "ModuleRelativePath", "SCP_Base.h" },
	};
#endif
	void Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanMove_SetBit(void* Obj)
	{
		((ASCP_Base*)Obj)->bCanMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCP_Base), &Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanMove_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_bFollowPlayer_MetaData[] = {
		{ "Category", "SCPMembers" },
		{ "ModuleRelativePath", "SCP_Base.h" },
	};
#endif
	void Z_Construct_UClass_ASCP_Base_Statics::NewProp_bFollowPlayer_SetBit(void* Obj)
	{
		((ASCP_Base*)Obj)->bFollowPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_bFollowPlayer = { "bFollowPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCP_Base), &Z_Construct_UClass_ASCP_Base_Statics::NewProp_bFollowPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_bFollowPlayer_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_bFollowPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsContained_MetaData[] = {
		{ "Category", "SCPMembers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------- Containment ----------\n" },
#endif
		{ "ModuleRelativePath", "SCP_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- Containment ----------" },
#endif
	};
#endif
	void Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsContained_SetBit(void* Obj)
	{
		((ASCP_Base*)Obj)->bIsContained = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsContained = { "bIsContained", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCP_Base), &Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsContained_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsContained_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsContained_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanEscape_MetaData[] = {
		{ "Category", "SCPMembers" },
		{ "ModuleRelativePath", "SCP_Base.h" },
	};
#endif
	void Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanEscape_SetBit(void* Obj)
	{
		((ASCP_Base*)Obj)->bCanEscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanEscape = { "bCanEscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASCP_Base), &Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanEscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanEscape_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanEscape_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_SanityDrainAmount_MetaData[] = {
		{ "Category", "SCPMembers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------- Other ----------\n" },
#endif
		{ "ModuleRelativePath", "SCP_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- Other ----------" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_SanityDrainAmount = { "SanityDrainAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_Base, SanityDrainAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_SanityDrainAmount_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_SanityDrainAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPMesh_MetaData[] = {
		{ "Category", "SCP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------- Looks/Info ----------\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCP_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- Looks/Info ----------" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPMesh = { "SCPMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCP_Base, SCPMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPMesh_MetaData), Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCP_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsImmortal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_PawnSensingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanOpenDoors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanTeleport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanPhaseThroughWalls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_bFollowPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_bIsContained,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_bCanEscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_SanityDrainAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCP_Base_Statics::NewProp_SCPMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCP_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCP_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCP_Base_Statics::ClassParams = {
		&ASCP_Base::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASCP_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCP_Base_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCP_Base_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASCP_Base()
	{
		if (!Z_Registration_Info_UClass_ASCP_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCP_Base.OuterSingleton, Z_Construct_UClass_ASCP_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASCP_Base.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<ASCP_Base>()
	{
		return ASCP_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCP_Base);
	ASCP_Base::~ASCP_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASCP_Base, ASCP_Base::StaticClass, TEXT("ASCP_Base"), &Z_Registration_Info_UClass_ASCP_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCP_Base), 817975962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_Base_h_4182345120(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_SCP_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
