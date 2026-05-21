// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseShip.h"

#include "UBasePlayerController.h"

#include "APlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AAPlayerShip : public AABaseShip
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetShipConstantVelocity(FVector& Direction, float& Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetShipAdjustment(float Dist, float Max);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector CalcOutOfBoundsAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo(APlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHowerPitch();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasDiedRecently();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TakeDamageShip(float Damage, float& ActualDamage);
	//APawn classýnda TakeDamage fonksiyonu var onunla karýþmasýn diye ismini deðiþtirdim hata veriyordu.


	//UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	//UBasePlayerController* BasePlayerController;  cast olduðu için bunu commentledim

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulterabilityTime;

};
