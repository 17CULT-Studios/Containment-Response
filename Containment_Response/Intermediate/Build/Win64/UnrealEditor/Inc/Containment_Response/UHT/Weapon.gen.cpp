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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
	DEFINE_FUNCTION(AWeapon::execServerEquipAttachment)
	{
		P_GET_ENUM(EAttachmentSlot,Z_Param_SlotType);
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEquipAttachment_Implementation(EAttachmentSlot(Z_Param_SlotType),Z_Param_NewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execEquipAttachment)
	{
		P_GET_ENUM(EAttachmentSlot,Z_Param_SlotType);
		P_GET_OBJECT(UStaticMesh,Z_Param_NewAttachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EquipAttachment(EAttachmentSlot(Z_Param_SlotType),Z_Param_NewAttachment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execOnRep_ExtraMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ExtraMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execOnRep_StockMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_StockMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execOnRep_MagMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MagMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execOnRep_BackGripMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BackGripMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execOnRep_FrontGripMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_FrontGripMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execOnRep_MuzzleMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MuzzleMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execOnRep_ScopeMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ScopeMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execOnRep_WeaponMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WeaponMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execFireGun)
	{
		P_GET_UBOOL(Z_Param_doDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireGun(Z_Param_doDamage);
		P_NATIVE_END;
	}
	struct Weapon_eventServerEquipAttachment_Parms
	{
		EAttachmentSlot SlotType;
		UStaticMesh* NewMesh;
	};
	static FName NAME_AWeapon_ServerEquipAttachment = FName(TEXT("ServerEquipAttachment"));
	void AWeapon::ServerEquipAttachment(EAttachmentSlot SlotType, UStaticMesh* NewMesh)
	{
		Weapon_eventServerEquipAttachment_Parms Parms;
		Parms.SlotType=SlotType;
		Parms.NewMesh=NewMesh;
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_ServerEquipAttachment),&Parms);
	}
	void AWeapon::StaticRegisterNativesAWeapon()
	{
		UClass* Class = AWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipAttachment", &AWeapon::execEquipAttachment },
			{ "FireGun", &AWeapon::execFireGun },
			{ "OnRep_BackGripMesh", &AWeapon::execOnRep_BackGripMesh },
			{ "OnRep_ExtraMesh", &AWeapon::execOnRep_ExtraMesh },
			{ "OnRep_FrontGripMesh", &AWeapon::execOnRep_FrontGripMesh },
			{ "OnRep_MagMesh", &AWeapon::execOnRep_MagMesh },
			{ "OnRep_MuzzleMesh", &AWeapon::execOnRep_MuzzleMesh },
			{ "OnRep_ScopeMesh", &AWeapon::execOnRep_ScopeMesh },
			{ "OnRep_StockMesh", &AWeapon::execOnRep_StockMesh },
			{ "OnRep_WeaponMesh", &AWeapon::execOnRep_WeaponMesh },
			{ "ServerEquipAttachment", &AWeapon::execServerEquipAttachment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_EquipAttachment_Statics
	{
		struct Weapon_eventEquipAttachment_Parms
		{
			EAttachmentSlot SlotType;
			UStaticMesh* NewAttachment;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_EquipAttachment_Statics::NewProp_NewAttachment = { "NewAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventEquipAttachment_Parms, NewAttachment), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
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
	struct Z_Construct_UFunction_AWeapon_FireGun_Statics
	{
		struct Weapon_eventFireGun_Parms
		{
			bool doDamage;
		};
		static void NewProp_doDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_doDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWeapon_FireGun_Statics::NewProp_doDamage_SetBit(void* Obj)
	{
		((Weapon_eventFireGun_Parms*)Obj)->doDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeapon_FireGun_Statics::NewProp_doDamage = { "doDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Weapon_eventFireGun_Parms), &Z_Construct_UFunction_AWeapon_FireGun_Statics::NewProp_doDamage_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_FireGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_FireGun_Statics::NewProp_doDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_FireGun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_FireGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "FireGun", nullptr, nullptr, Z_Construct_UFunction_AWeapon_FireGun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_FireGun_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeapon_FireGun_Statics::Weapon_eventFireGun_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_FireGun_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_FireGun_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_FireGun_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWeapon_FireGun_Statics::Weapon_eventFireGun_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWeapon_FireGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_FireGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_OnRep_BackGripMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_OnRep_BackGripMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnRep_BackGripMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnRep_BackGripMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnRep_BackGripMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnRep_BackGripMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapon_OnRep_BackGripMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnRep_BackGripMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_OnRep_ExtraMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_OnRep_ExtraMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnRep_ExtraMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnRep_ExtraMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnRep_ExtraMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnRep_ExtraMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapon_OnRep_ExtraMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnRep_ExtraMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_OnRep_FrontGripMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_OnRep_FrontGripMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnRep_FrontGripMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnRep_FrontGripMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnRep_FrontGripMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnRep_FrontGripMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapon_OnRep_FrontGripMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnRep_FrontGripMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_OnRep_MagMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_OnRep_MagMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnRep_MagMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnRep_MagMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnRep_MagMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnRep_MagMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapon_OnRep_MagMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnRep_MagMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_OnRep_MuzzleMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_OnRep_MuzzleMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnRep_MuzzleMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnRep_MuzzleMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnRep_MuzzleMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnRep_MuzzleMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapon_OnRep_MuzzleMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnRep_MuzzleMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_OnRep_ScopeMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_OnRep_ScopeMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnRep_ScopeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnRep_ScopeMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnRep_ScopeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnRep_ScopeMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapon_OnRep_ScopeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnRep_ScopeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_OnRep_StockMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_OnRep_StockMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnRep_StockMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnRep_StockMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnRep_StockMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnRep_StockMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapon_OnRep_StockMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnRep_StockMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_OnRep_WeaponMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_OnRep_WeaponMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnRep_WeaponMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnRep_WeaponMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnRep_WeaponMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnRep_WeaponMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapon_OnRep_WeaponMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnRep_WeaponMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_SlotType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SlotType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::NewProp_SlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::NewProp_SlotType = { "SlotType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventServerEquipAttachment_Parms, SlotType), Z_Construct_UEnum_Containment_Response_EAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 2305370956
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventServerEquipAttachment_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::NewProp_SlotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::NewProp_SlotType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "ServerEquipAttachment", nullptr, nullptr, Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::PropPointers), sizeof(Weapon_eventServerEquipAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Weapon_eventServerEquipAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWeapon_ServerEquipAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_ServerEquipAttachment_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScopeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScopeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontGripMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontGripMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackGripMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackGripMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MagMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StockMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StockMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtraMesh;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rep_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rep_WeaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rep_ScopeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rep_ScopeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rep_MuzzleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rep_MuzzleMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rep_FrontGripMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rep_FrontGripMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rep_BackGripMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rep_BackGripMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rep_MagMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rep_MagMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rep_StockMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rep_StockMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rep_ExtraMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rep_ExtraMesh;
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
		{ &Z_Construct_UFunction_AWeapon_EquipAttachment, "EquipAttachment" }, // 2045176691
		{ &Z_Construct_UFunction_AWeapon_FireGun, "FireGun" }, // 3922304028
		{ &Z_Construct_UFunction_AWeapon_OnRep_BackGripMesh, "OnRep_BackGripMesh" }, // 2622877976
		{ &Z_Construct_UFunction_AWeapon_OnRep_ExtraMesh, "OnRep_ExtraMesh" }, // 699018754
		{ &Z_Construct_UFunction_AWeapon_OnRep_FrontGripMesh, "OnRep_FrontGripMesh" }, // 2927536167
		{ &Z_Construct_UFunction_AWeapon_OnRep_MagMesh, "OnRep_MagMesh" }, // 2110378253
		{ &Z_Construct_UFunction_AWeapon_OnRep_MuzzleMesh, "OnRep_MuzzleMesh" }, // 1905422467
		{ &Z_Construct_UFunction_AWeapon_OnRep_ScopeMesh, "OnRep_ScopeMesh" }, // 3254527698
		{ &Z_Construct_UFunction_AWeapon_OnRep_StockMesh, "OnRep_StockMesh" }, // 656653813
		{ &Z_Construct_UFunction_AWeapon_OnRep_WeaponMesh, "OnRep_WeaponMesh" }, // 855836209
		{ &Z_Construct_UFunction_AWeapon_ServerEquipAttachment, "ServerEquipAttachment" }, // 4269373655
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_ScopeMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ScopeMesh = { "ScopeMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, ScopeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_ScopeMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_ScopeMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleMesh = { "MuzzleMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, MuzzleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FrontGripMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FrontGripMesh = { "FrontGripMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, FrontGripMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FrontGripMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_FrontGripMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_BackGripMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BackGripMesh = { "BackGripMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, BackGripMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_BackGripMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_BackGripMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MagMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MagMesh = { "MagMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, MagMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MagMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_MagMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_StockMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_StockMesh = { "StockMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, StockMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_StockMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_StockMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_ExtraMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ExtraMesh = { "ExtraMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, ExtraMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_ExtraMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_ExtraMesh_MetaData) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_WeaponMesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replication\n" },
#endif
		{ "ModuleRelativePath", "Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replication" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_WeaponMesh = { "Rep_WeaponMesh", "OnRep_WeaponMesh", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Rep_WeaponMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_WeaponMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_WeaponMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_ScopeMesh_MetaData[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_ScopeMesh = { "Rep_ScopeMesh", "OnRep_ScopeMesh", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Rep_ScopeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_ScopeMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_ScopeMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_MuzzleMesh_MetaData[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_MuzzleMesh = { "Rep_MuzzleMesh", "OnRep_MuzzleMesh", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Rep_MuzzleMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_MuzzleMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_MuzzleMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_FrontGripMesh_MetaData[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_FrontGripMesh = { "Rep_FrontGripMesh", "OnRep_FrontGripMesh", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Rep_FrontGripMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_FrontGripMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_FrontGripMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_BackGripMesh_MetaData[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_BackGripMesh = { "Rep_BackGripMesh", "OnRep_BackGripMesh", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Rep_BackGripMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_BackGripMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_BackGripMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_MagMesh_MetaData[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_MagMesh = { "Rep_MagMesh", "OnRep_MagMesh", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Rep_MagMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_MagMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_MagMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_StockMesh_MetaData[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_StockMesh = { "Rep_StockMesh", "OnRep_StockMesh", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Rep_StockMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_StockMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_StockMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_ExtraMesh_MetaData[] = {
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_ExtraMesh = { "Rep_ExtraMesh", "OnRep_ExtraMesh", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Rep_ExtraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_ExtraMesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_ExtraMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ScopeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FrontGripMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BackGripMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MagMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_StockMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ExtraMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AttachmentSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_ScopeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_MuzzleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_FrontGripMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_BackGripMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_MagMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_StockMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Rep_ExtraMesh,
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

	void AWeapon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Rep_WeaponMesh(TEXT("Rep_WeaponMesh"));
		static const FName Name_Rep_ScopeMesh(TEXT("Rep_ScopeMesh"));
		static const FName Name_Rep_MuzzleMesh(TEXT("Rep_MuzzleMesh"));
		static const FName Name_Rep_FrontGripMesh(TEXT("Rep_FrontGripMesh"));
		static const FName Name_Rep_BackGripMesh(TEXT("Rep_BackGripMesh"));
		static const FName Name_Rep_MagMesh(TEXT("Rep_MagMesh"));
		static const FName Name_Rep_StockMesh(TEXT("Rep_StockMesh"));
		static const FName Name_Rep_ExtraMesh(TEXT("Rep_ExtraMesh"));

		const bool bIsValid = true
			&& Name_Rep_WeaponMesh == ClassReps[(int32)ENetFields_Private::Rep_WeaponMesh].Property->GetFName()
			&& Name_Rep_ScopeMesh == ClassReps[(int32)ENetFields_Private::Rep_ScopeMesh].Property->GetFName()
			&& Name_Rep_MuzzleMesh == ClassReps[(int32)ENetFields_Private::Rep_MuzzleMesh].Property->GetFName()
			&& Name_Rep_FrontGripMesh == ClassReps[(int32)ENetFields_Private::Rep_FrontGripMesh].Property->GetFName()
			&& Name_Rep_BackGripMesh == ClassReps[(int32)ENetFields_Private::Rep_BackGripMesh].Property->GetFName()
			&& Name_Rep_MagMesh == ClassReps[(int32)ENetFields_Private::Rep_MagMesh].Property->GetFName()
			&& Name_Rep_StockMesh == ClassReps[(int32)ENetFields_Private::Rep_StockMesh].Property->GetFName()
			&& Name_Rep_ExtraMesh == ClassReps[(int32)ENetFields_Private::Rep_ExtraMesh].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWeapon"));
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
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 2359166011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_3570613666(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
