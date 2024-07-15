// Fill out your copyright notice in the Description page of Project Settings.


#include "TemperatureConverter.h"

/**
 * Sets default values
*/
ATemperatureConverter::ATemperatureConverter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void ATemperatureConverter::BeginPlay()
{
	Super::BeginPlay();

	float Celsius, Fahrenheit, Converted;

	Fahrenheit = 0;

	UE_LOG(LogTemp, Warning, TEXT("Fahrenheit: %f"), Fahrenheit);

	Celsius = (Fahrenheit - 32) / 9 * 5;
	
	UE_LOG(LogTemp, Warning, TEXT("Convert to Celsius: %f"), Celsius);

	Converted = (Celsius * 9) / 5 + 32;

	UE_LOG(LogTemp, Warning, TEXT("Convert back: %f"), Converted);
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ATemperatureConverter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

