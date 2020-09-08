// Copyright Lionel Miele-Herndon 2020


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ShooterCharacter.h"

void AShooterAIController::BeginPlay() 
{
    Super::BeginPlay();
    // PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    if (AIBehavior != nullptr)
    {
        RunBehaviorTree(AIBehavior);

        // GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());

        // GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
    }
}

void AShooterAIController::Tick(float DeltaSeconds) 
{
    Super::Tick(DeltaSeconds);

    // if (PlayerPawn == nullptr) return;

    // if (LineOfSightTo(PlayerPawn))
    // {
    //     GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
    //     GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLocation"), PlayerPawn->GetActorLocation());
    // }
    // else
    // {
    //     GetBlackboardComponent()->ClearValue(TEXT("PlayerLocation"));
    // }
}

bool AShooterAIController::IsDead() const
{
    AShooterCharacter* Cast<AShooterCharacter>(GetPawn());
}
