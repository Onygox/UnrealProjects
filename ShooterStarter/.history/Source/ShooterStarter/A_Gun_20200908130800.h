// Copyright Lionel Miele-Herndon 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "A_Gun.generated.h"

UCLASS()
class SHOOTERSTARTER_API AA_Gun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AA_Gun();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Pull_Trigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere)
	UParticleSystem* HitFlash;

	UPROPERTY(EditAnywhere)
	float MaxRange = 5000;

	UPROPERTY(EditAnywhere)
	float Damage = 10;

	bool GunTrace(FHitResult& Hit, FVector& ShotDirection);
	AController* GetOwnerController const
};
