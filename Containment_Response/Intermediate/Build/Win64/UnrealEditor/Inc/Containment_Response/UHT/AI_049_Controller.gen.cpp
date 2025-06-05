// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/AI_049_Controller.h"
#include "Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_049_Controller() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_AAI_049_Controller();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_AAI_049_Controller_NoRegister();
	CONTAINMENT_RESPONSE_API UEnum* Z_Construct_UEnum_Containment_Response_EEnemyState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
	static UEnum* EEnemyState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Containment_Response_EEnemyState, (UObject*)Z_Construct_UPackage__Script_Containment_Response(), TEXT("EEnemyState"));
		}
		return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UEnum* StaticEnum<EEnemyState>()
	{
		return EEnemyState_StaticEnum();
	}
	struct Z_Construct_UEnum_Containment_Response_EEnemyState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Containment_Response_EEnemyState_Statics::Enumerators[] = {
		{ "EEnemyState::Wandering", (int64)EEnemyState::Wandering },
		{ "EEnemyState::Chasing", (int64)EEnemyState::Chasing },
		{ "EEnemyState::Serching", (int64)EEnemyState::Serching },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Containment_Response_EEnemyState_Statics::Enum_MetaDataParams[] = {
		{ "Chasing.Name", "EEnemyState::Chasing" },
		{ "ModuleRelativePath", "AI_049_Controller.h" },
		{ "Serching.Name", "EEnemyState::Serching" },
		{ "Wandering.Name", "EEnemyState::Wandering" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Containment_Response_EEnemyState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Containment_Response,
		nullptr,
		"EEnemyState",
		"EEnemyState",
		Z_Construct_UEnum_Containment_Response_EEnemyState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Containment_Response_EEnemyState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Containment_Response_EEnemyState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Containment_Response_EEnemyState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Containment_Response_EEnemyState()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_Containment_Response_EEnemyState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
	}
	DEFINE_FUNCTION(AAI_049_Controller::execOnTargetPerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	void AAI_049_Controller::StaticRegisterNativesAAI_049_Controller()
	{
		UClass* Class = AAI_049_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetPerceptionUpdated", &AAI_049_Controller::execOnTargetPerceptionUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics
	{
		struct AI_049_Controller_eventOnTargetPerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AI_049_Controller_eventOnTargetPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AI_049_Controller_eventOnTargetPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 1355587946
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI_049_Controller.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_049_Controller, nullptr, "OnTargetPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::AI_049_Controller_eventOnTargetPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::AI_049_Controller_eventOnTargetPerceptionUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAI_049_Controller);
	UClass* Z_Construct_UClass_AAI_049_Controller_NoRegister()
	{
		return AAI_049_Controller::StaticClass();
	}
	struct Z_Construct_UClass_AAI_049_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_049_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_049_Controller_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAI_049_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI_049_Controller_OnTargetPerceptionUpdated, "OnTargetPerceptionUpdated" }, // 1938635646
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_049_Controller_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_049_Controller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI_049_Controller.h" },
		{ "ModuleRelativePath", "AI_049_Controller.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_049_Controller_Statics::NewProp_PerceptionComp_MetaData[] = {
		{ "Category", "AI_049_Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Perception\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI_049_Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perception" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_049_Controller_Statics::NewProp_PerceptionComp = { "PerceptionComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_049_Controller, PerceptionComp), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_049_Controller_Statics::NewProp_PerceptionComp_MetaData), Z_Construct_UClass_AAI_049_Controller_Statics::NewProp_PerceptionComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_049_Controller_Statics::NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI_049_Controller" },
		{ "ModuleRelativePath", "AI_049_Controller.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_049_Controller_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAI_049_Controller, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_049_Controller_Statics::NewProp_SightConfig_MetaData), Z_Construct_UClass_AAI_049_Controller_Statics::NewProp_SightConfig_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_049_Controller_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_049_Controller_Statics::NewProp_PerceptionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_049_Controller_Statics::NewProp_SightConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_049_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_049_Controller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAI_049_Controller_Statics::ClassParams = {
		&AAI_049_Controller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAI_049_Controller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_049_Controller_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_049_Controller_Statics::Class_MetaDataParams), Z_Construct_UClass_AAI_049_Controller_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_049_Controller_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAI_049_Controller()
	{
		if (!Z_Registration_Info_UClass_AAI_049_Controller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAI_049_Controller.OuterSingleton, Z_Construct_UClass_AAI_049_Controller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAI_049_Controller.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<AAI_049_Controller>()
	{
		return AAI_049_Controller::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_049_Controller);
	AAI_049_Controller::~AAI_049_Controller() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_Statics::EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2768457893U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAI_049_Controller, AAI_049_Controller::StaticClass, TEXT("AAI_049_Controller"), &Z_Registration_Info_UClass_AAI_049_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAI_049_Controller), 3709182584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_1189001606(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
