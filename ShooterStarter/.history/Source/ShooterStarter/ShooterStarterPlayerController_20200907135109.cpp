// Copyright Lionel Miele-Herndon 2020


#include "ShooterStarterPlayerController.h"


void AShooterStarterPlayerController::GameHasEnded(class AActor* EndGameFocus, bool bIsWinner)
{
    Super::GameHasEnded(class AActor* EndGameFocus, bool bIsWinner);
    UE_LOG(LogTemp, Error, TEXT("Game Has Ended."));
}
