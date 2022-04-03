// Fill out your copyright notice in the Description page of Project Settings.

//include Unreal Libraries
#include "ShootPlayerIRL.h"
#include "Engine/Engine.h"

//include http request libraries
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <future>
#include <iostream>
using namespace std;

UShootPlayerIRL::UShootPlayerIRL()
{
	//init script
}

void UShootPlayerIRL::shootPlayer()
{
	//debug messages	
	UE_LOG(LogTemp, Warning, TEXT("IRL shot triggered")); 
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("IRL shot triggered"));

	system("start curl -o data.txt http://138.38.178.204:8080/api/fire");
}