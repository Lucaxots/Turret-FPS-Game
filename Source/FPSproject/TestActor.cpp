// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Health = 100.0f;

}


// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	FVector MyVector = FVector(0.0f, 0.1f, 0.2f);
	
	LogVector(MyVector);

	MyVector.X = 6.8f;

	LogVector(MyVector);
}

void ATestActor::LogVector(FVector Var)
{
	UE_LOG(LogTemp, Error, TEXT("MyVector is %s"), *Var.ToString());
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Health = Health + 0.1f;

	//UE_LOG(LogTemp, Error, TEXT("Health is %f"), Health);
}

