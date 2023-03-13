// Fill out your copyright notice in the Description page of Project Settings.


#include "Def.h"

// Sets default values
ADef::ADef()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADef::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, input);
	
}

// Called every frame
void ADef::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

