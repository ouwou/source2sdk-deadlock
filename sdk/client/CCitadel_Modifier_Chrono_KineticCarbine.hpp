#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CCitadelBulletTimeWarp;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x300
	// Has VTable
	class CCitadel_Modifier_Chrono_KineticCarbine : public client::CCitadelModifier
	{
	public:
		int32_t m_nBulletCount; // 0xc0		
		float m_flElapsedPct; // 0xc4		
		CHandle<client::CCitadelBulletTimeWarp> m_hTimeWarp; // 0xc8		
		client::ParticleIndex_t m_nFullyChargedParticle; // 0xcc		
	};
};
