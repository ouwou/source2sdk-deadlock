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
	// Size: 0x150
	// Has VTable
	class CModifier_Mirage_Tornado_Lift : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
	public:
		Vector m_vecFloatDest; // 0x138		
		Vector m_vecStartingPos; // 0x144		
	};
};
