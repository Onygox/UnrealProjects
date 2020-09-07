// Copyright Lionel Miele-Herndon 2020


#include "ShooterStarterPlayerController.h"
#include "TimerManager.h"
#include "Blueprint/UserWidget.h"


void AShooterStarterPlayerController::GameHasEnded(class AActor* EndGameFocus, bool bIsWinner)
{
    Super::GameHasEnded(EndGameFocus, bIsWinner);
    UE_LOG(LogTemp, Error, TEXT("Game Has Ended."));

    CreateWidget(this, LoseScreenClass);

    GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);
}
