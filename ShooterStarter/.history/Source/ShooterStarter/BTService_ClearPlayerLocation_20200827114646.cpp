// Copyright Lionel Miele-Herndon 2020


#include "BTService_ClearPlayerLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"

UBTService_ClearPlayerLocation::UBTService_ClearPlayerLocation() 
{
    NodeName == TEXT("Update Player Location If Seen");
}

void UBTService_ClearPlayerLocation::TickNode(UBehaviorTreeComponent &OwnerComp, uint8* NodeMemory, float DeltaSeconds) 
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
    
    //fail if there's no player pawn
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    if (PlayerPawn == nullptr) return;

    //if this is not attached to an AI character fail
    if (OwnerComp.GetAIOwner() == nullptr) return;

    if (!OwnerComp.GetAIOwner()->LineOfSightTo(PlayerPawn))
    {
        OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), PlayerPawn->GetActorLocation());
    }
    else
    {
        OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
    }

    // return EBTNodeResult::Succeeded;
}
