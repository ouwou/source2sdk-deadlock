#pragma once
#include <cstdint>
namespace source2sdk::server
{
	struct AI_Waypoint_t;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x8
	class CAI_WaypointList
	{
	public:
		server::AI_Waypoint_t* m_pFirstWaypoint; // 0x0		
	};
};
