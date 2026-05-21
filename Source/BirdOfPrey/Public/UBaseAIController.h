// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "UBasePlayerController.h"
#include "ABaseGameAgent.h"

#include "UBaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBaseAIController : public AAIController
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldStartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldStopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldUpdateAim();


	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	AUBasePlayerController* Target;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	AABaseGameAgent* ControlledAgent;

};
