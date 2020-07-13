// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTurret.h"
#include "PawnTank.h"
#include "Kismet/GameplayStatics.h"

APawnTurret::APawnTurret()
{

}

// Called when the game starts or when spawned
void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

    //make a reference to the first player pawn
    PlayerPawn = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));

    GetWorld()->GetTimerManager().SetTimer(
        FireRateTimerHandle,
        this,
        &APawnTurret::CheckFireCondition,
        FireRate,
        true,
        false);
}

// Called every frame
void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (!PlayerPawn || ReturnDistanceToPlayer() > FireRange) 
    {

        return;
    }

    RotateTurret(PlayerPawn->GetActorLocation());

}

void APawnTurret::CheckFireCondition()
{
    // If Player is null or dead, then bail!
    if(!PlayerPawn)
    {
        return;
    }
    // If Player is in range, then fire!
    if (ReturnDistanceToPlayer() <= FireRange)
    {
        Fire();
    }
}

float APawnTurret::ReturnDistanceToPlayer()
{
    // Make sure the player actually exists
    if(!PlayerPawn)
    {
        return 0.0f;
    }

    float Distance = ((PlayerPawn->GetActorLocation() - GetActorLocation()).Size());
    return Distance;
}

void APawnTurret::HandleDestruction()
{
    Super::HandleDestruction();
    Destroy();
}
