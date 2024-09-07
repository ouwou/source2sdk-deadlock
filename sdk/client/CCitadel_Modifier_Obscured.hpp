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
	// Size: 0xf0
	// Has VTable
	class CCitadel_Modifier_Obscured : public client::CCitadelModifier
	{
	public:
		float m_flStartObscuredAmount; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c4[0x4]; // 0xc4
	public:
		CUtlVectorFixedGrowable<client::ParticleIndex_t,3> m_AmbientParticles; // 0xc8		
	};
};
