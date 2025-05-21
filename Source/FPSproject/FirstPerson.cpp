

#include "FirstPerson.h"
#include "Interactable.h"

AFirstPerson::AFirstPerson()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AFirstPerson::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFirstPerson::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFirstPerson::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFirstPerson::TraceLineFromCamera(USceneComponent* CameraComponent)
{

	FHitResult HitResult;
	FVector Start = CameraComponent->GetComponentLocation();
	FVector End = CameraComponent->GetForwardVector() * 300 + CameraComponent->GetComponentLocation();

	FCollisionObjectQueryParams ObjectTypeParams;
	ObjectTypeParams.AddObjectTypesToQuery(ECollisionChannel::ECC_WorldStatic);
	ObjectTypeParams.AddObjectTypesToQuery(ECollisionChannel::ECC_WorldDynamic);
	ObjectTypeParams.AddObjectTypesToQuery(ECollisionChannel::ECC_Pawn);
	ObjectTypeParams.AddObjectTypesToQuery(ECollisionChannel::ECC_PhysicsBody);
	
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	bool bHit = GetWorld()->LineTraceSingleByObjectType(HitResult, Start, End, ObjectTypeParams, CollisionParams);

	if (bHit)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("Name: %s"), *HitResult.GetActor()->GetName()));

		AActor* HitActor = HitResult.GetActor();

		if (HitActor->Implements<UInteractable>())
		{
			IInteractable::Execute_Interact(HitActor, this);
		}
	}
}

