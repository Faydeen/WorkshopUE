// Fill out your copyright notice in the Description page of Project Settings.

#include "WorkshopUE.h"
#include "Ammo.h"


// Sets default values
AAmmo::AAmmo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	amount = 0;
	ammo_type = EAmmoType::VE_LastValue;
}

AAmmo::AAmmo(EAmmoType type)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	amount = 0;
	ammo_type = type;
}

// Called when the game starts or when spawned
void AAmmo::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AAmmo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAmmo::setAmount(int32 new_amount) {
	if (new_amount > 0)
	{
		amount = new_amount;
	}
}

int32 AAmmo::getAmount() {
	return amount;
}