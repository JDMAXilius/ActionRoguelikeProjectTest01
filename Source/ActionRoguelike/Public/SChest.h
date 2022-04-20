// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SGameplayInterface.h"
#include "SChest.generated.h"

class UStaticMeshComponent;
UCLASS()
class ACTIONROGUELIKE_API ASChest : public AActor //, public USGameplayInterface
{
	GENERATED_BODY()
		
	//void Interact_Implementation(APawn* InstigatorPawn);
public:	
	// Sets default values for this actor's properties
	ASChest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* LidMesh;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
