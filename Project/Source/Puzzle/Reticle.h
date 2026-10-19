// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Reticle.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLE_API AReticle : public AHUD
{
	GENERATED_BODY()
	
protected:
	virtual void DrawHUD()override;

	UPROPERTY(EditAnywhere)
	class UTexture2D* ReticleTexture;
};
