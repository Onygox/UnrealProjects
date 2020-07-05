// Copyright Onygox 2020.

#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"
#include "Components/AudioComponent.h"
#include "OpenDoor.h"

#define OUT

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	FRotator MyRotator(GetOwner()->GetActorRotation());

	StartingYaw = MyRotator.Yaw;
	TargetYaw += StartingYaw;
	CurrentYaw = StartingYaw;

	if (!OpenActivator)
	{
		UE_LOG(LogTemp, Error, TEXT("%s has an OpenDoor component but no open activator!"), *GetOwner()->GetName());
	}

	AudioComponent = GetOwner()->FindComponentByClass<UAudioComponent>();
	if (!AudioComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("%s does not have an Audio Component!"), *GetOwner()->GetName());
	}
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (TotalMassOfActors() >= MassToOpenDoor)
	{
		Open(DeltaTime);
		DoorLastOpened = GetWorld()->GetTimeSeconds();
	} else {
		if (GetWorld()->GetTimeSeconds() - DoorLastOpened >= DoorCloseDelay)
		{
			Close(DeltaTime);
		}
	}
}

float UOpenDoor::TotalMassOfActors() const
{
	float TotalMass = 0.f;

	if (!OpenActivator) {return TotalMass;}

	TArray<AActor*> OverlappingActors;
	OpenActivator->GetOverlappingActors(OUT OverlappingActors);

	for(AActor* Actor : OverlappingActors)
	{
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}

	return TotalMass;
}

void UOpenDoor::Open(float DeltaTime)
{
	FRotator MyRotator(GetOwner()->GetActorRotation());
	CurrentYaw = FMath::FInterpTo(CurrentYaw, TargetYaw, DeltaTime, 1.5f);
	FRotator DoorRotator(MyRotator.Pitch, CurrentYaw, MyRotator.Roll);
	GetOwner()->SetActorRotation(DoorRotator);
	if(!AudioComponent) {return;}
	IsClosing = false;
	if (!IsOpening)
	{
		AudioComponent->Play();
	}
	IsOpening = true;
}

void UOpenDoor::Close(float DeltaTime)
{
	FRotator MyRotator(GetOwner()->GetActorRotation());
	CurrentYaw = FMath::FInterpTo(CurrentYaw, StartingYaw, DeltaTime, 1.5f);
	FRotator DoorRotator(MyRotator.Pitch, CurrentYaw, MyRotator.Roll);
	GetOwner()->SetActorRotation(DoorRotator);
	if(!AudioComponent) {return;}
	IsOpening = false;
	if (!IsClosing)
	{
		AudioComponent->Play();
	}
	IsClosing = true;
}

