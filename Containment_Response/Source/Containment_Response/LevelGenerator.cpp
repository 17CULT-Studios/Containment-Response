// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelGenerator.h"
#include "Engine/World.h"
#include "Engine/StaticMeshActor.h"

// Sets default values
ALevelGenerator::ALevelGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ALevelGenerator::BeginPlay()
{
	Super::BeginPlay();

	RandomStream.Initialize(Seed);

	InitializeGrid();
	GenerateDungeon();
	SpawnDungeon();
	
}

void ALevelGenerator::InitializeGrid()
{
	Grid.SetNum(LevelWidth * LevelHeight);
}

FRoomTile* ALevelGenerator::GetTile(int32 X, int32 Y)
{
	if (X < 0 || X >= LevelWidth || Y < 0 || Y >= LevelHeight)
	{
		return nullptr;
	}

	return &Grid[Y * LevelWidth + X];
}

void ALevelGenerator::SetTile(int32 X, int32 Y, const FRoomTile& Tile)
{
	if (X < 0 || X >= LevelWidth || Y < 0 || Y >= LevelHeight)
	{
		return;
	}
	Grid[Y * LevelWidth + X] = Tile;
}

void ALevelGenerator::GenerateDungeon()
{
	int32 StartX = LevelWidth / 2;
	int32 StartY = LevelHeight / 2;

	FRoomTile StartRoom = MakeRandomRoom();
	SetTile(StartX, StartY, StartRoom);

	for (int32 Step = 0; Step < NumGenerations; Step++)
	{
		for (int32 Y = 0; Y < LevelHeight; Y++)
		{
			for (int32 X = 0; X < LevelWidth; X++)
			{
				FRoomTile* Tile = GetTile(X, Y);
				if (!Tile || !Tile->HasAnyDoor())
				{
					continue;
				}

				if (Tile->bNorthDoor)
				{
					FRoomTile* Neighbor = GetTile(X, Y + 1);
					if (Neighbor && !Neighbor->HasAnyDoor())
					{
						SetTile(X, Y + 1, MakeRandomRoom(true, false, false, false));
					}
				}

				if (Tile->bSouthDoor)
				{
					FRoomTile* Neighbor = GetTile(X, Y - 1);
					if (Neighbor && !Neighbor->HasAnyDoor())
					{
						SetTile(X, Y + 1, MakeRandomRoom(false, true, false, false));
					}
				}

				if (Tile->bEastDoor)
				{
					FRoomTile* Neighbor = GetTile(X + 1, Y);
					if (Neighbor && !Neighbor->HasAnyDoor())
					{
						SetTile(X, Y + 1, MakeRandomRoom(false, false, true, false));
					}
				}

				if (Tile->bWestDoor)
				{
					FRoomTile* Neighbor = GetTile(X - 1, Y);
					if (Neighbor && !Neighbor->HasAnyDoor())
					{
						SetTile(X, Y + 1, MakeRandomRoom(false, false, false, true));
					}
				}
			}
		}
	}
}

void ALevelGenerator::SpawnDungeon()
{
	for (int32 Y = 0; Y < LevelHeight; Y++)
	{
		for (int32 X = 0; X < LevelWidth; X++)
		{
			const FRoomTile* Tile = GetTile(X, Y);
			if (Tile && Tile->RoomMesh)
			{
				FVector Location = FVector(X * TileSize, Y * TileSize, 0);
				FTransform SpawnTransform(Location);
				GetWorld()->SpawnActor<AStaticMeshActor>(AStaticMeshActor::StaticClass(), SpawnTransform);
			}
		}
	}
}

FRoomTile ALevelGenerator::MakeRandomRoom(bool ForceNorth, bool ForceSouth, bool ForceEast, bool ForceWest)
{
	FRoomTile NewRoom;

	if (RoomMeshes.Num() > 0)
	{
		NewRoom.RoomMesh = RoomMeshes[RandomStream.RandRange(0, RoomMeshes.Num() - 1)];
	}

	NewRoom.bNorthDoor = ForceNorth || (RandomStream.FRand() < 0.4f); // 40% chance
	NewRoom.bSouthDoor = ForceSouth || (RandomStream.FRand() < 0.4f);
	NewRoom.bEastDoor = ForceEast || (RandomStream.FRand() < 0.4f);
	NewRoom.bWestDoor = ForceWest || (RandomStream.FRand() < 0.4f);

	return NewRoom;
}

