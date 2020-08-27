// Copyright Lionel Miele-Herndon 2020


#include "BTService_ClearPlayerLocation.h"


UBTService_ClearPlayerLocation::UBTService_ClearPlayerLocation() 
{
    NodeName == TEXT("Clear Player Location");
}

void UBTService_ClearPlayerLocation::TickNode(UBehaviorTreeComponent &OwnerComp, uint8* NodeMemory, float DeltaSeconds) 
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    //if this is not attached to an AI character fail
    if (OwnerComp.GetAIOwner() == nullptr) return EBTNodeResult::Failed;
    
    AShooterCharacter* Char = Cast<AShooterCharacter>(OwnerComp.GetAIOwner()->GetPawn());

    //if this is not attached to a shooter character, fail
    if (Char == nullptr) return EBTNodeResult::Failed;

    if (PlayerPawn == nullptr) return;

    if (!LineOfSightTo(PlayerPawn))
    {
        GetBlackboardComponent()->ClearValue(TEXT("PlayerLocation"));
    }
}
