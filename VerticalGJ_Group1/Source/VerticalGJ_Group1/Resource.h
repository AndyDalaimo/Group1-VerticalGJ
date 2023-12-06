// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyGameInstance.h"
#include "Components/BoxComponent.h"
#include "Resource.generated.h"

UENUM(BlueprintType)
enum class EResourceType : uint8 {
	SMALL = 0 UMETA(DisplayName = "Small"),
	MEDIUM = 1 UMETA(DisplayName = "Medium"),
	LARGE = 2 UMETA(DisplayName = "Large")
};

UCLASS()
class VERTICALGJ_GROUP1_API AResource : public AActor
{
	GENERATED_BODY()

public:

	// Static Mesh for Resource
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Mesh, meta = (AllowPrivatAccess = "true"))
	class UStaticMeshComponent* Mesh;


public:	
	// Sets default values for this actor's properties
	AResource();

	UFUNCTION()
	void InitializeResourceValue(uint8 type);
	
	// Type of Resource droped. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource Properties")
	EResourceType Type;

	// Value for Resource bassed on type
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource Properties")
	int32 Value;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
