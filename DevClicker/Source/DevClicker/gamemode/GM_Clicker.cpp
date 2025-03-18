// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_Clicker.h"

#include "ClickerPawn.h"
#include "ClickerPlayerController.h"
#include "GameFramework/DefaultPawn.h"
#include "PaperSprite.h"

AGM_Clicker::AGM_Clicker()
{
	DefaultPawnClass = AClickerPawn::StaticClass();
	PlayerControllerClass = AClickerPlayerController::StaticClass();
}
