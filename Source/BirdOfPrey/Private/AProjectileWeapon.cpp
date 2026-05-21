// Fill out your copyright notice in the Description page of Project Settings.


#include "AProjectileWeapon.h"


AABaseProjectile* AAProjectileWeapon::SpawnProjectile(FTransform SpawnTransform)
{
	return nullptr;
}

FTransform AAProjectileWeapon::GetProjectileSpawnTransform(int ShotNumber)
{
	return FTransform();
}

bool AAProjectileWeapon::ReadyToFire()
{
	return false;
}

bool AAProjectileWeapon::IsFiring()
{
	return false;
}

