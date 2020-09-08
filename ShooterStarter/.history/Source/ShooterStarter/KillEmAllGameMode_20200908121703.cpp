// Copyright Lionel Miele-Herndon 2020


#include "KillEmAllGameMode.h"


void AKillEmAllGameMode::PawnKilled(APawn* PawnKilled) 
{
    // Super::PawnKilled();

    //UE_LOG(LogTemp, Warning, TEXT("Pawn Killed"));

    APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());

    if (PlayerController != nullptr)
    {
        PlayerController->GameHasEnded(nullptr, false);
    }
}

void AKillEmAllGameMode::EndGame(bool bPlayerHasWon) 
{
    
}
