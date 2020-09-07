// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShooterStarterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERSTARTER_API AShooterStarterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	void PawnKilled(APawn* PawnKilled);
	
};
