// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class TANK_GAME_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
public:
	void RotateTurret(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 5; //Default Max angle //TODO Set Default Speed for barrel

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinRotation = 0; //Default angle

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxRotation = 178; //Default angle
};
