
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthExhausted, FHitResult, Hit);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPSPROJECT_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UHealthComponent();

protected:
	virtual void BeginPlay() override;

public:	

	UPROPERTY(BlueprintAssignable)
	FOnHealthExhausted OnHealthExhausted; 

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float Health;

	UFUNCTION(BlueprintCallable)
	void ApplyDamage(float DamageAmount, FHitResult Hit = FHitResult());

	UFUNCTION(BlueprintCallable)
	void AddHealth(float HealthAmount);

};
