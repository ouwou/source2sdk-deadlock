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
	class CCitadel_Modifier_Item_AOESilence : public client::CCitadelModifierAura
	{
	public:
		float m_flStartRadius; // 0xe0		
		float m_flEndRadius; // 0xe4		
		float m_flSpreadDuration; // 0xe8		
	};
};
