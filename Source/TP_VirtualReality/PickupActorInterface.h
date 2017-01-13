// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PickupActorInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPickupActorInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 *
 */
class TP_VIRTUALREALITY_API IPickupActorInterface
{
	GENERATED_IINTERFACE_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Pickup)
		void Pickup();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Pickup)
		void Drop();
};
