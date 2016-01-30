// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "GameJamTrolly.h"
#include "GameJamTrollyGameMode.h"
#include "GameJamTrollyHUD.h"
#include "GameJamTrollyCharacter.h"

AGameJamTrollyGameMode::AGameJamTrollyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGameJamTrollyHUD::StaticClass();
}
