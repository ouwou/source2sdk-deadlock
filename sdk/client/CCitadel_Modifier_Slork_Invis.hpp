#pragma once
#include "client/CCitadel_Modifier_Invis.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x2e0
	// Has VTable
	class CCitadel_Modifier_Slork_Invis : public client::CCitadel_Modifier_Invis
	{
	private:
		[[maybe_unused]] uint8_t __pad0268[0x70]; // 0x268
	public:
		bool m_bHasGoneFullyInvis; // 0x2d8		
	};
};
