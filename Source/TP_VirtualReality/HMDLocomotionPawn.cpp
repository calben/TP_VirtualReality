// Fill out your copyright notice in the Description page of Project Settings.

#include "TP_VirtualReality.h"
#include "HMDLocomotionPawn.h"


// Sets default values
AHMDLocomotionPawn::AHMDLocomotionPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHMDLocomotionPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHMDLocomotionPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AHMDLocomotionPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

