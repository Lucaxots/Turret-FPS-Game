// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "HealthPack.generated.h"

UCLASS()
class FPSPROJECT_API AHealthPack : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	AHealthPack();

protected:
	virtual void BeginPlay() override;

public:	

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* HealthMesh;

	void Interact_Implementation(APawn* InstigatorPawn);

	UPROPERTY(EditDefaultsOnly)
	float HealthAmount;
};
