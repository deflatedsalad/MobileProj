// Fill out your copyright notice in the Description page of Project Settings.


#include "ClickerPawn.h"


// Sets default values
AClickerPawn::AClickerPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//_CharacterSprite->CreateDefaultSubobject<UPaperSprite>("Sprite");
}

// Called when the game starts or when spawned
void AClickerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AClickerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AClickerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

