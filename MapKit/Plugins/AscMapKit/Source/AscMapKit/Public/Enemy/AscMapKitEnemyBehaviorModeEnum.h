#pragma once

// Generated
#include "AscMapKitEnemyBehaviorModeEnum.generated.h"

UENUM()
enum class EAscMapKitEnemyBehaviorModeEnum : uint8
{
	Idle = 0,      // slow tick
	Normal,        // normal tick
	Aggressive,    // angry, goes after target, does not go idle
	Patrol,        // goes from waypoint to waypoint setup by map maker
	Reinforcement, // seeks out clusters of other enemies; or, a robot with lots of shields (?), but will continue to look at attack target if has line-of-sight
	Retreat,       // runs away to random waypoints and ignores looking at attack target
	Snipe          // moves around to random waypoints (or awareness actor hit location) while seeking out targets
};