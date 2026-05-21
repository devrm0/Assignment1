// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseShip.h"

#include "UBaseAIController.h"

#include "ABaseEnemyShip.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AABaseEnemyShip : public AABaseShip
{
	GENERATED_BODY()
public:
	
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();


	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	AUBaseAIController* ShipAIController;
};
