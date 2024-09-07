#pragma once
#include "client/CCitadelModifierAura.hpp"
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
	class CCitadel_Modifier_Cadence_Crescendo_AOE : public client::CCitadelModifierAura
	{
	private:
		[[maybe_unused]] uint8_t __pad00e0[0x8]; // 0xe0
	public:
		int32_t m_nTicks; // 0xe8		
	};
};
