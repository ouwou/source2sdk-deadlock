#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x248
	// Has VTable
	class CCitadel_Modifier_VoidSphere : public client::CCitadelModifier
	{
	public:
		bool m_bTeleported; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
	public:
		client::ParticleIndex_t m_particleStart; // 0xc4		
		client::ParticleIndex_t m_particleEnd; // 0xc8		
		client::ParticleIndex_t m_particleTrail; // 0xcc		
		Vector m_vecEndLocation; // 0xd0		
		Vector m_vecStartPosition; // 0xdc		
		Vector m_vecEndLocationCaster; // 0xe8		
	};
};
