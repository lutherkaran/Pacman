// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"

// Sets default values
AEnemyPawn::AEnemyPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemyPawn::Hunt()
{
	State = EEnemyCurrentState::Default;
	StateChangedEvent.Broadcast(State);
}

void AEnemyPawn::Idle()
{
	State = EEnemyCurrentState::Idle;
	StateChangedEvent.Broadcast(State);
}
