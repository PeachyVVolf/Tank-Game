// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS( ClassGroup = (Custom), meta = (BlueprintSpawnableComponent)/*, hidecategories = ("Collision")*/ )
class TANK_GAME_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesPerSecond = 5; //Default Max angle //TODO Set Default Speed for barrel

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinElevation = 0; //Default angle

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxElevation = 40; //Default angle
};
