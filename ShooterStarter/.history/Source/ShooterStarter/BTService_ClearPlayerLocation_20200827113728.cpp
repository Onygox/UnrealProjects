// Copyright Lionel Miele-Herndon 2020


#include "BTService_ClearPlayerLocation.h"


UBTService_ClearPlayerLocation::UBTService_ClearPlayerLocation() 
{
    NodeName == TEXT("Clear Player Location")
}

void UBTService_ClearPlayerLocation::TickNode(UBehaviorTreeComponent &OwnerComp, uint8* NodeMemory, float DeltaSeconds) 
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}
