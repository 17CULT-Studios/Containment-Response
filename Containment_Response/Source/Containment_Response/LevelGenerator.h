// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/StaticMeshActor.h"
#include "LevelGenerator.generated.h"

USTRUCT(BlueprintType)
struct FRoomTile
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room")
    UStaticMesh* RoomMesh = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room")
    bool bNorthDoor = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room")
    bool bSouthDoor = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room")
    bool bEastDoor = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room")
    bool bWestDoor = false;

    bool HasAnyDoor() const
    {
        return bNorthDoor || bSouthDoor || bEastDoor || bWestDoor;
    }
};

UENUM(BlueprintType)
enum class ERoomBias
{
    All,
    TStraight,
    Corners
};

UCLASS(Blueprintable)
class CONTAINMENT_RESPONSE_API ALevelGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	ALevelGenerator();

protected:
	virtual void BeginPlay() override;

public:	
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    int32 LevelWidth = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    int32 LevelHeight = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    int32 NumGenerations = 25;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    float TileSize = 1200.f;
	
    // RNG Seed
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    int32 Seed = 12345;

    // Mesh pool to pick random rooms from
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    FRoomTile StartTile;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    TArray<FRoomTile> StructureTiles;

    // Our grid
    UPROPERTY()
    TArray<FRoomTile> Grid;
private:
    FRandomStream RandomStream;

    ERoomBias Bias = ERoomBias::All;

public:
    void InitializeGrid();
    FRoomTile* GetTile(int32 X, int32 Y);
    void SetTile(int32 X, int32 Y, const FRoomTile& Tile);
    void GenerateDungeon();
    void SpawnDungeon();

    UFUNCTION(BlueprintCallable, Category = "MyFunctions")
    void GenerateLevel();

    UFUNCTION(BlueprintCallable, Category = "MyFunctions")
    void LevelCleanUp();

    TArray<AStaticMeshActor*> CleanUp;

    // Helper for random room creation
    FRoomTile MakeRandomRoom(bool North = false, bool South = false, bool East = false, bool West = false);
};
