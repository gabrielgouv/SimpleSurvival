// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableActor.h"


// Sets default values for this component's properties
UInteractableActor::UInteractableActor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	// ...
}


// Called when the game starts
void UInteractableActor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInteractableActor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
}


void UInteractableActor::OnCursorOver() {
	UE_LOG(LogTemp, Warning, TEXT("MOUSE OVER"));
}

void UInteractableActor::OnCursorLeave() {
	UE_LOG(LogTemp, Warning, TEXT("MOUSE LEAVE"));
}


