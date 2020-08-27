// Copyright Lionel Miele-Herndon 2020


#include "BTTask_Shoot.h"


UBTTask_Shoot::UBTTask_Shoot() 
{
    NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent &OwnerComp, uint8* NodeMemory) 
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    OwnerPawn = OwnerComp.GetAIOwner()

    return EBTNodeResult::Succeeded;
}
