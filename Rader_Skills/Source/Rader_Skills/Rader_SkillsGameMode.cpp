// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Rader_SkillsGameMode.h"
#include "Rader_SkillsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARader_SkillsGameMode::ARader_SkillsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
