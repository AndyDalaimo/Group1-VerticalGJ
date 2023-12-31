// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "AIEnemyCharacter.generated.h"

// Enum for defining different enemy Types
UENUM(BlueprintType)
enum class EAIEnemyCharacterType : uint8 {
	SMALL = 0 UMETA(DisplayName = "Small"),
	MEDIUM = 1 UMETA(DisplayName = "Medium"),
	LARGE = 2 UMETA(DisplayName = "Large"),
	FLYING = 3 UMETA(DisplayName = "Flying")
};

// Struct to set properties for Each enemy type.
// Properties will be set from initialize function
USTRUCT(BlueprintType)
struct FAIEnemyCharacterProperties
{
	GENERATED_USTRUCT_BODY()

public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Struct")
		EAIEnemyCharacterType type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Struct")
		int32 HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Struct")
		int32 damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Struct")
		float speed;

public:
	// initialize enemy with defauly values
	void Initialize()
	{
		type = EAIEnemyCharacterType::SMALL;
		HP = 0;
		damage = 0;
		speed = 0;
	}

};

UCLASS()
class VERTICALGJ_GROUP1_API AAIEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAIEnemyCharacter();

	// Struct holding all of the Enemy properties (HP, Damage, Speed, isFlying)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Properties")
		FAIEnemyCharacterProperties EnemyProperties;

	UFUNCTION(BlueprintCallable)
		void InitializeEnemyProperties(uint8 type);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
