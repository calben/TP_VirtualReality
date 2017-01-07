// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "UserMotionController.generated.h"

UENUM(BlueprintType)
enum class EGripState : uint8
{
	Open,
	CanGrab,
	Grab
};

UCLASS()
class TP_VIRTUALREALITY_API AUserMotionController : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AUserMotionController();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class USceneComponent* Scene;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class UMotionControllerComponent* MotionController;


	///////////////////

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

	////////////////////

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		AActor* AttachedActor;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool bIsTeleporterActive;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<class USplineMeshComponent*> SplineMeshes;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool bLastFrameValidDestination;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool bIsRoomScale;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FVector TeleportDestination;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool bIsValidTeleportDestination;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		EGripState GripState;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool bWantsToGrip;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FRotator TeleportRotation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float TeleportLaunchVelocity;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FRotator InitialControllerRotation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class USteamVRChaperoneComponent* SteamVRChaperone;

	UFUNCTION(BlueprintCallable, Category = Grabbing)
		AActor* GetActorNearHand();

	UFUNCTION(BlueprintCallable, Category = Grabbing)
		void ReleaseActor();

	UFUNCTION(BlueprintCallable, Category = Grabbing)
		void GrabActor();



};
