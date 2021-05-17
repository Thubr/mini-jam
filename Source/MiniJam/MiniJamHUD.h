// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MiniJamHUD.generated.h"

UCLASS()
class AMiniJamHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMiniJamHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

