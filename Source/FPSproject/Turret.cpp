#include "Turret.h"
#include "BulletProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "NiagaraFunctionLibrary.h"
#include "HealthComponent.h"

ATurret::ATurret()
{
	PrimaryActorTick.bCanEverTick = true;

	TurretBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretBottom"));
	TurretBase->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel2);
	RootComponent = TurretBase;

	TurretTop = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretTop"));
	TurretTop->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel2);
	TurretTop->SetupAttachment(TurretBase);

	CapsulePlayerCheck = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsulePlayerCheck"));
	CapsulePlayerCheck->SetupAttachment(TurretTop);
	CapsulePlayerCheck->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel3);
	CapsulePlayerCheck->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	CapsulePlayerCheck->OnComponentBeginOverlap.AddDynamic(this, &ATurret::OnCheckBeginOverlap);
	CapsulePlayerCheck->OnComponentEndOverlap.AddDynamic(this, &ATurret::OnCheckEndOverlap);

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	ArrowComponent->SetupAttachment(TurretTop);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));


	ScanRotation = 0;
	TurnSpeed = 10;
	bSayHello = false;
	EndAngle = 60.0f;
	bIsTurretDestroyed = false;
	bIsPlayerOverlap = false;
	ScanInterpSpeed = 5.0f;
	LookAtInterpSpeed = 12.0f;
	FireRate = 0.5f;
}

void ATurret::BeginPlay()
{
	Super::BeginPlay();
	HealthComponent->OnHealthExhausted.AddDynamic(this, &ATurret::DestroyTurret);
}

void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ScanRotation += TurnSpeed * DeltaTime;

	if (FMath::Abs(ScanRotation) >= EndAngle)
	{
		TurnSpeed = -1 * TurnSpeed;
	}

	if (PlayerCharacter && (bIsPlayerOverlap || bIsPlayerTracked))
	{
		CheckPlayerInView();

		if (bIsPlayerTracked)
		{
			FRotator LookAtRotWorld = UKismetMathLibrary::FindLookAtRotation(PlayerCharacter->GetActorLocation(), TurretTop->GetComponentLocation());
			FRotator LookAtRotLocal = UKismetMathLibrary::InverseTransformRotation(GetActorTransform(), LookAtRotWorld);
			SetRotationTurretTopSmooth(LookAtRotLocal, LookAtInterpSpeed);

			if (!GetWorld()->GetTimerManager().IsTimerActive(TimerHandle))
			{
				GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ATurret::Fire, FireRate, true);
			}
		}
		else
		{
			SetRotationTurretTopSmooth(FRotator(0.0f, ScanRotation, 0.0f), ScanInterpSpeed);
		}
	}
	else
	{
		SetRotationTurretTopSmooth(FRotator(0.0f, ScanRotation, 0.0f), ScanInterpSpeed);
	}
	//GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Red, FString::Printf(TEXT("Scan Rotation: %f"), ScanRotation));
}

void ATurret::DestroyTurret(FHitResult Hit)
{

	if (!bIsTurretDestroyed)
	{
		PrimaryActorTick.SetTickFunctionEnable(false);
		TurretTop->SetSimulatePhysics(true);
		if (Hit.ImpactPoint != FVector(0.0f, 0.0f, 0.0f))
		{
			TurretTop->AddImpulseAtLocation((Hit.ImpactNormal + FVector(0.0f, 0.0f, 0.1f)) * 10000, Hit.ImpactPoint);
		}
		else
		{
			TurretTop->AddImpulseAtLocation(FVector(FMath::FRandRange(-0.5f, 0.5f), FMath::FRandRange(-0.5f, 0.5f), 1.0f) * 10000, GetActorLocation());
		}
		UGameplayStatics::PlaySoundAtLocation(this, DestroySound, GetActorLocation(), 0.5f);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ExplosionSystem, GetActorLocation() + FVector(0.0f, 0.0f, 10.0f), GetActorRotation());

		bIsPlayerTracked = false;
		bIsTurretDestroyed = true;

		TurretDestroyed();
	}
}

void ATurret::OnCheckBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacter* Character = Cast<ACharacter>(OtherActor);

	if (Character)
	{
		PlayerCharacter = Character;
		bIsPlayerOverlap = true;
		//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("bIsPlayerOverlap: %d"), bIsPlayerOverlap));
	}

}

void ATurret::OnCheckEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ACharacter* Character = Cast<ACharacter>(OtherActor);

	if (Character)
	{
		bIsPlayerOverlap = false;
		//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("bIsPlayerOverlap: %d"), bIsPlayerOverlap));
	}

}

void ATurret::Fire()
{
	if (bIsPlayerTracked)
	{
		if (FireActor)
		{
			GetWorld()->SpawnActor<AActor>(FireActor, ArrowComponent->GetComponentTransform());
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FireSystem, ArrowComponent->GetComponentLocation(), ArrowComponent->GetComponentRotation());
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation(), 0.5f);
		}
	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
}

void ATurret::SetRotationTurretTopSmooth(FRotator NewRotation, float InterpSpeed)
{
	TurretTop->SetRelativeRotation(UKismetMathLibrary::RInterpTo(TurretTop->GetRelativeRotation(), NewRotation, GetWorld()->GetDeltaSeconds(), InterpSpeed));
}

void ATurret::CheckPlayerInView()
{
	FHitResult HitResult;
	FVector Start = TurretTop->GetComponentLocation() + FVector(0.0f, 0.0f, 50.05f);
	FVector End = PlayerCharacter->GetActorLocation() + FVector(0.0f, 0.0f, PlayerCharacter->BaseEyeHeight);

	FCollisionObjectQueryParams ObjectTypeParams;
	ObjectTypeParams.AddObjectTypesToQuery(ECollisionChannel::ECC_WorldStatic);
	ObjectTypeParams.AddObjectTypesToQuery(ECollisionChannel::ECC_WorldDynamic);
	ObjectTypeParams.AddObjectTypesToQuery(ECollisionChannel::ECC_Pawn);
	ObjectTypeParams.AddObjectTypesToQuery(ECollisionChannel::ECC_PhysicsBody);

	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	bool bHit = GetWorld()->LineTraceSingleByObjectType(HitResult, Start, End, ObjectTypeParams, CollisionParams);
	//DrawDebugLine(GetWorld(), Start, End, FColor::Red);

	if (bHit)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Hit Actor: %s"), *HitResult.GetActor()->GetName());

		if (HitResult.GetActor() == PlayerCharacter)
		{

			if (!bIsPlayerTracked)
			{
				UGameplayStatics::PlaySoundAtLocation(this, TargetedSound, GetActorLocation(), 1.0f);
			}

			bIsPlayerTracked = true;

			return;
		}
	}
	bIsPlayerTracked = false;
}
	

