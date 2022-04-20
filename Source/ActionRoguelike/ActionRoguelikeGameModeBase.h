// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
//#include "EnvironmentQuery/EnvQuery.h"
//#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "ActionRoguelikeGameModeBase.generated.h"

class UEnvQuery;
class UEnvQueryInstanceBlueprintWrapper;

/**
 * 
 */
UCLASS()
class ACTIONROGUELIKE_API AActionRoguelikeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	TSubclassOf<AActor> MinionClass;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UEnvQuery* SpawnBotQuery;

	FTimerHandle TimerHandle_SpawnBots;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
		float SpawnTimerInterval;
	
	UFUNCTION()
		void SpawnBotTimerElapsed();
	
	UFUNCTION()
		void OnBotSpawnQueryCompleted(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);

public:

	AActionRoguelikeGameModeBase();

	virtual void StartPlay() override;
};
