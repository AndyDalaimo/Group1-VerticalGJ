// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

UMyGameInstance::UMyGameInstance(const FObjectInitializer& ObjectInitializer) : PlayerResources(10)
{

	static ConstructorHelpers::FClassFinder<UUserWidget> HUDFinder(TEXT("/Game/UI/WBP_HUD"));
	static ConstructorHelpers::FClassFinder<UUserWidget> StoreFinder(TEXT("/Game/UI/WBP_Store"));


	if (!HUDFinder.Succeeded() && !StoreFinder.Succeeded())
	{
		UE_LOG(LogTemp, Warning, TEXT("UI NOT FOUND"));
		return;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UI FOUND"));
		HUDUIWidgetClass = HUDFinder.Class;
		StoreUIWidgetClass = StoreFinder.Class;
	}
}

// initialize default values for new game
void UMyGameInstance::Init()
{
	Super::Init();

	PlayerResources = 10;

	if (HUDUIWidgetClass) {
		ShowHUDUIWidget();
		// ShowStoreUIWidget();
	}
}

// Show HUD on Player screen
void UMyGameInstance::ShowHUDUIWidget()
{
	UUserWidget* HUDUI = CreateWidget<UUserWidget>(this, *HUDUIWidgetClass);
	HUDUI->AddToViewport();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, HUDUI ? HUDUI->GetName() : "Not valid");
}


// Exit HUD Widget
// Reference to player Controller
// Set up UI Parameters here for Store Interaction??
void UMyGameInstance::ExitHUDUIWidget()
{
	// Remove HUD from viewport
	UWidgetLayoutLibrary::RemoveAllWidgets(GetWorld());
}

// Show Store Widget on Viewport. Give Player mouse control
// to purchase items and use
void UMyGameInstance::ShowStoreUIWidget()
{
	UUserWidget* StoreUI = CreateWidget<UUserWidget>(this, *StoreUIWidgetClass);
	StoreUI->AddToViewport();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, StoreUI ? StoreUI->GetName() : "Not valid");

	// Reference to Player Controller
	PlayerControllerRef = GetFirstLocalPlayerController();


	// Set input mode
	if (PlayerControllerRef == NULL)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Player Controller Not Valid");
		
	}
	else {
		// Set up Input Parameters
		FInputModeUIOnly InputModeData;
		InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		PlayerControllerRef->SetInputMode(InputModeData);
		PlayerControllerRef->bShowMouseCursor = true;
	}
	
}

// Exit Store UI and give Player back control for 
// game interaction
void UMyGameInstance::ExitStoreUIWidget()
{
	// Remove Store UI from viewport
	UWidgetLayoutLibrary::RemoveAllWidgets(GetWorld());
}




// Called when Player picks up a resource. 
// Value is added to Player's economy and can be spent in store
void UMyGameInstance::AddResources(int32 resource)
{
	PlayerResources += resource;
}


