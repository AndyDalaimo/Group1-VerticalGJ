// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

UMyGameInstance::UMyGameInstance(const FObjectInitializer& ObjectInitializer) : PlayerResources(10)
{

	static ConstructorHelpers::FClassFinder<UUserWidget> HUDFinder(TEXT("/Game/UI/WBP_HUD"));
	static ConstructorHelpers::FClassFinder<UUserWidget> StoreFinder(TEXT("/Game/UI/WBP_Store"));
	static ConstructorHelpers::FClassFinder<UUserWidget> GameOverFinder(TEXT("/Game/UI/WBP_GameOver"));
	static ConstructorHelpers::FClassFinder<UUserWidget> MainMenuFinder(TEXT("/Game/UI/WBP_MainMenu"));


	if (!HUDFinder.Succeeded() && !StoreFinder.Succeeded() && 
		!GameOverFinder.Succeeded() && !MainMenuFinder.Succeeded())
	{
		UE_LOG(LogTemp, Warning, TEXT("UI NOT FOUND"));
		return;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UI FOUND"));
		HUDUIWidgetClass = HUDFinder.Class;
		StoreUIWidgetClass = StoreFinder.Class;
		GameOverUIWidgetClass = GameOverFinder.Class;
		MainMenuUIWidgetClass = MainMenuFinder.Class;
	}
}

// Initialize default values for new game
void UMyGameInstance::Init()
{
	Super::Init();

	PlayerResources = 10;
}

// -----------------------------------------------------------------------------------
// ----------------------- Helper Functions for UI Events ----------------------------
// -----------------------------------------------------------------------------------

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

	// APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (PlayerControllerRef == NULL)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Player Controller Not Valid");
	}
	else {
		// Set up input parameters for player controller in Game
		FInputModeGameAndUI InputModeData;
		InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::LockInFullscreen);

		// Set Input Mode
		PlayerControllerRef->SetInputMode(InputModeData);
		PlayerControllerRef->bShowMouseCursor = false;
	}
}

// Show Game over and Allow player to go back to menu or restart
// via input mode
void UMyGameInstance::ShowGameOverWidget()
{
	UUserWidget* GameOverUI = CreateWidget<UUserWidget>(this, *GameOverUIWidgetClass);
	GameOverUI->AddToViewport();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, GameOverUI ? GameOverUI->GetName() : "Not valid");

	// Reference to Player Controller
	PlayerControllerRef = GetFirstLocalPlayerController();

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

// Remove game over widget from viewport 
void UMyGameInstance::ExitGameOverWidget()
{
	// Remove Store UI from viewport
	UWidgetLayoutLibrary::RemoveAllWidgets(GetWorld());

}

// Show Main Menu Widget
// Initialize Player Properties and Economy
void UMyGameInstance::ShowMainMenuUIWidget()
{
	UUserWidget* MainMenuUI = CreateWidget<UUserWidget>(this, *MainMenuUIWidgetClass);
	MainMenuUI->AddToViewport();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, MainMenuUI ? MainMenuUI->GetName() : "Not valid");

	// Reference to Player Controller
	PlayerControllerRef = GetFirstLocalPlayerController();

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

// Remove Main Menu widget and give control to Player
void UMyGameInstance::ExitMainMenuUIWidget()
{
	// Remove MainMenu UI from viewport
	UWidgetLayoutLibrary::RemoveAllWidgets(GetWorld());

	// APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (PlayerControllerRef == NULL)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Player Controller Not Valid");
	}
	else {
		// Set up input parameters for player controller in Game
		FInputModeGameAndUI InputModeData;
		InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::LockInFullscreen);

		// Set Input Mode
		PlayerControllerRef->SetInputMode(InputModeData);
		PlayerControllerRef->bShowMouseCursor = false;
	}
}

// -----------------------------------------------------------------------------------
// ---------------- Functions for Player Economy and Store Front ---------------------
// -----------------------------------------------------------------------------------


// Called when Player picks up a resource. 
// Value is added to Player's economy and can be spent in store
void UMyGameInstance::AddResources(int32 resource)
{
	PlayerResources += resource;

	UE_LOG(LogTemp, Warning, TEXT("Player Resources: %d"), PlayerResources);
}

// Called when Player purchases something in the store
void UMyGameInstance::SubtractResources(int32 purchaseAmount)
{
	PlayerResources -= purchaseAmount;

	UE_LOG(LogTemp, Warning, TEXT("Player Resources: %d"), PlayerResources);
}


