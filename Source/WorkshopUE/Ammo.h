// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Ammo.generated.h"

UENUM(BlueprintType)
enum class EAmmoType : uint8
{
	VE_Blue	UMETA(DisplayName = "Blue"),
	VE_Red	UMETA(DisplayName = "Red"),
	VE_LastValue UMETA(DisplayName = "YOLO")
};

UCLASS()
class WORKSHOPUE_API AAmmo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAmmo();
	AAmmo(EAmmoType type);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION(BlueprintCallable, Category = "Ammo")
	void setAmount(int32 new_amount);
	
	UFUNCTION(BlueprintCallable, Category = "Ammo")
	int32 getAmount();
	
protected :
	int32 amount;
	EAmmoType ammo_type;
};
