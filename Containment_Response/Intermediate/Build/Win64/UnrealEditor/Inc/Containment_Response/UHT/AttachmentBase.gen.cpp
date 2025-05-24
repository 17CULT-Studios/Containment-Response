// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/AttachmentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttachmentBase() {}
// Cross Module References
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_AAttachmentBase();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_AAttachmentBase_NoRegister();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	CONTAINMENT_RESPONSE_API UEnum* Z_Construct_UEnum_Containment_Response_EAttachmentSlot();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	DEFINE_FUNCTION(AAttachmentBase::execOnEquip)
	{
		P_GET_OBJECT(AWeapon,Z_Param_Weapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquip(Z_Param_Weapon);
		P_NATIVE_END;
	}
	void AAttachmentBase::StaticRegisterNativesAAttachmentBase()
	{
		UClass* Class = AAttachmentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEquip", &AAttachmentBase::execOnEquip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics
	{
		struct AttachmentBase_eventOnEquip_Parms
		{
			AWeapon* Weapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttachmentBase_eventOnEquip_Parms, Weapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this attachment is equipped */" },
#endif
		{ "ModuleRelativePath", "AttachmentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this attachment is equipped" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttachmentBase, nullptr, "OnEquip", nullptr, nullptr, Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::AttachmentBase_eventOnEquip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::AttachmentBase_eventOnEquip_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAttachmentBase_OnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAttachmentBase_OnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAttachmentBase);
	UClass* Z_Construct_UClass_AAttachmentBase_NoRegister()
	{
		return AAttachmentBase::StaticClass();
	}
	struct Z_Construct_UClass_AAttachmentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachmentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRateModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRateModifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SlotType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SlotType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAttachmentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAttachmentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAttachmentBase_OnEquip, "OnEquip" }, // 3815299811
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttachmentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AttachmentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AttachmentBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttachmentBase_Statics::NewProp_AttachmentName_MetaData[] = {
		{ "Category", "Attachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of this attachment */" },
#endif
		{ "ModuleRelativePath", "AttachmentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of this attachment" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAttachmentBase_Statics::NewProp_AttachmentName = { "AttachmentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttachmentBase, AttachmentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentBase_Statics::NewProp_AttachmentName_MetaData), Z_Construct_UClass_AAttachmentBase_Statics::NewProp_AttachmentName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttachmentBase_Statics::NewProp_AttachmentMesh_MetaData[] = {
		{ "Category", "Attachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Static mesh for visual representation */" },
#endif
		{ "ModuleRelativePath", "AttachmentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static mesh for visual representation" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAttachmentBase_Statics::NewProp_AttachmentMesh = { "AttachmentMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttachmentBase, AttachmentMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentBase_Statics::NewProp_AttachmentMesh_MetaData), Z_Construct_UClass_AAttachmentBase_Statics::NewProp_AttachmentMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttachmentBase_Statics::NewProp_DamageModifier_MetaData[] = {
		{ "Category", "Attachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional: Modify weapon stats (damage, fire rate, etc.) */" },
#endif
		{ "ModuleRelativePath", "AttachmentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional: Modify weapon stats (damage, fire rate, etc.)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttachmentBase_Statics::NewProp_DamageModifier = { "DamageModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttachmentBase, DamageModifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentBase_Statics::NewProp_DamageModifier_MetaData), Z_Construct_UClass_AAttachmentBase_Statics::NewProp_DamageModifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttachmentBase_Statics::NewProp_FireRateModifier_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "AttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttachmentBase_Statics::NewProp_FireRateModifier = { "FireRateModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttachmentBase, FireRateModifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentBase_Statics::NewProp_FireRateModifier_MetaData), Z_Construct_UClass_AAttachmentBase_Statics::NewProp_FireRateModifier_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAttachmentBase_Statics::NewProp_SlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttachmentBase_Statics::NewProp_SlotType_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "AttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAttachmentBase_Statics::NewProp_SlotType = { "SlotType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttachmentBase, SlotType), Z_Construct_UEnum_Containment_Response_EAttachmentSlot, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentBase_Statics::NewProp_SlotType_MetaData), Z_Construct_UClass_AAttachmentBase_Statics::NewProp_SlotType_MetaData) }; // 2305370956
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttachmentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttachmentBase_Statics::NewProp_AttachmentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttachmentBase_Statics::NewProp_AttachmentMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttachmentBase_Statics::NewProp_DamageModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttachmentBase_Statics::NewProp_FireRateModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttachmentBase_Statics::NewProp_SlotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttachmentBase_Statics::NewProp_SlotType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAttachmentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttachmentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAttachmentBase_Statics::ClassParams = {
		&AAttachmentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAttachmentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAttachmentBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachmentBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAttachmentBase()
	{
		if (!Z_Registration_Info_UClass_AAttachmentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAttachmentBase.OuterSingleton, Z_Construct_UClass_AAttachmentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAttachmentBase.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<AAttachmentBase>()
	{
		return AAttachmentBase::StaticClass();
	}
	AAttachmentBase::AAttachmentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAttachmentBase);
	AAttachmentBase::~AAttachmentBase() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AttachmentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AttachmentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAttachmentBase, AAttachmentBase::StaticClass, TEXT("AAttachmentBase"), &Z_Registration_Info_UClass_AAttachmentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttachmentBase), 2967083204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AttachmentBase_h_1017003828(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AttachmentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AttachmentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
