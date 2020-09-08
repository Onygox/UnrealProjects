// Copyright Lionel Miele-Herndon 2020


#include "ShooterStarterPlayerController.h"


virtual void AShooterStarterPlayerController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner) override
{
    UE_LOG(LogTemp, Error, TEXT("Game Has Ended."));
}