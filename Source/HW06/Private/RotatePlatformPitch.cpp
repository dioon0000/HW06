#include "RotatePlatformPitch.h"

ARotatePlatformPitch::ARotatePlatformPitch()
{
	PrimaryActorTick.bCanEverTick = true;

	// Component Default Setting
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	// Variable Default Setting
	RotationSpeed = 90.0f;
}

void ARotatePlatformPitch::BeginPlay()
{
	Super::BeginPlay();
}

void ARotatePlatformPitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalRotation(FRotator(RotationSpeed*DeltaTime, 0.0f, 0.0f));
}