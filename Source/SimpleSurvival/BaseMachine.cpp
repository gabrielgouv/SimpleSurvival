// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMachine.h"

// Sets default values
ABaseMachine::ABaseMachine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseMachine::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseMachine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseMachine::MouseOver() {
	UE_LOG(LogTemp, Warning, TEXT("MOUSE OVER"));
}

void ABaseMachine::MouseLeave() {
	UE_LOG(LogTemp, Warning, TEXT("MOUSE LEAVE"));
}

void ABaseMachine::MouseClicked() {
	UE_LOG(LogTemp, Warning, TEXT("MOUSE CLICKED"));
}

void ABaseMachine::MouseReleased() {
	UE_LOG(LogTemp, Warning, TEXT("MOUSE RELEASED"));
}
