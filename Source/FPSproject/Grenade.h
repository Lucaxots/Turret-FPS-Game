
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grenade.generated.h"

UCLASS()
class FPSPROJECT_API AGrenade : public AActor
{
	GENERATED_BODY()
	
public:	
	AGrenade();

public:	

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* GrenadeMesh;

	UPROPERTY(EditDefaultsOnly)
	class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditDefaultsOnly)
	USoundBase* ExplosionSound;

	UPROPERTY(EditDefaultsOnly)
	USoundBase* BounceSound;

	UPROPERTY(EditDefaultsOnly)
	class UNiagaraSystem* ExplosionSystem;

	UPROPERTY(EditDefaultsOnly)
	float DamageRadius;

	UPROPERTY(EditDefaultsOnly)
	float DamageAmount;

private:

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	void Explode();

	int Bounce;

};
