// Copyright Lionel Miele-Herndon 2020


#include "ShooterStarterPlayerController.h"


void AShooterStarterPlayerController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner) override
{
    Super::GameHasEnded();
    UE_LOG(LogTemp, Error, TEXT("Game Has Ended."));
}
