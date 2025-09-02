// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageZone.h"

// Sets default values
ADamageZone::ADamageZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ADamageZone::ADamageZone(float damagePerSecond)
{
	
}

// Called when the game starts or when spawned
void ADamageZone::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADamageZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

void ADamageZone::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

// Called every frame
void ADamageZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

