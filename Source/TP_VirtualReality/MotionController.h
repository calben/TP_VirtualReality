// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "MotionController.generated.h"

UCLASS()
class TP_VIRTUALREALITY_API AMotionController : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMotionController();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class USceneComponent* Scene;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	//	class UMotionControllerComponent* MotionController;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class USkeletalMeshComponent* HandMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class UArrowComponent* ArcDirection;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class USplineComponent* ArcSpline;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class USphereComponent* GrabSphere;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class UStaticMeshComponent* ArcEndPoint;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class UStaticMeshComponent* TeleportCylinder;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class UStaticMeshComponent* Ring;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class UStaticMeshComponent* Arrow;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class UStaticMeshComponent* RoomScaleMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class USteamVRChaperoneComponent* SteamVRChaperone;

};
