// Fill out your copyright notice in the Description page of Project Settings.


#include "APlayerShip.h"

void AAPlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed)
{
}

void AAPlayerShip::ClampToCameraBounds()
{
}

float AAPlayerShip::GetShipAdjustment(float Dist, float Max)
{
	return 0.0f;
}

FVector AAPlayerShip::CalcOutOfBoundsAdjustment()
{
	return FVector(0);
}

void AAPlayerShip::GetPlayerAgentInfo(APlayerController* Player)
{
}

void AAPlayerShip::ShouldSpawnAIController()
{
}

void AAPlayerShip::UpdateHowerPitch()
{
}

bool AAPlayerShip::HasDiedRecently()
{
	return false;
}

void AAPlayerShip::TakeDamageShip(float Damage, float& ActualDamage)
{
}

