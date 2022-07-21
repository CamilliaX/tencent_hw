// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootGGameMode.h"
#include "ShootGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootGGameMode::AShootGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
