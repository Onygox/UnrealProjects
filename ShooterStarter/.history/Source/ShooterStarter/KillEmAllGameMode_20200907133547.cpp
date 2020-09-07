// Copyright Lionel Miele-Herndon 2020


#include "KillEmAllGameMode.h"


void AKillEmAllGameMode::PawnKilled(APawn* PawnKilled) 
{
    Super::PawnKilled();
    //UE_LOG(LogTemp, Warning, TEXT("Pawn Killed"));
}
