// Fill out your copyright notice in the Description page of Project Settings.

#include "TP_VirtualReality.h"
#include "UserMotionController.h"


// Sets default values
AUserMotionController::AUserMotionController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUserMotionController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUserMotionController::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


AActor* AUserMotionController::GetActorNearHand()
{
	return nullptr;
}

void AUserMotionController::ReleaseActor()
{

}

void AUserMotionController::GrabActor()
{
	bWantsToGrip = true;
	AActor* Nearest = GetActorNearHand();
	if (Nearest)
	{
		AttachedActor = Nearest;
		//Nearest->AttachToComponent(Scene);
	}
}
