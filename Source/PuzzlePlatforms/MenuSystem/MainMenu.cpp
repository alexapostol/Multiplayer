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

void UMainMenu::SetMenuInterface(IMenuInterface* MenuInterface)
{
	this->MenuInterface = MenuInterface;
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

