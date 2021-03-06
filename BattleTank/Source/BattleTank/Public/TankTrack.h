// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * TankTrack is used to set maximum driving force, and to apply forces
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category="Input")
	void SetThrottle(float Throttle);
	
	// Max force per track, in newtons
	UPROPERTY(EditDefaultsonly)
	float TrackMaxDrivingForce = 40000000; // Assume 40 tonne tank, and 1G acceleration
};
