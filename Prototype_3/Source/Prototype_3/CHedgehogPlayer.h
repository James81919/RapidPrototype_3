// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CHedgehogPlayer.generated.h"

// Forward Declared
class UStaticMeshComponent;
class USphereComponent;
class USpringArmComponent;
class UCameraComponent;
/***/

UCLASS()
class PROTOTYPE_3_API ACHedgehogPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACHedgehogPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	/** Mesh place holder */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* m_staticMesh;

	/** Collider Place Holder */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* m_sphereCollider;

	/** Camera Stuff */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	UCameraComponent* m_camera;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Caemra")
	USpringArmComponent* m_camSpringArm;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Move on the Y Axis ( Left & Right )
	UFUNCTION()
	void MoveRight(float _axisValue);

};
