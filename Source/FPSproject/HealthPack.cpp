// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthPack.h"
#include "HealthComponent.h"

AHealthPack::AHealthPack()
{
	PrimaryActorTick.bCanEverTick = false;

	HealthMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HealthMesh"));

	HealthAmount = 10.0f;
}

void AHealthPack::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHealthPack::Interact_Implementation(APawn* InstigatorPawn)
{
	if (InstigatorPawn)
	{
		UHealthComponent* HealthComp = InstigatorPawn->FindComponentByClass<UHealthComponent>();
		if (HealthComp)
		{
			HealthComp->AddHealth(HealthAmount);
		}
	}
	Destroy();
}



