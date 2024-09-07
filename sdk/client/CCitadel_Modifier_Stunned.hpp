#pragma once
#include "client/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc8
	// Has VTable
	class CCitadel_Modifier_Stunned : public client::CCitadelModifier
	{
	public:
		bool m_bEnabled; // 0xc0		
		bool m_bWasEnabled; // 0xc1		
	};
};
