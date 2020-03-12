// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TesteGameMode.h"
#include "TestePawn.h"

ATesteGameMode::ATesteGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ATestePawn::StaticClass();
}

