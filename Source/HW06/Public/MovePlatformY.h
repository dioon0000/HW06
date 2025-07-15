#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovePlatformY.generated.h"

UCLASS(Blueprintable)
class HW06_API AMovePlatformY : public AActor
{
	GENERATED_BODY()
	
public:	
	AMovePlatformY();

protected:
	// Component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Platform|Component")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Platform|Component")
	UStaticMeshComponent* StaticMeshComp;

	// Variable
	FVector StartLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Platform|Variable")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Platform|Variable")
	float MaxRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Platform|Variable")
	float RunTime;

	// Function
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
