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

	virtual void Init();

	// Helper Functions for Showing UI Widgets
	UFUNCTION(BlueprintCallable)
	void ShowHUDUIWidget();

	UFUNCTION(BlueprintCallable)
	void ExitHUDUIWidget();

	UFUNCTION(BlueprintCallable)
	void ShowStoreUIWidget();

	UFUNCTION(BlueprintCallable)
	void ExitStoreUIWidget();

	UFUNCTION(BlueprintCallable)
	void ShowGameOverWidget();

	UFUNCTION(BlueprintCallable)
	void ExitGameOverWidget();

	UFUNCTION(BlueprintCallable)
	void ShowMainMenuUIWidget();

	UFUNCTION(BlueprintCallable)
	void ExitMainMenuUIWidget();

	// Player resources and in game economy management
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int32 PlayerResources;

	UFUNCTION()
		void AddResources(int32 resource);

	
private:

	// Widget class for creating UI Widgets
	TSubclassOf<class UUserWidget> HUDUIWidgetClass;
	TSubclassOf<class UUserWidget> StoreUIWidgetClass;
	TSubclassOf<class UUserWidget> GameOverUIWidgetClass;
	TSubclassOf<class UUserWidget> MainMenuUIWidgetClass;

	// Reference to player Controller
	APlayerController* PlayerControllerRef;

public:

};
