// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAttachmentBase;
enum class EAttachmentSlot : uint8;
#ifdef CONTAINMENT_RESPONSE_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define CONTAINMENT_RESPONSE_Weapon_generated_h

#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttachmentSlot_Statics; \
	CONTAINMENT_RESPONSE_API static class UScriptStruct* StaticStruct();


template<> CONTAINMENT_RESPONSE_API UScriptStruct* StaticStruct<struct FAttachmentSlot>();

#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_SPARSE_DATA
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEquipAttachment);


#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_ACCESSORS
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Containment_Response"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon) \
	NO_API virtual ~AWeapon();


#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_38_PROLOG
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_SPARSE_DATA \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_ACCESSORS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_INCLASS_NO_PURE_DECLS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_Weapon_h


#define FOREACH_ENUM_EATTACHMENTSLOT(op) \
	op(EAttachmentSlot::Scope) \
	op(EAttachmentSlot::Muzzle) \
	op(EAttachmentSlot::Front_Grip) \
	op(EAttachmentSlot::Back_Grip) \
	op(EAttachmentSlot::Magazine) \
	op(EAttachmentSlot::Stock) \
	op(EAttachmentSlot::Extra) 

enum class EAttachmentSlot : uint8;
template<> struct TIsUEnumClass<EAttachmentSlot> { enum { Value = true }; };
template<> CONTAINMENT_RESPONSE_API UEnum* StaticEnum<EAttachmentSlot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
