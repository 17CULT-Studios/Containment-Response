// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelGenerator.h"
#include "Engine/World.h"
#include "Engine/StaticMeshActor.h"

ALevelGenerator::ALevelGenerator()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ALevelGenerator::BeginPlay()
{
	Super::BeginPlay();

	CleanUp.Empty();

	RandomStream.Initialize(Seed);

	InitializeGrid();
	InitializeGroundGrid();
	//GenerateDungeon();
	//SpawnDungeon();
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
	int32 Third = NumGenerations / 3;

	// Place the starting room
	SetTile(StartX, StartY, StartTile);

	// Frontier: tiles to expand from this step
	TArray<FIntPoint> Frontier;
	Frontier.Add(FIntPoint(StartX, StartY));

	for (int32 Step = 0; Step < NumGenerations; Step++)
	{
		TArray<FIntPoint> NextFrontier;

		if (Step < Third)
		{
			Bias = ERoomBias::TStraight;
		}
		else if (Step < 2 * Third)
		{
			Bias = ERoomBias::All;
		}
		else
		{
			Bias = ERoomBias::Corners;
		}


		for (const FIntPoint& Coord : Frontier)
		{
			int32 X = Coord.X;
			int32 Y = Coord.Y;

			FRoomTile* Tile = GetTile(X, Y);
			if (!Tile) continue;

			// Local helper for neighbor placement
			auto TryPlace = [&](int32 NX, int32 NY, bool ForceNorth, bool ForceSouth, bool ForceEast, bool ForceWest)
				{
					FRoomTile* Neighbor = GetTile(NX, NY);
					if (!Neighbor || Neighbor->HasAnyDoor()) return; // already filled

					// Create a new room that matches forced doors
					FRoomTile NewTile = MakeRandomRoom(ForceNorth, ForceSouth, ForceEast, ForceWest);
					SetTile(NX, NY, NewTile);
					NextFrontier.Add(FIntPoint(NX, NY));
				};

			// Expand in each direction if this tile has a door
			if (Tile->bNorthDoor) TryPlace(X, Y + 1, false, true, false, false);
			if (Tile->bSouthDoor) TryPlace(X, Y - 1, true, false, false, false);
			if (Tile->bEastDoor)  TryPlace(X + 1, Y, false, false, false, true);
			if (Tile->bWestDoor)  TryPlace(X - 1, Y, false, false, true, false);
		}

		// Move to the next generation frontier
		Frontier = NextFrontier;
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
				FVector Location = FVector(X * TileSize, Y * TileSize, 600);
				FTransform SpawnTransform(Location);
				AStaticMeshActor* RoomActor = GetWorld()->SpawnActor<AStaticMeshActor>(AStaticMeshActor::StaticClass(), SpawnTransform);

				if (RoomActor)
				{
					RoomActor->GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
					RoomActor->GetStaticMeshComponent()->SetStaticMesh(Tile->RoomMesh);
					RoomActor->SetActorScale3D(FVector(1.0f));

					CleanUp.Add(RoomActor);
				}
			}
		}
	}
}

void ALevelGenerator::GenerateLevel()
{
	LevelCleanUp();
	CleanUp.Empty();

	RandomStream.Initialize(Seed);

	InitializeGrid();
	InitializeGroundGrid();
	GenerateDungeon();
	GenerateGround();
	SpawnDungeon();
	SpawnGround();
}

void ALevelGenerator::LevelCleanUp()
{
	for (int32 i = CleanUp.Num() - 1; i >= 0; --i)
	{
		AStaticMeshActor* ActorToDestroy = CleanUp[i];
		ActorToDestroy->Destroy();
		CleanUp.RemoveAt(i);
	}
}

FRoomTile ALevelGenerator::MakeRandomRoom(bool North, bool South, bool East, bool West)
{
	TArray<FRoomTile> Candidates;
	FRoomTile Backup;
	for (const FRoomTile& Def : StructureTiles)
	{
		int numOfDoor = 0;
		if (Def.bNorthDoor) numOfDoor++;
		if (Def.bSouthDoor) numOfDoor++;
		if (Def.bEastDoor) numOfDoor++;
		if (Def.bWestDoor) numOfDoor++;


		switch (Bias)
		{
		case ERoomBias::TStraight:
		{
			if (numOfDoor == 2 || numOfDoor == 3)
			{
				if (North && Def.bNorthDoor == North)
				{
					Candidates.Add(Def);
				}
				if (South && Def.bSouthDoor == South)
				{
					Candidates.Add(Def);
				}
				if (East && Def.bEastDoor == East)
				{
					Candidates.Add(Def);
				}
				if (West && Def.bWestDoor == West)
				{
					Candidates.Add(Def);
				}
			}
			break;
		}
		case ERoomBias::Corners:
		{
			if (numOfDoor == 2)
			{
				if (North && Def.bNorthDoor == North)
				{
					Candidates.Add(Def);
				}
				if (South && Def.bSouthDoor == South)
				{
					Candidates.Add(Def);
				}
				if (East && Def.bEastDoor == East)
				{
					Candidates.Add(Def);
				}
				if (West && Def.bWestDoor == West)
				{
					Candidates.Add(Def);
				}
			}
			break;
		}
		default:
		{
			if (North && Def.bNorthDoor == North)
			{
				Candidates.Add(Def);
			}
			if (South && Def.bSouthDoor == South)
			{
				Candidates.Add(Def);
			}
			if (East && Def.bEastDoor == East)
			{
				Candidates.Add(Def);
			}
			if (West && Def.bWestDoor == West)
			{
				Candidates.Add(Def);
			}
		}
		}
		if (Def.bEastDoor && Def.bNorthDoor && Def.bSouthDoor && Def.bWestDoor)
		{
			Backup = Def;
		}
	}

	if (Candidates.Num() > 0)
	{
		FRoomTile Chosen = Candidates[RandomStream.RandRange(0, Candidates.Num() - 1)];
		return Chosen;
	}

	return Backup;
}

void ALevelGenerator::InitializeGroundGrid()
{
	GroundGrid.SetNum(LevelWidth * LevelHeight);
}

FRoomTile* ALevelGenerator::GetGroundTile(int32 X, int32 Y)
{
	if (X < 0 || X >= LevelWidth || Y < 0 || Y >= LevelHeight)
	{
		return nullptr;
	}

	return &GroundGrid[Y * LevelWidth + X];
}

void ALevelGenerator::SetGroundTile(int32 X, int32 Y, const FRoomTile& Tile)
{
	if (X < 0 || X >= LevelWidth || Y < 0 || Y >= LevelHeight)
	{
		return;
	}
	GroundGrid[Y * LevelWidth + X] = Tile;
}

void ALevelGenerator::GenerateGround()
{
	int32 StartX = LevelWidth / 2;
	int32 StartY = LevelHeight / 2;

	// Place the starting room
	FRoomTile StartGroundTile;
	StartGroundTile.RoomMesh = StartGroundTileMesh;
	SetGroundTile(StartX, StartY, StartGroundTile);

	// Frontier: tiles to expand from this step
	TArray<FIntPoint> Frontier;
	Frontier.Add(FIntPoint(StartX, StartY));

	for (int32 Step = 0; Step < NumGenerations; Step++)
	{
		TArray<FIntPoint> NextFrontier;

		for (const FIntPoint& Coord : Frontier)
		{
			int32 X = Coord.X;
			int32 Y = Coord.Y;

			FRoomTile* Tile = GetGroundTile(X, Y);
			if (!Tile) continue;

			// Local helper for neighbor placement
			auto TryPlace = [&](int32 NX, int32 NY, bool ForceNorth, bool ForceSouth, bool ForceEast, bool ForceWest)
				{
					FRoomTile* Neighbor = GetGroundTile(NX, NY);
					if (!Neighbor || Neighbor->HasAnyDoor()) return; // already filled

					// Create a new room that matches forced doors
					FRoomTile NewTile = GroundTiles[RandomStream.RandRange(0, GroundTiles.Num() - 1)];
					SetGroundTile(NX, NY, NewTile);
					NextFrontier.Add(FIntPoint(NX, NY));
				};

			// Expand in each direction if this tile has a door
			if (!Tile->bNorthDoor) TryPlace(X, Y + 1, false, false, false, false);
			if (!Tile->bSouthDoor) TryPlace(X, Y - 1, false, false, false, false);
			if (!Tile->bEastDoor)  TryPlace(X + 1, Y, false, false, false, false);
			if (!Tile->bWestDoor)  TryPlace(X - 1, Y, false, false, false, false);
		}

		// Move to the next generation frontier
		Frontier = NextFrontier;
	}
}

void ALevelGenerator::SpawnGround()
{
	for (int32 Y = 0; Y < LevelHeight; Y++)
	{
		for (int32 X = 0; X < LevelWidth; X++)
		{
			const FRoomTile* Tile = GetGroundTile(X, Y);
			if (Tile && Tile->RoomMesh)
			{
				FVector Location = FVector(X * TileSize, Y * TileSize, 2000);
				FTransform SpawnTransform(Location);
				AStaticMeshActor* RoomActor = GetWorld()->SpawnActor<AStaticMeshActor>(AStaticMeshActor::StaticClass(), SpawnTransform);

				if (RoomActor)
				{
					RoomActor->GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
					RoomActor->GetStaticMeshComponent()->SetStaticMesh(Tile->RoomMesh);
					RoomActor->SetActorScale3D(FVector(1.0f));

					CleanUp.Add(RoomActor);
				}
			}
		}
	}
}
