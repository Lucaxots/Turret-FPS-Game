// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FirstPerson.generated.h"

UCLASS()
class FPSPROJECT_API AFirstPerson : public ACharacter
{
	GENERATED_BODY()

public:
	AFirstPerson();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void TraceLineFromCamera(USceneComponent* CameraComponent);

};
