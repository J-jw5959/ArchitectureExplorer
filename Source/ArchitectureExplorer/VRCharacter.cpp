// Fill out your copyright notice in the Description page of Project Settings.

#include "VRCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h" 
#include "TimerManager.h"
#include "Components/CapsuleComponent.h"
#include "AI/Navigation/NavigationSystem.h"
// Sets default values
AVRCharacter::AVRCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VRRoot"));
	VRRoot->SetupAttachment(GetRootComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(VRRoot);

	DestinationMarker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DestinationMarker"));
	DestinationMarker->SetupAttachment(GetRootComponent());
	
	 
}

// Called when the game starts or when spawned
void AVRCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	DestinationMarker->SetVisibility(false);
}

// Called every frame
void AVRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector new_Camera_Offset = Camera->GetComponentLocation() - GetActorLocation();
	new_Camera_Offset.Z = 0;

	AddActorLocalOffset(new_Camera_Offset);
	VRRoot->AddWorldOffset(-new_Camera_Offset);

	UpdateDestinationMarker();

}

void AVRCharacter::UpdateDestinationMarker()
{
	FVector start, end;
	FHitResult HitResult;
	
	start = Camera->GetComponentLocation();
	end = start + Camera->GetForwardVector() * MaxTeleportDistance;
	
	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, start, end, ECC_Visibility);

	FNavLocation navLocation;
	GetWorld()->GetNavigationSystem()->ProjectPointToNavigation(HitResult.Location, navLocation, TeleportProjectionExtent);


	if (bHit)
	{
		DestinationMarker->SetVisibility(true);
		DestinationMarker->SetWorldLocation(HitResult.Location);
	}
	else
	{
		DestinationMarker->SetVisibility(false);
	}
}

// Called to bind functionality to input
void AVRCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis(TEXT("Forward"), this, &AVRCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("Right"), this, &AVRCharacter::MoveRight);
	PlayerInputComponent->BindAction(TEXT("Teleport"),IE_Released, this, &AVRCharacter::BeginTeleport);
}

void AVRCharacter::MoveForward(float throttle)
{
	AddMovementInput(throttle * Camera->GetForwardVector());
}

void AVRCharacter::MoveRight(float throttle)
{
	AddMovementInput(throttle * Camera->GetRightVector());
}

void AVRCharacter::BeginTeleport()
{
	APlayerController *PC = Cast<APlayerController>(GetController());
	if (PC != nullptr)
	{
		PC->PlayerCameraManager->StartCameraFade(0, 1, TeleportFadeTime, FLinearColor::Black);
	}
	FTimerHandle handle;
	GetWorldTimerManager().SetTimer(handle, this, &AVRCharacter::FinishTeleport, TeleportFadeTime);
	
	
}

void AVRCharacter::FinishTeleport()
{
	SetActorLocation(DestinationMarker->GetComponentLocation() + GetCapsuleComponent()->GetScaledCapsuleHalfHeight());
	APlayerController *PC = Cast<APlayerController>(GetController());
	if (PC != nullptr)
	{
		PC->PlayerCameraManager->StartCameraFade(1, 0, TeleportFadeTime, FLinearColor::Red);
	}
}

