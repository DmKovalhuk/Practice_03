// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPP_Develope/ATurret.h"
#include "Practice_03GameMode.generated.h"


UCLASS(minimalapi)
class APractice_03GameMode : public AGameModeBase
{
	GENERATED_BODY()
	
	UPROPERTY()
	float Score;

	virtual void BeginPlay();

public:
	
	UFUNCTION()
	void OnTurretDestroy();

	APractice_03GameMode();

	UFUNCTION()
	float GetScore() { return Score; }

};



