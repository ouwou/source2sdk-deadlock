#pragma once
#include "client/CCitadel_Modifier_Intrinsic_Base.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1b8
	// Has VTable
	class CCitadel_Modifier_NapalmProjectile : public client::CCitadel_Modifier_Intrinsic_Base
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
	public:
		Vector m_vInitialCastPosition; // 0x1a0		
		float m_flProjectileSpeed; // 0x1ac		
		client::ParticleIndex_t m_iParticleEffect; // 0x1b0		
	};
};
