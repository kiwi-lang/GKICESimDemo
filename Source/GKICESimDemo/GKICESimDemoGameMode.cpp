// Copyright Epic Games, Inc. All Rights Reserved.

#include "GKICESimDemoGameMode.h"
#include "GKICESimDemoPawn.h"
#include "GKICESimDemoHud.h"

AGKICESimDemoGameMode::AGKICESimDemoGameMode()
{
	DefaultPawnClass = AGKICESimDemoPawn::StaticClass();
	HUDClass = AGKICESimDemoHud::StaticClass();
}
