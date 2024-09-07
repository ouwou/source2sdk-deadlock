#pragma once
#include "server/CCitadel_Modifier_Stunned.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x158
	// Has VTable
	class CCitadel_Modifier_PsychicLift : public server::CCitadel_Modifier_Stunned
	{
	private:
		[[maybe_unused]] uint8_t __pad00d0[0x70]; // 0xd0
	public:
		Vector m_vecFloatDest; // 0x140		
		Vector m_vecStartingPos; // 0x14c		
	};
};
