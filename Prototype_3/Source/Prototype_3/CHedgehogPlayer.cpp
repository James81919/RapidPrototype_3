// Fill out your copyright notice in the Description page of Project Settings.

// This Include
#include "CHedgehogPlayer.h"

// Engine Include
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ACHedgehogPlayer::ACHedgehogPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Setup root component
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ROOT"));

	// Mesh Setup
	m_staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Staic Mesh Component"));

	// Collider Setup
	m_sphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collider Component"));

	/** Camera Stuff */
	m_camSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Arm"));
	m_camSpringArm->AttachTo(RootComponent);
	m_camSpringArm->bUsePawnControlRotation = true;
	m_camSpringArm->bEnableCameraLag = false;
	m_camSpringArm->bEnableCameraRotationLag = false;
	m_camSpringArm->bInheritYaw = true;
	m_camSpringArm->bInheritPitch = true;
	m_camSpringArm->bInheritRoll = false;

	m_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_camera->AttachTo(m_camSpringArm, USpringArmComponent::SocketName);
	m_camera->bUsePawnControlRotation = false;
	m_camera->FieldOfView = 90.0f;


}

// Called when the game starts or when spawned
void ACHedgehogPlayer::BeginPlay()
{
	Super::BeginPlay();
	


}

// Called every frame
void ACHedgehogPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void ACHedgehogPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	

}

void ACHedgehogPlayer::MoveRight(float _axisValue)
{

}

