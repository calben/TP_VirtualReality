// Fill out your copyright notice in the Description page of Project Settings.

#include "TP_VirtualReality.h"
#include "MotionController.h"


// Sets default values
AMotionController::AMotionController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMotionController::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMotionController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AActor* AMotionController::GetActorNearHand()
{
	return nullptr;
}

void AMotionController::ReleaseActor()
{

}

void AMotionController::GrabActor()
{

}

