
#include "Grenade.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/Character.h"
#include "HealthComponent.h"

AGrenade::AGrenade()
{
	PrimaryActorTick.bCanEverTick = false;

	GrenadeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrenadeMesh"));
	RootComponent = GrenadeMesh;
	GrenadeMesh->SetSimulatePhysics(true);
	GrenadeMesh->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel2);
	GrenadeMesh->SetNotifyRigidBodyCollision(true);
	GrenadeMesh->OnComponentHit.AddDynamic(this, &AGrenade::OnHit);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));
	ProjectileMovement->Velocity = FVector(2000.0f, 0.0f, 0.0f);

	DamageRadius = 120.0f;
	DamageAmount = 20.0f;

}

void AGrenade::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Bounce++;
	UGameplayStatics::PlaySoundAtLocation(this, BounceSound, GetActorLocation(), 0.5f);

	if (Bounce >= 5 || OtherActor->IsA(ACharacter::StaticClass()))
	{
		Explode();
	}
}

void AGrenade::Explode()
{
	UGameplayStatics::PlaySoundAtLocation(this, ExplosionSound, GetActorLocation(), 0.5f);
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ExplosionSystem, GetActorLocation(), GetActorRotation());

	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic));
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_GameTraceChannel2));

	TArray<AActor*> OverlappedActors;


	bool bOverlapped = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), GetActorLocation(), DamageRadius, ObjectTypes, nullptr, TArray<AActor*>(), OverlappedActors);
	//DrawDebugSphere(GetWorld(), GetActorLocation(), DamageRadius, 16, FColor::Red, false, 10.0f, 0, 2.0f);

	if (bOverlapped)
	{
		for (AActor* Actor : OverlappedActors) 
		{
			UHealthComponent* HealthComp = Actor->FindComponentByClass<UHealthComponent>();
			if (HealthComp)
			{
				HealthComp->ApplyDamage(DamageAmount);
			}
		}
			
	}

	Destroy();
}

