// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEST_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY(BlueprintReadOnly, Category = "Health")
	float MaxHealth = 100.0f;
	UPROPERTY(BlueprintReadOnly, Category = "Health")
	float MaxShield = 100.0f;
	UPROPERTY(BlueprintReadOnly, Category = "Health")
	float CurrentHealth;
	UPROPERTY(BlueprintReadOnly, Category = "Health")
	float CurrentShield;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable, Category = "Health")
	void TakeDamage(float DamageAmount);

	UFUNCTION(BlueprintCallable, Category = "Health")
	void Heal(float healAmount);
	UFUNCTION(BlueprintCallable, Category = "Health")
	void shield(float shieldAmount);
};
