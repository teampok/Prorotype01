// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Prototype_01GameMode.h"
#include "Prototype_01Character.h"
#include "UObject/ConstructorHelpers.h"

APrototype_01GameMode::APrototype_01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
