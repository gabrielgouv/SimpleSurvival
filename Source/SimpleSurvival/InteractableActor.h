// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "InteractableActor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMPLESURVIVAL_API UInteractableActor : public UActorComponent
{
	GENERATED_BODY()

public:	

	// Sets default values for this component's properties
	UInteractableActor();

	UFUNCTION(BlueprintCallable, Category = "Mouse")
	void OnCursorOver();

	UFUNCTION(BlueprintCallable, Category = "Mouse")
	void OnCursorLeave();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		

private:
	APlayerController* PlayerController;

};
