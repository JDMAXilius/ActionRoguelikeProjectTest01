// Fill out your copyright notice in the Description page of Project Settings.


#include "SAICharacter.h"
#include "Perception/PawnSensingComponent.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"
//#include "SAttributeComponent.h"
//#include "BrainComponent.h"
//#include "SWorldUserWidget.h"
//#include "Components/CapsuleComponent.h"
//#include "GameFramework/CharacterMovementComponent.h"
//#include "SActionComponent.h"

// Sets default values
ASAICharacter::ASAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensingComp");
}

// Called when the game starts or when spawned
void ASAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void ASAICharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	PawnSensingComp->OnSeePawn.AddDynamic(this, &ASAICharacter::OnPawnSeen);
	//AttributeComp->OnHealthChanged.AddDynamic(this, &ASAICharacter::OnHealthChanged);
}

void ASAICharacter::OnPawnSeen(APawn* Pawn)
{
	AAIController* AIC = Cast<AAIController>(GetController());
	if (AIC)
	{
		UBlackboardComponent* BB = AIC->GetBlackboardComponent();
		BB->SetValueAsObject("TargetActor", Pawn);
		DrawDebugString(GetWorld(), GetActorLocation(), "Player Spotted", nullptr, FColor::White, 4.0f, true);
	}
	
	
}