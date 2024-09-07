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
	// Size: 0x250
	// Has VTable
	class CCitadel_Modifier_VoidSphere : public server::CCitadelModifier
	{
	public:
		bool m_bTeleported; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
	public:
		client::ParticleIndex_t m_particleStart; // 0xcc		
		client::ParticleIndex_t m_particleEnd; // 0xd0		
		client::ParticleIndex_t m_particleTrail; // 0xd4		
		Vector m_vecEndLocation; // 0xd8		
		Vector m_vecStartPosition; // 0xe4		
		Vector m_vecEndLocationCaster; // 0xf0		
	};
};
