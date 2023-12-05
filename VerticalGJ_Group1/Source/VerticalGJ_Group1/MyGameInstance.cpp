// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

UMyGameInstance::UMyGameInstance(const FObjectInitializer& ObjectInitializer) : PlayerResources(10)
{

}

void UMyGameInstance::AddResources(int32 resource)
{
	PlayerResources += resource;
}


// initialize default values for new game
void UMyGameInstance::Init()
{
	PlayerResources = 10;


}
