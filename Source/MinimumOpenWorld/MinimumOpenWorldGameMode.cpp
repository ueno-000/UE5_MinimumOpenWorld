// Copyright Epic Games, Inc. All Rights Reserved.

#include "MinimumOpenWorldGameMode.h"
#include "MinimumOpenWorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMinimumOpenWorldGameMode::AMinimumOpenWorldGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
