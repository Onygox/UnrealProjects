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
	virtual void GameHasEnded(AActor* EndGameFocus, bool bIsWinner) override;
	
};
