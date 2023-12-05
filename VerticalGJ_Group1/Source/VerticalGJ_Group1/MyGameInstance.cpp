// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

UMyGameInstance::UMyGameInstance(const FObjectInitializer& ObjectInitializer) : PlayerResources(10)
{

	static ConstructorHelpers::FClassFinder<UUserWidget> HUDFinder(TEXT("/Game/UI/WBP_HUD"));

	if (!HUDFinder.Succeeded())
	{
		UE_LOG(LogTemp, Warning, TEXT("UI NOT FOUND"));
		return;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UI FOUND"));
		HUDUIWidgetClass = HUDFinder.Class;
	}
}

// initialize default values for new game
void UMyGameInstance::Init()
{
	PlayerResources = 10;

	if (HUDUIWidgetClass) ShowHUDUIWidget();
}

// Show HUD on Player screen
void UMyGameInstance::ShowHUDUIWidget()
{
	UUserWidget* HUDUI = CreateWidget<UUserWidget>(this, *HUDUIWidgetClass);
	HUDUI->AddToViewport();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, HUDUI ? HUDUI->GetName() : "Not valid");
}

// Called when Player picks up a resource. 
// Value is added to Player's economy and can be spent in store
void UMyGameInstance::AddResources(int32 resource)
{
	PlayerResources += resource;
}


