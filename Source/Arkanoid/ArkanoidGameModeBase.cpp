// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArkanoidGameModeBase.h"

void AArkanoidGameModeBase::BeginPlay()
{

	Super::BeginPlay();

	float EjeX = 50;
	float EjeY = 50;
	float EjeZ = 50;

	Brick = GetWorld()->SpawnActor<ABrick>(FVector(EjeX,EjeY,EjeZ), FRotator::ZeroRotator);
	UE_LOG(LogTemp,Warning ,TEXT("Aparecio!!!!!!!!"));
}
