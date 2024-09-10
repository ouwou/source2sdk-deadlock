#pragma once
#include "server/CPhysicsProp.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd30
	// Has VTable
	class CPhysicsPropRespawnable : public server::CPhysicsProp
	{
	public:
		Vector m_vOriginalSpawnOrigin; // 0xcf8		
		QAngle m_vOriginalSpawnAngles; // 0xd04		
		Vector m_vOriginalMins; // 0xd10		
		Vector m_vOriginalMaxs; // 0xd1c		
		float m_flRespawnDuration; // 0xd28		
		
		// Datamap fields:
		// void CPhysicsPropRespawnableMaterialize; // 0x0
	};
};
