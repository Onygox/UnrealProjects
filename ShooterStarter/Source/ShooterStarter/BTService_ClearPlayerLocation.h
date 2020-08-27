// Copyright Lionel Miele-Herndon 2020

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_ClearPlayerLocation.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERSTARTER_API UBTService_ClearPlayerLocation : public UBTService_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTService_ClearPlayerLocation();

protected:
	virtual void TickNode(UBehaviorTreeComponent &OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
};
