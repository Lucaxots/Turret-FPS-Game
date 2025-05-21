// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TestActor.h"
#include "TestActorChild.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API ATestActorChild : public ATestActor
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	virtual void LogVector(FVector Var) override;


};
