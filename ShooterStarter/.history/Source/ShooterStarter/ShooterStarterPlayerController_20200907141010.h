// Copyright Lionel Miele-Herndon 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterStarterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERSTARTER_API AShooterStarterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void GameHasEnded(class AActor* EndGameFocus, bool bIsWinner) override;

private:
	UPROPERTY(EditAnywhere)

	
	UPROPERTY(EditAnywhere)
	float RestartDelay = 5.0;

	FTimerHandle RestartTimer;
	
};
