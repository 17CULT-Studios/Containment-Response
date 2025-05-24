// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_AAttachmentBase_NoRegister();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_AWeapon();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	CONTAINMENT_RESPONSE_API UEnum* Z_Construct_UEnum_Containment_Response_EAttachmentSlot();
	CONTAINMENT_RESPONSE_API UScriptStruct* Z_Construct_UScriptStruct_FAttachmentSlot();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttachmentSlot;
	static UEnum* EAttachmentSlot_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttachmentSlot.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttachmentSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Containment_Response_EAttachmentSlot, (UObject*)Z_Construct_UPackage__Script_Containment_Response(), TEXT("EAttachmentSlot"));
		}
		return Z_Registration_Info_UEnum_EAttachmentSlot.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UEnum* StaticEnum<EAttachmentSlot>()
	{
		return EAttachmentSlot_StaticEnum();
	}
	struct Z_Construct_UEnum_Containment_Response_EAttachmentSlot_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Containment_Response_EAttachmentSlot_Statics::Enumerators[] = {
		{ "EAttachmentSlot::Scope", (int64)EAttachmentSlot::Scope },
		{ "EAttachmentSlot::Muzzle", (int64)EAttachmentSlot::Muzzle },
		{ "EAttachmentSlot::Front_Grip", (int64)EAttachmentSlot::Front_Grip },
		{ "EAttachmentSlot::Back_Grip", (int64)EAttachmentSlot::Back_Grip },
		{ "EAttachmentSlot::Magazine", (int64)EAttachmentSlot::Magazine },
		{ "EAttachmentSlot::Stock", (int64)EAttachmentSlot::Stock },
		{ "EAttachmentSlot::Extra", (int64)EAttachmentSlot::Extra },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Containment_Response_EAttachmentSlot_Statics::Enum_MetaDataParams[] = {
		{ "Back_Grip.Name", "EAttachmentSlot::Back_Grip" },
		{ "BlueprintType", "true" },
		{ "Extra.Name", "EAttachmentSlot::Extra" },
		{ "Front_Grip.Name", "EAttachmentSlot::Front_Grip" },
		{ "Magazine.Name", "EAttachmentSlot::Magazine" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "Muzzle.Name", "EAttachmentSlot::Muzzle" },
		{ "Scope.Name", "EAttachmentSlot::Scope" },
		{ "Stock.Name", "EAttachmentSlot::Stock" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Containment_Response_EAttachmentSlot_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Containment_Response,
		nullptr,
		"EAttachmentSlot",
		"EAttachmentSlot",
		Z_Construct_UEnum_Containment_Response_EAttachmentSlot_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Containment_Response_EAttachmentSlot_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Containment_Response_EAttachmentSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Containment_Response_EAttachmentSlot_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Containment_Response_EAttachmentSlot()
	{
		if (!Z_Registration_Info_UEnum_EAttachmentSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttachmentSlot.InnerSingleton, Z_Construct_UEnum_Containment_Response_EAttachmentSlot_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttachmentSlot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttachmentSlot;
class UScriptStruct* FAttachmentSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttachmentSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttachmentSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttachmentSlot, (UObject*)Z_Construct_UPackage__Script_Containment_Response(), TEXT("AttachmentSlot"));
	}
	return Z_Registration_Info_UScriptStruct_AttachmentSlot.OuterSingleton;
}
template<> CONTAINMENT_RESPONSE_API UScriptStruct* StaticStruct<FAttachmentSlot>()
{
	return FAttachmentSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttachmentSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SlotType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SlotType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedAttachment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedAttachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttachmentSlot>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewProp_SlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewProp_SlotType_MetaData[] = {
		{ "Category", "AttachmentSlot" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewProp_SlotType = { "SlotType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentSlot, SlotType), Z_Construct_UEnum_Containment_Response_EAttachmentSlot, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewProp_SlotType_MetaData), Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewProp_SlotType_MetaData) }; // 2305370956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewProp_EquippedAttachment_MetaData[] = {
		{ "Category", "AttachmentSlot" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewProp_EquippedAttachment = { "EquippedAttachment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentSlot, EquippedAttachment), Z_Construct_UClass_AAttachmentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewProp_EquippedAttachment_MetaData), Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewProp_EquippedAttachment_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttachmentSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewProp_SlotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewProp_SlotType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewProp_EquippedAttachment,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttachmentSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
		nullptr,
		&NewStructOps,
		"AttachmentSlot",
		Z_Construct_UScriptStruct_FAttachmentSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlot_Statics::PropPointers),
		sizeof(FAttachmentSlot),
		alignof(FAttachmentSlot),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttachmentSlot_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlot_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAttachmentSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_AttachmentSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttachmentSlot.InnerSingleton, Z_Construct_UScriptStruct_FAttachmentSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttachmentSlot.InnerSingleton;
	}
	DEFINE_FUNCTION(AWeapon::execEquipAttachment)
	{
		P_GET_ENUM(EAttachmentSlot,Z_Param_SlotType);
		P_GET_OBJECT(AAttachmentBase,Z_Param_NewAttachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EquipAttachment(EAttachmentSlot(Z_Param_SlotType),Z_Param_NewAttachment);
		P_NATIVE_END;
	}
	void AWeapon::StaticRegisterNativesAWeapon()
	{
		UClass* Class = AWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipAttachment", &AWeapon::execEquipAttachment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_EquipAttachment_Statics
	{
		struct Weapon_eventEquipAttachment_Parms
		{
			EAttachmentSlot SlotType;
			AAttachmentBase* NewAttachment;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SlotType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SlotType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAttachment;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::NewProp_SlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::NewProp_SlotType = { "SlotType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventEquipAttachment_Parms, SlotType), Z_Construct_UEnum_Containment_Response_EAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 2305370956
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::NewProp_NewAttachment = { "NewAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventEquipAttachment_Parms, NewAttachment), Z_Construct_UClass_AAttachmentBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Weapon_eventEquipAttachment_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Weapon_eventEquipAttachment_Parms), &Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::NewProp_SlotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::NewProp_SlotType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::NewProp_NewAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Equip an attachment */" },
#endif
		{ "ModuleRelativePath", "Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equip an attachment" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "EquipAttachment", nullptr, nullptr, Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::Weapon_eventEquipAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::Weapon_eventEquipAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWeapon_EquipAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentSlots_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentSlots_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentSlots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentSlots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttachmentSlots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_EquipAttachment, "EquipAttachment" }, // 3445545951
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon.h" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Main weapon mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main weapon mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Weapon Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base weapon stats */" },
#endif
		{ "ModuleRelativePath", "Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base weapon stats" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Weapon Stats" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FireRate_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_FireRate_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots_ValueProp = { "AttachmentSlots", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 3643194279
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots_Key_KeyProp = { "AttachmentSlots_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Containment_Response_EAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 2305370956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots_MetaData[] = {
		{ "Category", "Attachments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attachment slots */" },
#endif
		{ "ModuleRelativePath", "Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attachment slots" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots = { "AttachmentSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, AttachmentSlots), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots_MetaData) }; // 2305370956 3643194279
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWeapon()
	{
		if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<AWeapon>()
	{
		return AWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
	AWeapon::~AWeapon() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::EnumInfo[] = {
		{ EAttachmentSlot_StaticEnum, TEXT("EAttachmentSlot"), &Z_Registration_Info_UEnum_EAttachmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2305370956U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::ScriptStructInfo[] = {
		{ FAttachmentSlot::StaticStruct, Z_Construct_UScriptStruct_FAttachmentSlot_Statics::NewStructOps, TEXT("AttachmentSlot"), &Z_Registration_Info_UScriptStruct_AttachmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttachmentSlot), 3643194279U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 901204529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_2305360387(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
