// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShootPlayerIRL.generated.h"

/**
 * 
 */
UCLASS()
class BATHHACK2022_API UShootPlayerIRL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UShootPlayerIRL();

	UFUNCTION(BlueprintCallable, Category = "IRLInteraction")
	static void shootPlayer();
};
