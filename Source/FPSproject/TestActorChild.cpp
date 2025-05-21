// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActorChild.h"

void ATestActorChild::BeginPlay()
{
	Super::BeginPlay();


	UE_LOG(LogTemp, Warning, TEXT("Health is %f"), Health);

}

void ATestActorChild::LogVector(FVector Var)
{
	UE_LOG(LogTemp, Error, TEXT("My really really fun vector is %s"), *Var.ToString());
}

