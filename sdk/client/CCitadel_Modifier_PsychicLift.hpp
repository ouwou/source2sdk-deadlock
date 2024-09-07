#pragma once
#include "client/CCitadel_Modifier_Stunned.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x150
	// Has VTable
	class CCitadel_Modifier_PsychicLift : public client::CCitadel_Modifier_Stunned
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
	public:
		Vector m_vecFloatDest; // 0x138		
		Vector m_vecStartingPos; // 0x144		
	};
};
