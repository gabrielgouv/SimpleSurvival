// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SimpleSurvivalGameMode.h"
#include "SimpleSurvivalPlayerController.h"
#include "SimpleSurvivalCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASimpleSurvivalGameMode::ASimpleSurvivalGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASimpleSurvivalPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}