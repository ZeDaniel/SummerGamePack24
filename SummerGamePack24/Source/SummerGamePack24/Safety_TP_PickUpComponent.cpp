// Copyright Epic Games, Inc. All Rights Reserved.

#include "Safety_TP_PickUpComponent.h"

USafety_TP_PickUpComponent::USafety_TP_PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void USafety_TP_PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &USafety_TP_PickUpComponent::OnSphereBeginOverlap);
}

void USafety_TP_PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	ASafetyCharacter* Character = Cast<ASafetyCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		if (!Character->IsHoldingItem())
		{
			OnPickUp.Broadcast(Character);
			// Unregister from the Overlap Event so it is no longer triggered
			OnComponentBeginOverlap.RemoveAll(this);
		}
	}
}