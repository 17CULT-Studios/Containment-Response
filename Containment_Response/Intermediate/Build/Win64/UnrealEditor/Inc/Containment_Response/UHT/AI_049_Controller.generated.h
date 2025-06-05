// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI_049_Controller.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef CONTAINMENT_RESPONSE_AI_049_Controller_generated_h
#error "AI_049_Controller.generated.h already included, missing '#pragma once' in AI_049_Controller.h"
#endif
#define CONTAINMENT_RESPONSE_AI_049_Controller_generated_h

#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_SPARSE_DATA
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated);


#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_ACCESSORS
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI_049_Controller(); \
	friend struct Z_Construct_UClass_AAI_049_Controller_Statics; \
public: \
	DECLARE_CLASS(AAI_049_Controller, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Containment_Response"), NO_API) \
	DECLARE_SERIALIZER(AAI_049_Controller)


#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_049_Controller(AAI_049_Controller&&); \
	NO_API AAI_049_Controller(const AAI_049_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_049_Controller); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_049_Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAI_049_Controller) \
	NO_API virtual ~AAI_049_Controller();


#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_18_PROLOG
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_SPARSE_DATA \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_ACCESSORS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<class AAI_049_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_AI_049_Controller_h


#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::Wandering) \
	op(EEnemyState::Chasing) \
	op(EEnemyState::Serching) 

enum class EEnemyState : uint8;
template<> struct TIsUEnumClass<EEnemyState> { enum { Value = true }; };
template<> CONTAINMENT_RESPONSE_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
