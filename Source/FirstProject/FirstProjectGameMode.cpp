// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstProjectGameMode.h"
#include "FirstProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstProjectGameMode::AFirstProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
