// Copyright Lionel Miele-Herndon 2020


#include "ShooterStarterPlayerController.h"


void AShooterStarterPlayerController::GameHasEnded(classAActor* EndGameFocus, bool bIsWinner)
{
    Super::GameHasEnded();
    UE_LOG(LogTemp, Error, TEXT("Game Has Ended."));
}
