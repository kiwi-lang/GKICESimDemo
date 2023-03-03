// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GKICESimDemoHud.generated.h"

UCLASS(config = Game)
class AGKICESimDemoHud : public AHUD
{
	GENERATED_BODY()

public:
	AGKICESimDemoHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
