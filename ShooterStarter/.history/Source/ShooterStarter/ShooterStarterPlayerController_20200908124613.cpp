// Copyright Lionel Miele-Herndon 2020


#include "ShooterStarterPlayerController.h"
#include "TimerManager.h"
#include "Blueprint/UserWidget.h"


void AShooterStarterPlayerController::GameHasEnded(class AActor* EndGameFocus, bool bIsWinner)
{
    Super::GameHasEnded(EndGameFocus, bIsWinner);
    UE_LOG(LogTemp, Error, TEXT("Game Has Ended."));

    UUserWidget* EndScreen = nullptr;
    if (bIsWinner)
    {
        EndScreen = CreateWidget(this, WinScreenClass);
        // if (WinScreen != nullptr)
        // {
        //     WinScreen->AddToViewport();
        // }
    }
    else
    {
        EndScreen = CreateWidget(this, LoseScreenClass);
        // if (LoseScreen != nullptr)
        // {
        //     LoseScreen->AddToViewport();
        // }
    }
if (WinScreen != nullptr)
        {
            WinScreen->AddToViewport();
        }
    GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);
}