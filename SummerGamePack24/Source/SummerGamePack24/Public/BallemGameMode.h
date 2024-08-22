// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BallemGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SUMMERGAMEPACK24_API ABallemGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	class APathManager* GetBallemPathManager() { return BallemPathManager; }

	void UpdateGoals(int AddValue);

	UFUNCTION(BlueprintImplementableEvent)
	void AddBasicControls();

	UFUNCTION(BlueprintImplementableEvent)
	void AddBuildControls();

	UFUNCTION(BlueprintImplementableEvent)
	void RemoveBuildControls();

	UFUNCTION(BlueprintImplementableEvent)
	void AddHoverControls();

	UFUNCTION(BlueprintImplementableEvent)
	void RemoveHoverControls();

protected:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void WinGame();

private:

	int GoalsToWin = 0;

	int GoalsCompleted = 0;

	UPROPERTY(EditAnywhere, Category = "Paths")
	TSubclassOf<class APathManager> BallemPathManagerClass;

	void CalculateGoalsToWin();

	void CheckForWin();

	class APathManager* BallemPathManager;
	
};
