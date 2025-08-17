// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Containment_Response/LevelGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelGenerator() {}
// Cross Module References
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ALevelGenerator();
	CONTAINMENT_RESPONSE_API UClass* Z_Construct_UClass_ALevelGenerator_NoRegister();
	CONTAINMENT_RESPONSE_API UScriptStruct* Z_Construct_UScriptStruct_FRoomTile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Containment_Response();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoomTile;
class UScriptStruct* FRoomTile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoomTile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoomTile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoomTile, (UObject*)Z_Construct_UPackage__Script_Containment_Response(), TEXT("RoomTile"));
	}
	return Z_Registration_Info_UScriptStruct_RoomTile.OuterSingleton;
}
template<> CONTAINMENT_RESPONSE_API UScriptStruct* StaticStruct<FRoomTile>()
{
	return FRoomTile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRoomTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNorthDoor_MetaData[];
#endif
		static void NewProp_bNorthDoor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNorthDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSouthDoor_MetaData[];
#endif
		static void NewProp_bSouthDoor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSouthDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEastDoor_MetaData[];
#endif
		static void NewProp_bEastDoor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEastDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWestDoor_MetaData[];
#endif
		static void NewProp_bWestDoor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWestDoor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoomTile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoomTile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_RoomMesh_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_RoomMesh = { "RoomMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomTile, RoomMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_RoomMesh_MetaData), Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_RoomMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bNorthDoor_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bNorthDoor_SetBit(void* Obj)
	{
		((FRoomTile*)Obj)->bNorthDoor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bNorthDoor = { "bNorthDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoomTile), &Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bNorthDoor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bNorthDoor_MetaData), Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bNorthDoor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bSouthDoor_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bSouthDoor_SetBit(void* Obj)
	{
		((FRoomTile*)Obj)->bSouthDoor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bSouthDoor = { "bSouthDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoomTile), &Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bSouthDoor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bSouthDoor_MetaData), Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bSouthDoor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bEastDoor_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bEastDoor_SetBit(void* Obj)
	{
		((FRoomTile*)Obj)->bEastDoor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bEastDoor = { "bEastDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoomTile), &Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bEastDoor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bEastDoor_MetaData), Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bEastDoor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bWestDoor_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bWestDoor_SetBit(void* Obj)
	{
		((FRoomTile*)Obj)->bWestDoor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bWestDoor = { "bWestDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoomTile), &Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bWestDoor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bWestDoor_MetaData), Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bWestDoor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoomTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_RoomMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bNorthDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bSouthDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bEastDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomTile_Statics::NewProp_bWestDoor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoomTile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
		nullptr,
		&NewStructOps,
		"RoomTile",
		Z_Construct_UScriptStruct_FRoomTile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTile_Statics::PropPointers),
		sizeof(FRoomTile),
		alignof(FRoomTile),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoomTile_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTile_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRoomTile()
	{
		if (!Z_Registration_Info_UScriptStruct_RoomTile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoomTile.InnerSingleton, Z_Construct_UScriptStruct_FRoomTile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RoomTile.InnerSingleton;
	}
	void ALevelGenerator::StaticRegisterNativesALevelGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelGenerator);
	UClass* Z_Construct_UClass_ALevelGenerator_NoRegister()
	{
		return ALevelGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ALevelGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumGenerations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumGenerations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Grid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Grid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Containment_Response,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelGenerator.h" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelGenerator_Statics::NewProp_LevelWidth_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_LevelWidth = { "LevelWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, LevelWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::NewProp_LevelWidth_MetaData), Z_Construct_UClass_ALevelGenerator_Statics::NewProp_LevelWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelGenerator_Statics::NewProp_LevelHeight_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_LevelHeight = { "LevelHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, LevelHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::NewProp_LevelHeight_MetaData), Z_Construct_UClass_ALevelGenerator_Statics::NewProp_LevelHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelGenerator_Statics::NewProp_NumGenerations_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_NumGenerations = { "NumGenerations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, NumGenerations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::NewProp_NumGenerations_MetaData), Z_Construct_UClass_ALevelGenerator_Statics::NewProp_NumGenerations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelGenerator_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::NewProp_TileSize_MetaData), Z_Construct_UClass_ALevelGenerator_Statics::NewProp_TileSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelGenerator_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RNG Seed\n" },
#endif
		{ "ModuleRelativePath", "LevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RNG Seed" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::NewProp_Seed_MetaData), Z_Construct_UClass_ALevelGenerator_Statics::NewProp_Seed_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_RoomMeshes_Inner = { "RoomMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelGenerator_Statics::NewProp_RoomMeshes_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh pool to pick random rooms from\n" },
#endif
		{ "ModuleRelativePath", "LevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh pool to pick random rooms from" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_RoomMeshes = { "RoomMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, RoomMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::NewProp_RoomMeshes_MetaData), Z_Construct_UClass_ALevelGenerator_Statics::NewProp_RoomMeshes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_Grid_Inner = { "Grid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoomTile, METADATA_PARAMS(0, nullptr) }; // 2049231875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelGenerator_Statics::NewProp_Grid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Our grid\n" },
#endif
		{ "ModuleRelativePath", "LevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Our grid" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, Grid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::NewProp_Grid_MetaData), Z_Construct_UClass_ALevelGenerator_Statics::NewProp_Grid_MetaData) }; // 2049231875
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_LevelWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_LevelHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_NumGenerations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_RoomMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_RoomMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_Grid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_Grid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelGenerator_Statics::ClassParams = {
		&ALevelGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALevelGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelGenerator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALevelGenerator()
	{
		if (!Z_Registration_Info_UClass_ALevelGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelGenerator.OuterSingleton, Z_Construct_UClass_ALevelGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelGenerator.OuterSingleton;
	}
	template<> CONTAINMENT_RESPONSE_API UClass* StaticClass<ALevelGenerator>()
	{
		return ALevelGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelGenerator);
	ALevelGenerator::~ALevelGenerator() {}
	struct Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_Statics::ScriptStructInfo[] = {
		{ FRoomTile::StaticStruct, Z_Construct_UScriptStruct_FRoomTile_Statics::NewStructOps, TEXT("RoomTile"), &Z_Registration_Info_UScriptStruct_RoomTile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoomTile), 2049231875U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelGenerator, ALevelGenerator::StaticClass, TEXT("ALevelGenerator"), &Z_Registration_Info_UClass_ALevelGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelGenerator), 4064116326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_2650745843(TEXT("/Script/Containment_Response"),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_smit2129_Desktop_Containment_Response_Containment_Response_Source_Containment_Response_LevelGenerator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
