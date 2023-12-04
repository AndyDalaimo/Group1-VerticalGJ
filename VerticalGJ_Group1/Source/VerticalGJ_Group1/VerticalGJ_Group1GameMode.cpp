// Copyright Epic Games, Inc. All Rights Reserved.

#include "VerticalGJ_Group1GameMode.h"
#include "VerticalGJ_Group1Character.h"
#include "UObject/ConstructorHelpers.h"

AVerticalGJ_Group1GameMode::AVerticalGJ_Group1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
