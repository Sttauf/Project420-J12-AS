// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Project420J12ASGameMode.h"
#include "Project420J12ASPawn.h"

AProject420J12ASGameMode::AProject420J12ASGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AProject420J12ASPawn::StaticClass();
}

