// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "WorkshopUEGameMode.generated.h"

UCLASS(minimalapi)
class AWorkshopUEGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AWorkshopUEGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
		bool bLoading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
		FName nNextLevel;

	UFUNCTION(BlueprintCallable, Category = "HUD")
		void ChangeLevel(FName NextLevel);
};



