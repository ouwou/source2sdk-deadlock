#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x230
	// Has VTable
	class CCitadel_Modifier_BeltFed_Magazine : public server::CCitadelModifier
	{
	public:
		bool m_bInitialized; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
	public:
		float m_flSpinUpRateOverride; // 0xcc		
		float m_flSpinUpDecayOverride; // 0xd0		
		float m_flMaxCycleTimeOverride; // 0xd4		
		float m_flMaxBurstFireCooldownOverride; // 0xd8		
	};
};
