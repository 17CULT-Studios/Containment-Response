// Fill out your copyright notice in the Description page of Project Settings.
#include "CRT_Unit.h"
#include "Components/CapsuleComponent.h"


// Sets default values
ACRT_Unit::ACRT_Unit()
{
	PrimaryActorTick.bCanEverTick = true;

    CollisionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    CollisionCapsule->InitCapsuleSize(42.f, 96.f);
    CollisionCapsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    CollisionCapsule->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
    CollisionCapsule->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
    CollisionCapsule->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    RootComponent = CollisionCapsule;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/Characters/Mannequins/Meshes/SKM_Manny.SKM_Manny"));
	static ConstructorHelpers::FClassFinder<UAnimInstance> Anim(TEXT("/Game/Characters/Mannequins/Animations/ABP_Manny"));
	if (MeshAsset.Succeeded())
	{
		CRTMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshAsset"));
		CRTMesh->SetSkeletalMesh(MeshAsset.Object);
		CRTMesh->SetAnimInstanceClass(Anim.Class);
		CRTMesh->SetOnlyOwnerSee(false);
		CRTMesh->SetOwnerNoSee(true);
		CRTMesh->SetupAttachment(RootComponent);
		CRTMesh->bCastDynamicShadow = true;
		CRTMesh->CastShadow = true;
		CRTMesh->SetRelativeLocation(FVector(0.f, 0.f, -98.f));
		CRTMesh->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
		if (Anim.Succeeded())
		{
			CRTMesh->SetAnimInstanceClass(Anim.Class);
		}
	}

	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
	MovementComponent->UpdatedComponent = RootComponent;
}

void ACRT_Unit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DTime = DeltaTime;
}

void ACRT_Unit::BeginPlay()
{
	Super::BeginPlay();
	LastLocation = GetActorLocation();
}

UPawnMovementComponent* ACRT_Unit::GetMovementComponent() const
{
	return MovementComponent;
}



