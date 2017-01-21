// Fill out your copyright notice in the Description page of Project Settings.

#include "TP_VirtualReality.h"
#include "PickupActorInterface.h"
#include "UserMotionController.h"
#include "SteamVRChaperoneComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "MotionControllerComponent.h"


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

void AUserMotionController::ActivateTeleporter()
{
	bIsTeleporterActive = true;
	TeleportCylinder->SetVisibility(true, true);
	RoomScaleMesh->SetVisibility(bIsRoomScale, false);
	MotionController->GetComponentRotation();
}

void AUserMotionController::DisableTeleporter()
{
}

FTraceTeleportDestinationResult AUserMotionController::TraceTeleportDestination()
{
	return FTraceTeleportDestinationResult();
}

void AUserMotionController::ClearArc()
{
}

void AUserMotionController::UpdateArcSpline(bool bFoundValidLocation, TArray<FVector> SplinePoints)
{
}

void AUserMotionController::UpdateArcEndpoint(FVector NewLocation, bool bValidLocationFound)
{
}

FTransform AUserMotionController::GetTeleportDestination()
{
	return FTransform(FVector::ZeroVector);
}

void AUserMotionController::UpdateHandAnimation()
{
}

void AUserMotionController::HandleTeleportationArc()
{
}
