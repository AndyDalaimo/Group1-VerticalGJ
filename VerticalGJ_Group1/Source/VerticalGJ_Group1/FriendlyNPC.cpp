// Fill out your copyright notice in the Description page of Project Settings.


#include "FriendlyNPC.h"

// Sets default values
AFriendlyNPC::AFriendlyNPC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFriendlyNPC::BeginPlay()
{
	Super::BeginPlay();
	FriendlyProperties.Initialize((uint8)FriendlyProperties.type);
	
}

// Called every frame
void AFriendlyNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Set Defauly values for Differnet Friendly depending on Type
void FFriendlyProperties::Initialize(uint8 t)
{
	Durability = 10;

	switch (t)
	{
	case(0) :
		SlowEffect = 10.f;
		TrapEffect = false;
		HealEffect = 0.f;
		return;
	case (1) :
		SlowEffect = 0.f;
		TrapEffect = true;
		HealEffect = 0.f;
		return;
	case (2) :
		SlowEffect = 0.f;
		TrapEffect = false;
		HealEffect = 10.f;
		return;
	default :
		SlowEffect = 0.f;
		TrapEffect = false;
		HealEffect = 0.f;
		return;
	}

}
