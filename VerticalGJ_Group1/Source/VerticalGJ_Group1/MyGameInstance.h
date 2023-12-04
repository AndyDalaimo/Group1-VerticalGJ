// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Blueprint/UserWidget.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class VERTICALGJ_GROUP1_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UMyGameInstance(const FObjectInitializer& ObjectInitializer);

	UFUNCTION()
		virtual void Init();

	// Helper Functions for Showing UI Widgets
	UFUNCTION(BlueprintCallable)
	void ShowHUDUIWidget();


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int32 PlayerResources;

	UFUNCTION()
		void AddResources(int32 resource);

	
private:

	// HUD with Game Timer
	TSubclassOf<UUserWidget> HUDUIWidgetClass;
};
