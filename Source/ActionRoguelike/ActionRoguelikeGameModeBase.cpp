// Copyright Epic Games, Inc. All Rights Reserved.


#include "ActionRoguelikeGameModeBase.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "SAICharacter.h"
//#include "SAttributeComponent.h"
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"

AActionRoguelikeGameModeBase::AActionRoguelikeGameModeBase()
{
	//SpawnTimerInterval = 2.0f;
}

void AActionRoguelikeGameModeBase::StartPlay()
{
	Super::StartPlay();

	// Continuous timer to spawn in more bots.
	// Actual amount of bots and whether its allowed to spawn determined by spawn logic later in the chain...
	GetWorldTimerManager().SetTimer(TimerHandle_SpawnBots, this, &AActionRoguelikeGameModeBase::SpawnBotTimerElapsed, SpawnTimerInterval, true);


}

void AActionRoguelikeGameModeBase::SpawnBotTimerElapsed()
{
	// Run EQS to find valid spawn location
	UEnvQueryInstanceBlueprintWrapper* QueryInstance = UEnvQueryManager::RunEQSQuery(this, SpawnBotQuery, this, EEnvQueryRunMode::RandomBest5Pct, nullptr);
	if (ensure(QueryInstance))
	{
		QueryInstance->GetOnQueryFinishedEvent().AddDynamic(this, &AActionRoguelikeGameModeBase::OnBotSpawnQueryCompleted);
	}
}

void AActionRoguelikeGameModeBase::OnBotSpawnQueryCompleted(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus)
{
	if (QueryStatus != EEnvQueryStatus::Success)
	{
		UE_LOG(LogTemp, Warning, TEXT("Spawn bot EQS Query Failed!"));
		return;
	}

	// Count alive bots before spawning
	int32 NrOfAliveBots = 0;
	for (TActorIterator<ASAICharacter> It(GetWorld()); It; ++It)
	{
		ASAICharacter* Bot = *It;

		//USAttributeComponent* AttributeComp = Cast<USAttributeComponent>(Bot->GetComponentByClass(USAttributeComponent::StaticClass()));
		//if (ensure(AttributeComp) && AttributeComp->IsAlive())
		{
			NrOfAliveBots++;
		}
	}

	TArray<FVector> Locations = QueryInstance->GetResultsAsLocations();
	if (Locations.Num() > 0)
	{
		GetWorld()->SpawnActor<AActor>(MinionClass, Locations[0], FRotator::ZeroRotator);
	}
}
