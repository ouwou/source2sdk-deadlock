#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe08
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bAirCast"
	class CCitadel_Ability_Chrono_TimeWall : public client::C_CitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_hChargingParticle; // 0xc60		
		Vector m_vSpawnPos; // 0xc64		
		QAngle m_qAngles; // 0xc70		
		// MNetworkEnable
		bool m_bAirCast; // 0xc7c		
	};
};
