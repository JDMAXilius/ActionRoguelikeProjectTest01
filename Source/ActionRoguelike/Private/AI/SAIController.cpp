// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

// Called when the game starts or when spawned
void ASAIController::BeginPlay()
{
	Super::BeginPlay();
	RunBehaviorTree(BehaviorTree);

	/*APawn* MyPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	 	if (MyPawn)
	 	{
	 		GetBlackboardComponent()->SetValueAsVector("MovetoLocation", MyPawn->GetActorLocation());
	 
	 		GetBlackboardComponent()->SetValueAsObject("TargetActor", MyPawn);
	 	}*/
}
