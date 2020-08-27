// Copyright Lionel Miele-Herndon 2020


#include "BTService_PlayerLocation.h"
#include "BehaviorTree/BlackboardComponent.h"

void UBTService_PlayerLocation::TickNode(UBehaviorTreeComponent &OwnerComp, uint8* NodeMemory, float DeltaSeconds) 
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
    APawn*
    if (PlayerPawn == nullptr) return;

    OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), );
}
