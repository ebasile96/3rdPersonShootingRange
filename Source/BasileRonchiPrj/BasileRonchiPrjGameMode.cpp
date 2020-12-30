// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasileRonchiPrjGameMode.h"
#include "BasileRonchiPrjCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABasileRonchiPrjGameMode::ABasileRonchiPrjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
