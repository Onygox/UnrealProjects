// Copyright Lionel Miele-Herndon 2020


#include "A_Gun.h"
#include "Components/SkeletalMeshComponent.h"

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

// Called every frame
void AA_Gun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

