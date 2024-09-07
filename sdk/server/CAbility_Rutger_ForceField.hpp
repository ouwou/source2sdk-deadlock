#pragma once
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc80
	// Has VTable
	class CAbility_Rutger_ForceField : public server::CCitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_hChargingParticle; // 0xad8		
		client::ParticleIndex_t m_hExplodeParticle; // 0xadc		
		Vector m_vSpawnPos; // 0xae0		
		entity2::GameTime_t m_fTimeToDestroyForceField; // 0xaec		
		bool m_bFirstThink; // 0xaf0		
	};
};
