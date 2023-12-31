// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "InputActionValue.h"
#include "VerticalGJ_Group1Character.generated.h"


UCLASS(config=Game)
class AVerticalGJ_Group1Character : public ACharacter
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ResourceCollision, meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* ResourceCollision;

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;


public:
	AVerticalGJ_Group1Character();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
		bool GetRotated;

	// Properties and Helper functions for player upgrades
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Projectile)
		float ProjectileUpgrade;

	UFUNCTION(BlueprintCallable)
		void UpgradeCollisionRadius(float radiusIncrease);

	UFUNCTION(BlueprintCallable)
		void UpgradeWalkSpeed(float walkIncrease);

	UFUNCTION(BlueprintCallable)
		void UpgradeProjectile(float powerIncrease);

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
	
	UFUNCTION(BlueprintCallable)
	void Fire(FVector Loc, FRotator Rot, UClass* Spawning);
			

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

