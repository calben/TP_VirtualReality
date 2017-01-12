// Fill out your copyright notice in the Description page of Project Settings.

#include "TP_VirtualReality.h"
#include "PickupActorInterface.h"
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
void AUserMotionController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


AActor* AUserMotionController::GetActorNearHand()
{
	AActor* nearest = nullptr;
	float distance = 999999;
	TArray<AActor*> OverlappingActors;
	GrabSphere->GetOverlappingActors(OverlappingActors);
	for (AActor* a : OverlappingActors)
	{
		IPickupActorInterface* pickup = Cast<IPickupActorInterface>(a);
		if (pickup)
		{
			float d = (GrabSphere->GetComponentLocation() - a->GetActorLocation()).Size();
			if (d < distance)
			{
				distance = d;
				nearest = a;
			}
		}
	}
	return nearest;
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
		Nearest->AttachToComponent(Scene, FAttachmentTransformRules::KeepWorldTransform);
	}
}
