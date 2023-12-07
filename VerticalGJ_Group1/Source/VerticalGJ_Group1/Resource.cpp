// Fill out your copyright notice in the Description page of Project Settings.


#include "Resource.h"

// Sets default values
AResource::AResource() : lifeSpan(7.f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	Mesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

}


// Called when the game starts or when spawned
void AResource::BeginPlay()
{
	Super::BeginPlay();

	// Set value for Player Pickup in Game Instance
	InitializeResourceValue((uint8)Type);

	this->SetLifeSpan(lifeSpan);
}

// Called every frame
void AResource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


// Initialize Resource value based on its type
// Type to be set in the Children Blueprint 
void AResource::InitializeResourceValue(uint8 type)
{
	type = FMath::RandRange(0, 2);

	switch (type)
	{
	case (0) :
		Value = 25.f;
		return;
	case (1) :
		Value = 75.f;
		return;
	case (2) :
		Value = 125.f;
		return;
	default :
		Value = 25.f;
		return;
	}
	return;
}
