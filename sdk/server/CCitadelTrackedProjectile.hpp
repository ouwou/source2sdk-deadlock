#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelProjectile.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x848
	// Has VTable
	class CCitadelTrackedProjectile : public server::CCitadelProjectile
	{
	public:
		entity2::GameTime_t m_flTrackingStartTime; // 0x820		
		float m_flTrackingDampingCoefficient; // 0x824		
		float m_flTrackingSpeed; // 0x828		
		float m_flTrackingDuration; // 0x82c		
		entity2::GameTime_t m_flTrackingWindowStart; // 0x830		
		entity2::GameTime_t m_flTrackingWindowEnd; // 0x834		
		float m_flTrackingStopDuration; // 0x838		
		Vector m_vLastValidPosition; // 0x83c		
	};
};
