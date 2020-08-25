// Copyright Lionel Miele-Herndon 2020

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERSTARTER_API AShooterAIController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay();

public:
	virtual void Tick(float DeltaSeconds) override;

private:
	APawn* PlayerPawn;

	// UPROPERTY(EditAnywhere)
	// float AcceptanceRadius = 200;
	
	UPROPERTY(EditAnywhere)
	class UBehaviorTreee AIBehavior;
	
};
