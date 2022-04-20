// Fill out your copyright notice in the Description page of Project Settings.


#include "SChest.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ASChest::ASChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Instanciate
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;

	LidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LidMesh"));
	LidMesh->SetupAttachment(BaseMesh);
}

// Called when the game starts or when spawned
void ASChest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void ASChest::Interact_Implementation(APawn* InstigatorPawn)
//{
//	//float CurrPitch = bLidOpened ? TargetPitch : 0.0f;
//	//LidMesh->SetRelativeRotation(FRotator(CurrPitch, 0, 0));
//
//}
