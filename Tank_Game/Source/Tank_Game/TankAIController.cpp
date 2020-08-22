// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"
#include "Tank.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerTank) { return; }
	ATank* PlayerFoundTank = Cast<ATank>(PlayerTank);//Get Player
	ATank* ControlledTank = Cast<ATank>(GetPawn());//Get Controlled AI Tank

	if (PlayerTank) 
	{
		MoveToActor(PlayerTank, AcceptanceRadius);

		//Aim At Player
		ControlledTank->AimAt(PlayerFoundTank->GetActorLocation());

		//Fire When Ready
		ControlledTank->FireAmmo();
	}
}
