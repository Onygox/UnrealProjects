// Copyright Lionel Miele-Herndon 2020


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"

void AShooterAIController::BeginPlay() 
{
    Super::BeginPlay();
    // PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    if (AIBehavior != nullptr)
    {
        RunBehaviorTree(AIBehavior);
        
    }
}

void AShooterAIController::Tick(float DeltaSeconds) 
{
    Super::Tick(DeltaSeconds);

    // if (PlayerPawn == nullptr) return;

    // if (LineOfSightTo(PlayerPawn))
    // {
    //     //look at player
    //     SetFocus(PlayerPawn);
    //     //move toward player
    //     MoveToActor(PlayerPawn, AcceptanceRadius);
    // }
    // else
    // {
    //     ClearFocus(EAIFocusPriority::Gameplay);
    //     StopMovement();
    // }

}
