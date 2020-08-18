// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"
#include "Tank.h"

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank) {
		UE_LOG(LogTemp, Warning, TEXT("AIController Can't find Player"))
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AIController Found Player"))
	}
}

ATank* ATankAIController::GetPlayerTank() const 
{
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerTank) {
		return nullptr;
	}
	return Cast<ATank>(PlayerTank);
	
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetPlayerTank()) 
	{
		//TODO Move Towards Playe

		//Aim At Player
		GetControlledTank()->AimAt(GetPlayerTank()->GetActorLocation());

		//Fire When Ready
	}
}
