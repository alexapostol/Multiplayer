// Fill out your copyright notice in the Description page of Project Settings.

#include "MainMenu.h"

#include "Components/Button.h"

bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success)return false;

	if (!ensure(Host != nullptr)) return false;
	Host->OnClicked.AddDynamic(this, &UMainMenu::HostServer);

	if (!ensure(Join != nullptr)) return false;
	//Join->OnClicked.AddDynamic(this, &UMainMenu::JoinServer("ala"));

	return true;
}

void UMainMenu::Setup()
{
	this->AddToViewport();
	
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	FInputModeUIOnly InputModeData;
	InputModeData.SetWidgetToFocus(this->TakeWidget());
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

	PlayerController->SetInputMode(InputModeData);

	PlayerController->bShowMouseCursor = true;
}

void UMainMenu::SetMenuInterface(IMenuInterface* MenuInterface)
{
	this->MenuInterface = MenuInterface;
}

void UMainMenu::TearDown()
{
	this->RemoveFromViewport();

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	FInputModeGameOnly InputModeData;
	PlayerController->SetInputMode(InputModeData);

	PlayerController->bShowMouseCursor = false;
}

void UMainMenu::HostServer()
{
	if (!ensure(MenuInterface != nullptr))
	{
		MenuInterface->Host();
	}
	
}

void UMainMenu::JoinServer(FString a)
{
	UE_LOG(LogTemp, Warning, TEXT("I will join"));
}

