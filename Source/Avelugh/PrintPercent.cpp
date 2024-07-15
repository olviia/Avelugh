// Fill out your copyright notice in the Description page of Project Settings.


#include "PrintPercent.h"

/**
 * Sets default values
*/
APrintPercent::APrintPercent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void APrintPercent::BeginPlay()
{
	Super::BeginPlay();

	const int MaxScore{ 100 };
	int Score{ 44 };
	float Percent{ (float)Score / MaxScore };
	UE_LOG(LogTemp, Warning, TEXT("Percent: %f"), Percent * 100);

	
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void APrintPercent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

