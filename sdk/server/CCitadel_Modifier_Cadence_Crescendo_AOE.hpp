#pragma once
#include "server/CCitadelModifierAura.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xf8
	// Has VTable
	class CCitadel_Modifier_Cadence_Crescendo_AOE : public server::CCitadelModifierAura
	{
	private:
		[[maybe_unused]] uint8_t __pad00e8[0x8]; // 0xe8
	public:
		int32_t m_nTicks; // 0xf0		
	};
};
