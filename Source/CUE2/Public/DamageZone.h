// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HealthComponent.h"
#include "DamageZone.generated.h"

UCLASS()
class CUE2_API ADamageZone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADamageZone();
	ADamageZone(float damagePerSecond);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UHealthComponent* HealthComp;
	TArray<UHealthComponent> HealthComps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float _damagePerSecond;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
