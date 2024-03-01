// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test_ShootingGameMode.h"
#include "Test_ShootingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATest_ShootingGameMode::ATest_ShootingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
