// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/Containment_ResponseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContainment_ResponseCharacter() {}
// Cross Module References
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_AContainment_ResponseCharacter();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_AContainment_ResponseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	DEFINE_FUNCTION(AContainment_ResponseCharacter::execGetAtTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAtTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AContainment_ResponseCharacter::execSetAtTable)
	{
		P_GET_UBOOL(Z_Param_bNewAtTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAtTable(Z_Param_bNewAtTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AContainment_ResponseCharacter::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AContainment_ResponseCharacter::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AContainment_ResponseCharacter::execOnRep_PlayerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerName();
		P_NATIVE_END;
	}
	void AContainment_ResponseCharacter::StaticRegisterNativesAContainment_ResponseCharacter()
	{
		UClass* Class = AContainment_ResponseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAtTable", &AContainment_ResponseCharacter::execGetAtTable },
			{ "GetHasRifle", &AContainment_ResponseCharacter::execGetHasRifle },
			{ "OnRep_PlayerName", &AContainment_ResponseCharacter::execOnRep_PlayerName },
			{ "SetAtTable", &AContainment_ResponseCharacter::execSetAtTable },
			{ "SetHasRifle", &AContainment_ResponseCharacter::execSetHasRifle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics
	{
		struct Containment_ResponseCharacter_eventGetAtTable_Parms
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
	void Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Containment_ResponseCharacter_eventGetAtTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Containment_ResponseCharacter_eventGetAtTable_Parms), &Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AContainment_ResponseCharacter, nullptr, "GetAtTable", nullptr, nullptr, Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::Containment_ResponseCharacter_eventGetAtTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::Containment_ResponseCharacter_eventGetAtTable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics
	{
		struct Containment_ResponseCharacter_eventGetHasRifle_Parms
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
	void Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Containment_ResponseCharacter_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Containment_ResponseCharacter_eventGetHasRifle_Parms), &Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for the bool */" },
#endif
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AContainment_ResponseCharacter, nullptr, "GetHasRifle", nullptr, nullptr, Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::Containment_ResponseCharacter_eventGetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::Containment_ResponseCharacter_eventGetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AContainment_ResponseCharacter_OnRep_PlayerName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContainment_ResponseCharacter_OnRep_PlayerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AContainment_ResponseCharacter_OnRep_PlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AContainment_ResponseCharacter, nullptr, "OnRep_PlayerName", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_OnRep_PlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AContainment_ResponseCharacter_OnRep_PlayerName_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AContainment_ResponseCharacter_OnRep_PlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AContainment_ResponseCharacter_OnRep_PlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics
	{
		struct Containment_ResponseCharacter_eventSetAtTable_Parms
		{
			bool bNewAtTable;
		};
		static void NewProp_bNewAtTable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAtTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::NewProp_bNewAtTable_SetBit(void* Obj)
	{
		((Containment_ResponseCharacter_eventSetAtTable_Parms*)Obj)->bNewAtTable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::NewProp_bNewAtTable = { "bNewAtTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Containment_ResponseCharacter_eventSetAtTable_Parms), &Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::NewProp_bNewAtTable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::NewProp_bNewAtTable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AContainment_ResponseCharacter, nullptr, "SetAtTable", nullptr, nullptr, Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::Containment_ResponseCharacter_eventSetAtTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::Containment_ResponseCharacter_eventSetAtTable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics
	{
		struct Containment_ResponseCharacter_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((Containment_ResponseCharacter_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Containment_ResponseCharacter_eventSetHasRifle_Parms), &Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter to set the bool */" },
#endif
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter to set the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AContainment_ResponseCharacter, nullptr, "SetHasRifle", nullptr, nullptr, Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::Containment_ResponseCharacter_eventSetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::Containment_ResponseCharacter_eventSetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AContainment_ResponseCharacter);
	UClass* Z_Construct_UClass_AContainment_ResponseCharacter_NoRegister()
	{
		return AContainment_ResponseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AContainment_ResponseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh3P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh3P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameTagText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NameTagText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAtTable_MetaData[];
#endif
		static void NewProp_bAtTable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAtTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AContainment_ResponseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AContainment_ResponseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AContainment_ResponseCharacter_GetAtTable, "GetAtTable" }, // 3334811139
		{ &Z_Construct_UFunction_AContainment_ResponseCharacter_GetHasRifle, "GetHasRifle" }, // 946526060
		{ &Z_Construct_UFunction_AContainment_ResponseCharacter_OnRep_PlayerName, "OnRep_PlayerName" }, // 3273537356
		{ &Z_Construct_UFunction_AContainment_ResponseCharacter_SetAtTable, "SetAtTable" }, // 3909255747
		{ &Z_Construct_UFunction_AContainment_ResponseCharacter_SetHasRifle, "SetHasRifle" }, // 3670791276
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Containment_ResponseCharacter.h" },
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AContainment_ResponseCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_Mesh1P_MetaData), Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_Mesh1P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_Mesh3P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_Mesh3P = { "Mesh3P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AContainment_ResponseCharacter, Mesh3P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_Mesh3P_MetaData), Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_Mesh3P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AContainment_ResponseCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData), Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AContainment_ResponseCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AContainment_ResponseCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AContainment_ResponseCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_NameTagText_MetaData[] = {
		{ "Category", "NameTag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_NameTagText = { "NameTagText", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AContainment_ResponseCharacter, NameTagText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_NameTagText_MetaData), Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_NameTagText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_PlayerName_MetaData[] = {
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_PlayerName = { "PlayerName", "OnRep_PlayerName", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AContainment_ResponseCharacter, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_PlayerName_MetaData), Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_PlayerName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AContainment_ResponseCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
#endif
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
#endif
	};
#endif
	void Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((AContainment_ResponseCharacter*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AContainment_ResponseCharacter), &Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bHasRifle_MetaData), Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bHasRifle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bAtTable_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Containment_ResponseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bAtTable_SetBit(void* Obj)
	{
		((AContainment_ResponseCharacter*)Obj)->bAtTable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bAtTable = { "bAtTable", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AContainment_ResponseCharacter), &Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bAtTable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bAtTable_MetaData), Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bAtTable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AContainment_ResponseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_Mesh3P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_NameTagText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bHasRifle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainment_ResponseCharacter_Statics::NewProp_bAtTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AContainment_ResponseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AContainment_ResponseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AContainment_ResponseCharacter_Statics::ClassParams = {
		&AContainment_ResponseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AContainment_ResponseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AContainment_ResponseCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AContainment_ResponseCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AContainment_ResponseCharacter()
	{
		if (!Z_Registration_Info_UClass_AContainment_ResponseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AContainment_ResponseCharacter.OuterSingleton, Z_Construct_UClass_AContainment_ResponseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AContainment_ResponseCharacter.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<AContainment_ResponseCharacter>()
	{
		return AContainment_ResponseCharacter::StaticClass();
	}

	void AContainment_ResponseCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PlayerName(TEXT("PlayerName"));

		const bool bIsValid = true
			&& Name_PlayerName == ClassReps[(int32)ENetFields_Private::PlayerName].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AContainment_ResponseCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AContainment_ResponseCharacter);
	AContainment_ResponseCharacter::~AContainment_ResponseCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Containment_ResponseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Containment_ResponseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AContainment_ResponseCharacter, AContainment_ResponseCharacter::StaticClass, TEXT("AContainment_ResponseCharacter"), &Z_Registration_Info_UClass_AContainment_ResponseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AContainment_ResponseCharacter), 4242211516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Containment_ResponseCharacter_h_2422204681(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Containment_ResponseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Containment_ResponseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
