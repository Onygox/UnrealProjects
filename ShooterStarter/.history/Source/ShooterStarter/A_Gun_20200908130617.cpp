// Copyright Lionel Miele-Herndon 2020


#include "A_Gun.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

// Sets default values
AA_Gun::AA_Gun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);

}

// Called when the game starts or when spawned
void AA_Gun::BeginPlay()
{
	Super::BeginPlay();
	
}

bool AA_Gun::GunTrace(FHitResult& Hit, FVector& ShotDirection) 
{
	//get hit point and draw a debug point where the linetrace hits
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn == nullptr) return;

	AController* OwnerController = OwnerPawn->GetController();
	if (OwnerController == nullptr) return;

	FVector OwnerLocation;
	FRotator OwnerRotation;
	ShotDirection = -OwnerRotation.Vector();

	OwnerController->GetPlayerViewPoint(OwnerLocation, OwnerRotation);

	FVector End = OwnerLocation + OwnerRotation.Vector() * MaxRange;

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());

	return GetWorld()->LineTraceSingleByChannel(Hit, OwnerLocation, End, ECollisionChannel::ECC_GameTraceChannel1, Params);
}

// Called every frame
void AA_Gun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AA_Gun::Pull_Trigger() 
{
	//muzzle flash
	UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleFlashSocket"));

	if (bSuccess)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitFlash, Hit.Location, ShotDirection.Rotation());
		AActor* HitActor = Hit.GetActor();
		if (HitActor != nullptr)
		{	
			FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
			HitActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No actor found."));
		}
		
	}
}

