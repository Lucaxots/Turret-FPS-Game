#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turret.generated.h"

UCLASS()
class FPSPROJECT_API ATurret : public AActor
{
	GENERATED_BODY()
	
public:	
	ATurret();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* TurretBase;

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* TurretTop;

	UPROPERTY(EditAnywhere)
	class UCapsuleComponent* CapsulePlayerCheck;

	UPROPERTY(EditAnywhere)
	class UArrowComponent* ArrowComponent;

	UPROPERTY(EditAnywhere)
	class UHealthComponent* HealthComponent;

	UPROPERTY(EditDefaultsOnly)
	USoundBase* DestroySound;

	UPROPERTY(EditDefaultsOnly)
	USoundBase* FireSound;

	UPROPERTY(EditDefaultsOnly)
	USoundBase* TargetedSound;

	UPROPERTY(EditDefaultsOnly)
	class UNiagaraSystem* ExplosionSystem;

	UPROPERTY(EditDefaultsOnly)
	class UNiagaraSystem* FireSystem;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> FireActor;

	UPROPERTY(EditAnywhere)
	float TurnSpeed;

	UPROPERTY(EditAnywhere)
	bool bSayHello;

	UPROPERTY(EditAnywhere)
	float EndAngle;

	UPROPERTY(EditAnywhere)
	float ScanInterpSpeed;

	UPROPERTY(EditDefaultsOnly)
	float FireRate;

	UPROPERTY(EditAnywhere)
	float LookAtInterpSpeed;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void TurretDestroyed();

private:

	UFUNCTION(BlueprintCallable)
	void DestroyTurret(FHitResult Hit);

	UFUNCTION()
	void OnCheckBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnCheckEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void Fire();

	void SetRotationTurretTopSmooth(FRotator NewRotation, float InterpSpeed);

	void CheckPlayerInView();

	class ACharacter* PlayerCharacter;

	bool bIsPlayerTracked;

	bool bIsTurretDestroyed;

	bool bIsPlayerOverlap;

	float ScanRotation;

	FTimerHandle TimerHandle;

};
