#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelBulletTimeWarp;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x308
	// Has VTable
	class CCitadel_Modifier_Chrono_KineticCarbine : public server::CCitadelModifier
	{
	public:
		int32_t m_nBulletCount; // 0xc8		
		float m_flElapsedPct; // 0xcc		
		CHandle<server::CCitadelBulletTimeWarp> m_hTimeWarp; // 0xd0		
		client::ParticleIndex_t m_nFullyChargedParticle; // 0xd4		
	};
};
