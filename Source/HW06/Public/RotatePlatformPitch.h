#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatePlatformPitch.generated.h"

UCLASS(Blueprintable)
class HW06_API ARotatePlatformPitch : public AActor
{
	GENERATED_BODY()
	
public:	
	ARotatePlatformPitch();

protected:
	// Component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Platform|Component")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Platform|Component")
	UStaticMeshComponent* StaticMeshComp;

	// Variable
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Platform|Variable")
	float RotationSpeed;
	
	// Function
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};