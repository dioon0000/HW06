#include "MovePlatformY.h"

AMovePlatformY::AMovePlatformY()
{
	PrimaryActorTick.bCanEverTick = true; 

	// Component Default Setting
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetupAttachment(SceneRoot);
	
	// Variable Default Setting
	MoveSpeed = 3.0;
	MaxRange = 300.0f;
	RunTime = 0.0f;
}

void AMovePlatformY::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation();
}

void AMovePlatformY::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RunTime+=DeltaTime;

	if(!FMath::IsNearlyZero(MoveSpeed))
	{
		SetActorLocation(FVector(StartLocation.X, StartLocation.Y+(FMath::Sin(RunTime*MoveSpeed)*MaxRange), StartLocation.Z));
	}
}