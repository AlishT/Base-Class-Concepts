// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponData.h"

float UWeaponData::GetProperty(float FloatValue) 
{
	FFloatProperty* FloatProp = FindField<FFloatProperty>(this->GetClass(), TEXT("FloatVar"));

	if (FloatProp != nullptr)
	{
		FloatValue = FloatProp->GetPropertyValue_InContainer(this);
	}

	return FloatValue;

}