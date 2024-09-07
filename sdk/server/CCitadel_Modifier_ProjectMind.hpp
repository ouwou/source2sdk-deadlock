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
	// Size: 0x1a8
	// Has VTable
	class CCitadel_Modifier_ProjectMind : public server::CCitadelModifier
	{
	public:
		client::ParticleIndex_t m_particleStart; // 0xc8		
		client::ParticleIndex_t m_particleEnd; // 0xcc		
		client::ParticleIndex_t m_particleTrail; // 0xd0		
		Vector m_vecEndLocation; // 0xd4		
		Vector m_vecStartPosition; // 0xe0		
		float m_flStartDelay; // 0xec		
		Vector m_vecApplyOffset; // 0xf0		
	};
};
