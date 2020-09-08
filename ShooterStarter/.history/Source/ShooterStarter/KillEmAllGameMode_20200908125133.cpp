// Copyright Lionel Miele-Herndon 2020


#include "KillEmAllGameMode.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "ShooterAIController.h"


void AKillEmAllGameMode::PawnKilled(APawn* PawnKilled) 
{
    Super::PawnKilled(PawnKilled);

    //UE_LOG(LogTemp, Warning, TEXT("Pawn Killed"));

    APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());

    if (PlayerController != nullptr)
    {
        EndGame(false);
    }

    for(AShooterAIController* AIController : TActorRange<AShooterAIController>(GetWorld()))
    {
        if (!AIController->IsDead())
        {
            return;
        }
        EndGame(true);
    }

}

void AKillEmAllGameMode::EndGame(bool bPlayerHasWon) 
{
    for(AController* Controller : TActorRange<AController>(GetWorld()))
    {
        //check if each controller in the scene is the winner in iteration
        bool bIsWinner = Controller->IsPlayerController() == bPlayerHasWon;
        Controller->GameHasEnded(Controller->GetPawn(), bIsWinner);
    }
}
