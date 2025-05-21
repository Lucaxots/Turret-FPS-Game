

#include "HealthComponent.h"

UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	Health = 100.0f;

}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	
}

void UHealthComponent::ApplyDamage(float DamageAmount, FHitResult Hit)
{
	Health -= DamageAmount;
	
	if (Health <= 0)
	{
		Health = 0;
		OnHealthExhausted.Broadcast(Hit);
	}

	//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("Health: %f"), Health));
}

void UHealthComponent::AddHealth(float HealthAmount)
{
	Health += HealthAmount;

	if (Health >= 100)
	{
		Health = 100;
	}

	//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("Health: %f"), Health));
}



