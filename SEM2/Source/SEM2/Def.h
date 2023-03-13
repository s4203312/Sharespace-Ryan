// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Def.generated.h"

UCLASS()
class SEM2_API ADef : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADef();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attributes)
	FString input;
};
