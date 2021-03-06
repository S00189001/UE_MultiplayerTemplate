// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MasterGameInstance.generated.h"

/**
 *
 */
UCLASS()
class UE_MULTIPLAYERTEMP_API UMasterGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UMasterGameInstance(const FObjectInitializer& ObjectInitializer);

	virtual void Init();

	UFUNCTION(Exec)
		void Host();

	UFUNCTION(Exec)
		void Join(const FString& Address);
};
