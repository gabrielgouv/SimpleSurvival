// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseMachine.generated.h"

UCLASS(Blueprintable)
class SIMPLESURVIVAL_API ABaseMachine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseMachine();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void MouseOver();

	UFUNCTION(BlueprintCallable)
	void MouseLeave();

	UFUNCTION(BlueprintCallable)
	void MouseClicked();

	UFUNCTION(BlueprintCallable)
	void MouseReleased();

};
