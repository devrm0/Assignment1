// Fill out your copyright notice in the Description page of Project Settings.


#include "UBaseGameMode.h"

FVector AUBaseGameMode::GetWorldScrollVelocity()
{
	return FVector(WorldScrollSpeed, 0, 0);
}

void AUBaseGameMode::GetWorldCameraActor(AActor*& WorldCameraActor)
{
}

void AUBaseGameMode::OnPlayerDied(AUBasePlayerController* Player)
{
}



void AUBaseGameMode::OnEnemyDied(AABaseGameAgent* enemy, AController* Killer)
{
}

void AUBaseGameMode::StartGame()
{
}

void AUBaseGameMode::EndGame(bool Success)
{
}

void AUBaseGameMode::SpawnEnemyFrom(TArray<TSubclassOf<ABaseGameAgent>> ClassList)
{
}


void AUBaseGameMode::ResetGame()
{
}

void AUBaseGameMode::RespawnPlayer()
{
}

void AUBaseGameMode::TrySpawnPowerUp(FVector Location)
{
}

float AUBaseGameMode::GetDistanceTravelled()
{
	return 0.0f;
}
