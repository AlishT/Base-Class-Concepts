// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeaponData.generated.h"

/**
 * 
 */
UCLASS()
class BASECLASSCONCEPTS_API UWeaponData : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditDefaultsOnly, Category = "Flaot Value")
	float Var = 0.0f;

	UFUNCTION(BlueprintCallable)
	float GetProperty(float FloatValue);
};
