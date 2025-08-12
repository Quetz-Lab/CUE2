// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::TakeDamage(float DamageAmount)
{
	if (CurrentHealth <= 0.0f)
	{
		return; //Ya esta muerto
	}

	CurrentHealth -= DamageAmount;
	UE_LOG(LogTemp, Warning, TEXT("Se ha recibido %f de daño. Vida restante: %f"),DamageAmount, CurrentHealth);

	if (CurrentHealth <= 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("El actor ha muerto"));
	}
}

void UHealthComponent::Heal(float healAmount)
{
	if (CurrentHealth > 0.0f)
	{
		CurrentHealth += healAmount;
	}
	else
	{
		return;
	}

	if (CurrentHealth == MaxHealth)
	{
		return; //No se puede curar
	}
}

void UHealthComponent::shield(float shieldAmount)
{
	if (CurrentShield <= 0.0f)
	{
		CurrentShield += shieldAmount;
	}
	if (CurrentShield == MaxShield)
	{
		return;
	}
}


