// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseWeapon.h"


#include "ABaseProjectile.h"

#include "AProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AAProjectileWeapon : public AABaseWeapon
{
	GENERATED_BODY()


public:

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	AABaseProjectile* SpawnProjectile(FTransform SpawnTransform);
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetProjectileSpawnTransform(int ShotNumber);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ReadyToFire();

	
	bool IsFiring();


	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<AABaseProjectile> ProjectileType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float RefireTime;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	int NumShots;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;


};
