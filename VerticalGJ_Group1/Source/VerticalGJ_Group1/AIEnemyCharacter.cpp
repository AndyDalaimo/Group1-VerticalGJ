// Fill out your copyright notice in the Description page of Project Settings.


#include "AIEnemyCharacter.h"

// Sets default values
AAIEnemyCharacter::AAIEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	EnemyProperties.Initialize();
}




// Called when the game starts or when spawned
void AAIEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Set up Enemy on Begin Play
	InitializeEnemyProperties((uint8)EnemyProperties.type);
	
}

// Set up properties based on type
void AAIEnemyCharacter::InitializeEnemyProperties(uint8 type)
{
	switch (type)
	{
	case (0) :
		EnemyProperties.HP = 100;
		EnemyProperties.damage = 10;
		EnemyProperties.speed = 400.f;
		return;
	case (1) :
		EnemyProperties.HP = 100;
		EnemyProperties.damage = 20;
		EnemyProperties.speed = 300.f;
		return;
	case (2) :
		EnemyProperties.HP = 150;
		EnemyProperties.damage = 20;
		EnemyProperties.speed = 275.f;
		return;
	case (3) :
		EnemyProperties.HP = 100;
		EnemyProperties.damage = 20;
		EnemyProperties.speed = 300.f;
		return;
	default :
		EnemyProperties.HP = 100;
		EnemyProperties.damage = 10;
		EnemyProperties.speed = 400.f;
		return;
	}
	return;
}

// Called every frame
void AAIEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAIEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

