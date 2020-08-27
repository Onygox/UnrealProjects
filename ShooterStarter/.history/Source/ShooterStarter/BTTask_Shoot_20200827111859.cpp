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

    //if this is not attached to an AI character fail
    if (OwnerComp.GetAIOwner() == nullptr) return EBTNodeResult::Failed;
    
    AShooterCharacter* Char = Cast<AShooterCharacter>(OwnerComp.GetAIOwner()->GetPawn());

    //if this is not attached to a shooter character
    if (Char == nullptr) return EBTNodeResult::Failed;

    return EBTNodeResult::Succeeded;
}
