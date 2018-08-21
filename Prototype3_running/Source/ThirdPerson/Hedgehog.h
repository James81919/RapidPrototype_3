// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Hedgehog.generated.h"

class USphereComponent;

UCLASS()
class THIRDPERSON_API AHedgehog : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHedgehog();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	USphereComponent* m_sphere;
	
};
