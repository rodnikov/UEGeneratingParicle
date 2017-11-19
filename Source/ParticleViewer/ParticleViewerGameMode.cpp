// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ParticleViewer.h"
#include "ParticleViewerGameMode.h"
#include "ParticleViewerHUD.h"
#include "ParticleViewerCharacter.h"

AParticleViewerGameMode::AParticleViewerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AParticleViewerHUD::StaticClass();
}
