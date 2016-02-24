// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "WorkshopUE.h"
#include "WorkshopUEGameMode.h"
#include "WorkshopUEHUD.h"
#include "WorkshopUECharacter.h"

AWorkshopUEGameMode::AWorkshopUEGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWorkshopUEHUD::StaticClass();
}
