// Fill out your copyright notice in the Description page of Project Settings.


#include "MyProps.h"

// Sets default values
AMyProps::AMyProps()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyProps::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyProps::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

