// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Door.generated.h"


/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API ADoor : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	ADoor();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		float Rotation = 20;
	UPROPERTY(EditAnywhere)
		float RotationZ = 90;
	UPROPERTY(EditAnywhere)
		float DurationS = 5;
	
		FRotator InitialRotation;
	
		bool CanRotate = false;

	
};
