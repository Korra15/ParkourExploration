// Copyright Epic Games, Inc. All Rights Reserved.

#include "ParkourExperimentGameMode.h"
#include "ParkourExperimentCharacter.h"
#include "UObject/ConstructorHelpers.h"

AParkourExperimentGameMode::AParkourExperimentGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
