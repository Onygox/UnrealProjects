// Copyright Lionel Miele-Herndon 2020


#include "BTService_ClearPlayerLocation.h"


UBTService_ClearPlayerLocation::UBTService_ClearPlayerLocation() 
{
    NodeName == TEXT("Clear Player Location");
}

void UBTService_ClearPlayerLocation::TickNode(UBehaviorTreeComponent &OwnerComp, uint8* NodeMemory, float DeltaSeconds) 
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    if (PlayerPawn == nullptr) return;

    if (LineOfSightTo(PlayerPawn))
    {
        GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
        GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLocation"), PlayerPawn->GetActorLocation());
    }
    else
    {
        GetBlackboardComponent()->ClearValue(TEXT("PlayerLocation"));
    }
}
