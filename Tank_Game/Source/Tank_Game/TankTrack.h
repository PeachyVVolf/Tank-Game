// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent)/*, hidecategories = ("Collision")*/)
class TANK_GAME_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintCallable, Category = Input)
	void SetThrottle(float Throttle);
	
	UPROPERTY(EditDefaultsOnly, Category = Input)
	float TrackMaxDrivingForce = 40000000;

private:
	UTankTrack();
	virtual void TickComponent(float, ELevelTick, FActorComponentTickFunction*) override;
};
