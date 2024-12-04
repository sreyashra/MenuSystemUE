// Copyright Epic Games, Inc. All Rights Reserved.

#include "MenuSystemUEGameMode.h"
#include "MenuSystemUECharacter.h"
#include "UObject/ConstructorHelpers.h"

AMenuSystemUEGameMode::AMenuSystemUEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
