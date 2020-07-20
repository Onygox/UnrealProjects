// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "PawnBase.generated.h"

class UCapsuleComponent;
class AProjectileBase;
class UHealthComponent;

UCLASS()
class TOONTANKS_API APawnBase : public APawn
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ProjectileSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Projectile Type", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AProjectileBase> ProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effects", meta = (AllowPrivateAccess = "true"))
	UParticleSystem* DeathParticle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Health", meta = (AllowPrivateAccess = "true"))
	UHealthComponent* HealthComponent;

	UPROPERTY(EditDefaultsOnly, Category="Effects", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UCameraShake> DeathShake;

public:

	// Sets default values for this pawn's properties
	APawnBase();

	void PawnDestroyed();
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* DeathSound;

protected:

	void RotateTurret(FVector LookAtTarget);

	void Fire();

	virtual void HandleDestruction();
	
};
