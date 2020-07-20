// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnBase.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "ToonTanks/Actors/ProjectileBase.h"
#include "ToonTanks/Components/HealthComponent.h"

// Sets default values
APawnBase::APawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleComp;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetupAttachment(RootComponent);

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
	TurretMesh->SetupAttachment(BaseMesh);

	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Point"));
	ProjectileSpawnPoint->SetupAttachment(TurretMesh);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
	// ProjectileSpawnPoint->SetupAttachment(TurretMesh);

}

void APawnBase::RotateTurret(FVector LookAtTarget)
{
	// Update TurretMesh rotation to face towards LookTarget passed in from Child class

	FVector StartLocation = TurretMesh->GetComponentLocation();
	FRotator TurretRotation = UKismetMathLibrary::FindLookAtRotation(StartLocation, FVector(LookAtTarget.X, LookAtTarget.Y, TurretMesh->GetComponentLocation().Z));

	TurretMesh->SetWorldRotation(TurretRotation);
}

void APawnBase::Fire()
{
	if (ProjectileClass)
	{
		// Get ProjectileSpawnPointLocation & Rotation, then Spawn Projectile class at location towards rotation
		FVector ProjectileLocation = ProjectileSpawnPoint->GetComponentLocation();
		FRotator ProjectileRotation = ProjectileSpawnPoint->GetComponentRotation();
		AProjectileBase* TempProjectile = GetWorld()->SpawnActor<AProjectileBase>(ProjectileClass, ProjectileLocation, ProjectileRotation);
		TempProjectile->SetOwner(this);
	}
}

void APawnBase::HandleDestruction()
{
	// Universal functionality
	// Play death effect animation / particles / sound effect / camera shake
	// Then do unique child override effects
	GetWorld()->GetFirstPlayerController()->ClientPlayCameraShake(DeathShake);

	UGameplayStatics::PlaySoundAtLocation(this, DeathSound, GetActorLocation());

	UGameplayStatics::SpawnEmitterAtLocation(this, DeathParticle, GetActorLocation());

	// Pawn Turret informs gamemode that turret has died before destroying itself

	// Pawn Tank informs the gamemode that the main player died, hiding all components, displaying a end game message and stopping all movement
}

void APawnBase::PawnDestroyed()
{
	HandleDestruction();
}