#pragma once

// Generated
#include "AscMapKitEnemyMovementModeEnum.generated.h"

UENUM()
enum class EAscMapKitEnemyMovementModeEnum : uint8
{
	Idle = 0,               // idle
	Normal,                 // bounces around a bit while maintaining proximity to attack target
	RelativeToTarget,       // try to stay in front of attack target
	BackAwayFromTarget,     // move forward toward attack target, then away, repeat
	SlideLeftAroundTarget,  // rotates around attack target at a specified radius
	SlideRightAroundTarget, // rotates around attack target at a specified radius
	SlideLeftRandom,        // slides without relative curvature to attack target
	SlideRightRandom,       // slides without relative curvature to attack target
	Evade                   // linear transitions between bouncing around and sliding to evade attacks
};