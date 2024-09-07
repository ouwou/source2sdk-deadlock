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
	// Size: 0x140
	// Has VTable
	class CCitadel_Modifier_ThrowSandProjectile : public client::CCitadel_Modifier_Intrinsic_Base
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
	public:
		Vector m_vInitialCastPosition; // 0x130		
		client::ParticleIndex_t m_iParticleEffect; // 0x13c		
	};
};
