// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "Tank.h"
#include "TankAIController.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());
	if (PlayerTank)
	{
		// TODO move towards player
		//TODO aim at player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		//TODO fire if ready
		ControlledTank->Fire();
	//else if (!PlayerPawn) { return nullptr; }
	}
}
