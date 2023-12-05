// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FriendlyNPC.generated.h"


// Enum types for differnet friendly NPCs for player to buy and use
UENUM(BlueprintType)
enum class EFriendlyType : uint8
{
	SLOW = 0 UMETA(DisplayName = "Slow"),
	TRAP = 1 UMETA(DisplayName = "Trap"),
	HEAL = 2 UMETA(DisplayName = "Heal")
};

USTRUCT(BlueprintType)
struct FFriendlyProperties
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EFriendlyType type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Durability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SlowEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float HealEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool TrapEffect;

	// Initialize new Friendly
	void Initialize(uint8 t);



};

UCLASS()
class VERTICALGJ_GROUP1_API AFriendlyNPC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFriendlyNPC();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Friendly Properties")
		FFriendlyProperties FriendlyProperties;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
