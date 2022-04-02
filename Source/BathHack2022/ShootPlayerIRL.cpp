// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootPlayerIRL.h"
#include "Engine/Engine.h"

UShootPlayerIRL::UShootPlayerIRL()
{
	//init script
}

void UShootPlayerIRL::shootPlayer()
{
	//debug messages	
	UE_LOG(LogTemp, Warning, TEXT("IRL shot triggered")); 
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("IRL shot triggered"));

	//add api call to trigger shot here
}
