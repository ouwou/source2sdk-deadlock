#pragma once
#include "server/CCitadel_Modifier_Base_Buildup.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1f8
	// Has VTable
	class CCitadel_Modifier_IceBeam_Stacking_Slow : public server::CCitadel_Modifier_Base_Buildup
	{
	private:
		[[maybe_unused]] uint8_t __pad00d8[0x118]; // 0xd8
	public:
		float m_flCurrBuildup; // 0x1f0		
	};
};
