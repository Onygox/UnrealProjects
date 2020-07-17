// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthComponent.h"
#include "ToonTanks/GameModes/TankGameModeBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// Health = DefaultHealth;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	Health = DefaultHealth;

	GameModeRef = Cast<ATankGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

	Owner = GetOwner();
	if (Owner)
	{
		Owner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);
		// UE_LOG(LogTemp, Warning, TEXT("Added Take Damage Dynamic To %s."), *GetOwner()->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Health component has no reference to Owner!"));
	}
}

void UHealthComponent::TakeDamage(AActor* DamageActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	
	// UE_LOG(LogTemp, Warning, TEXT("Take Damage initiated on %s."), *GetOwner()->GetName());
	
	if (Damage == 0 || Health == 0)
	{
		// UE_LOG(LogTemp, Warning, TEXT("Health or Damage is zero."));
		return;
	}

	Health = FMath::Clamp(Health-Damage, 0.0f, DefaultHealth);
	// UE_LOG(LogTemp, Warning, TEXT("%s health is now %f."), *GetOwner()->GetName(), Health);

	if (Health <= 0.0)
	{
		if (GameModeRef)
		{
			GameModeRef->ActorDied(Owner);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Health component has no reference to current GameMode!"));
		}
	}
}