// Fill out your copyright notice in the Description page of Project Settings.

#include "Door.h"

#include "UObject//ConstructorHelpers.h"
#include "Components/TimelineComponent.h"

ADoor::ADoor()
{
	PrimaryActorTick.bCanEverTick = true;

	SetMobility(EComponentMobility::Movable);
	
	
	

}

void ADoor::BeginPlay()
{
	Super::BeginPlay();

	if (!HasAuthority()) {
		SetReplicates(false);
		SetReplicateMovement(false);
	}
	else
	{
		SetReplicates(true);
		SetReplicateMovement(true);
	}

	InitialRotation = GetActorRotation();

}

void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*
		if (HasAuthority())
		{
			FVector Location = GetActorLocation();
			float JourneyLength = (GlobalTargetLocation - GlobalStartLocation).Size();
			float JourneyTravelled = (Location - GlobalStartLocation).Size();

			if (JourneyTravelled >= JourneyLength)
			{
				FVector Swap = GlobalStartLocation;
				GlobalStartLocation = GlobalTargetLocation;
				GlobalTargetLocation = Swap;
			}

			FVector Direction = (GlobalTargetLocation - GlobalStartLocation).GetSafeNormal();
			Location += Speed * DeltaTime * Direction;
			SetActorLocation(Location);
		}
	*/
	if (!HasAuthority())
	{
		if (CanRotate)
		{
			InitialRotation = GetActorRotation();
			InitialRotation.Yaw = InitialRotation.Yaw + 10;
			SetActorRotation(InitialRotation);
		}
	}
}
