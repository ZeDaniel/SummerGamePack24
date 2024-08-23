// Copyright Epic Games, Inc. All Rights Reserved.

#include "SafetyGameMode.h"
#include "SafetyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASafetyGameMode::ASafetyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Sub-Games/04_Safety/Blueprints/BP_SafetyCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
