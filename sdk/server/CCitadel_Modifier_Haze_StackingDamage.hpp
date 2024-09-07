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
	// Size: 0x178
	// Has VTable
	class CCitadel_Modifier_Haze_StackingDamage : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0xa8]; // 0xc8
	public:
		int32_t m_nTotalProcs; // 0x170		
	};
};
