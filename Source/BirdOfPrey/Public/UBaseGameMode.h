// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "UBasePlayerController.h"

#include "ABaseGameAgent.h"
#include "ABasePowerUp.h"

#include "UBaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBaseGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector GetWorldScrollVelocity();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetWorldCameraActor(AActor*& WorldCameraActor);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied(AUBasePlayerController* Player );
	//Buraya geri dön. 


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied(AABaseGameAgent* enemy, AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame(bool Success);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom(TArray<TSubclassOf<ABaseGameAgent>> ClassList);
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetDistanceTravelled();




	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2D MaxRelativePlayerOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UDataTable* PlayerAgentInfoTable;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float RespawnDelay;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float SpawnOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle StationarySpawnTimer;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle ShipSpawnTimer;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<TSubclassOf<ABasePowerUp>> BasePowerUpArray;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PickUpSpawnPercent;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool IsGameOverScreen;
	
};
