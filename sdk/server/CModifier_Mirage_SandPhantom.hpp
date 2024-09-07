#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x278
	// Has VTable
	class CModifier_Mirage_SandPhantom : public server::CCitadelModifier
	{
	public:
		client::ParticleIndex_t m_particleStart; // 0xc8		
		client::ParticleIndex_t m_particleEnd; // 0xcc		
		client::ParticleIndex_t m_particleTrail; // 0xd0		
		Vector m_vecStartPosition; // 0xd4		
		float m_flStartDelay; // 0xe0		
		Vector m_vecApplyOffset; // 0xe4		
	};
};
