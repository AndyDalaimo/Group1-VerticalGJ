// Fill out your copyright notice in the Description page of Project Settings.


#include "Resource.h"

// Sets default values
AResource::AResource()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	Mesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollider->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

}


// Called when the game starts or when spawned
void AResource::BeginPlay()
{
	Super::BeginPlay();

	GameInstanceRef = Cast<UMyGameInstance>(GetWorld()->GetGameInstance());

	if (GameInstanceRef != NULL) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Reference to Gameinstance Made");

// Set value for Player Pickup in Game Instance
	InitializeResourceValue((uint8)Type);
}

// Called every frame
void AResource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Collision Event for Resource
// Will update economy in Game Instance and then Destroy Self
void AResource::ResourceCollisionEvent_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GameInstanceRef->AddResources(Value);
}

// Initialize Resource value based on its type
// Type to be set in the Children Blueprint 
void AResource::InitializeResourceValue(uint8 type)
{
	switch (type)
	{
	case (0) :
		Value = 10.f;
		return;
	case (1) :
		Value = 25.f;
		return;
	case (2) :
		Value = 50.f;
		return;
	default :
		Value = 10.f;
		return;
	}
	return;
}
