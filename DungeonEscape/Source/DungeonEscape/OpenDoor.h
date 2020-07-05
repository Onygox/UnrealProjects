// Copyright Onygox 2020.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEONESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void Open(float DeltaTime);
	void Close(float DeltaTime);
	float TotalMassOfActors() const;

private:
	float StartingYaw = 0.0f;
	float CurrentYaw = 0.0f;
	float DoorLastOpened = 0.f;
	bool IsOpening, IsClosing;

	UPROPERTY(EditAnywhere)
	float TargetYaw = -90.0f;
	
	UPROPERTY(EditAnywhere)
	ATriggerVolume* OpenActivator = nullptr;

	UPROPERTY(EditAnywhere)
	float DoorCloseDelay = 0.f;

	UPROPERTY(EditAnywhere)
	float MassToOpenDoor = 50.f;

	UPROPERTY()
	UAudioComponent* AudioComponent = nullptr;
};
