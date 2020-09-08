// Copyright Lionel Miele-Herndon 2020


#include "BTTask_Shoot.h"
#include "AIController.h"
#include "ShooterCharacter.h"


UBTTask_Shoot::UBTTask_Shoot() 
{
    NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent &OwnerComp, uint8* NodeMemory) 
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    if (OwnerComp.GetAIOwner() == nullptr) return EBTNodeResult::Failed;
    
    Cast<AShooterCharacter>(OwnerComp.GetAIOwner()->GetPawn());

    return EBTNodeResult::Succeeded;
}