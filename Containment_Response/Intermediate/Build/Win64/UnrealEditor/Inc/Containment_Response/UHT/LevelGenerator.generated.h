// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTAINMENT_RESPONSE_LevelGenerator_generated_h
#error "LevelGenerator.generated.h already included, missing '#pragma once' in LevelGenerator.h"
#endif
#define CONTAINMENT_RESPONSE_LevelGenerator_generated_h

#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoomTile_Statics; \
	CONTAINMENT_RESPONSE_API static class UScriptStruct* StaticStruct();


template<> CONTAINMENT_RESPONSE_API UScriptStruct* StaticStruct<struct FRoomTile>();

#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_SPARSE_DATA
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLevelCleanUp); \
	DECLARE_FUNCTION(execGenerateLevel);


#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_ACCESSORS
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelGenerator(); \
	friend struct Z_Construct_UClass_ALevelGenerator_Statics; \
public: \
	DECLARE_CLASS(ALevelGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Containment_Response"), NO_API) \
	DECLARE_SERIALIZER(ALevelGenerator)


#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelGenerator(ALevelGenerator&&); \
	NO_API ALevelGenerator(const ALevelGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelGenerator) \
	NO_API virtual ~ALevelGenerator();


#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_45_PROLOG
#define FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_SPARSE_DATA \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_ACCESSORS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_INCLASS_NO_PURE_DECLS \
	FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<class ALevelGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h


#define FOREACH_ENUM_EROOMBIAS(op) \
	op(ERoomBias::All) \
	op(ERoomBias::TStraight) \
	op(ERoomBias::Corners) 

enum class ERoomBias;
template<> struct TIsUEnumClass<ERoomBias> { enum { Value = true }; };
template<> CONTAINMENT_RESPONSE_API UEnum* StaticEnum<ERoomBias>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
