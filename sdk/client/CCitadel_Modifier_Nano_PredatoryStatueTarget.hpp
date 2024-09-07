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
	// Size: 0x1b8
	// Has VTable
	class CCitadel_Modifier_Nano_PredatoryStatueTarget : public client::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0xc]; // 0xc0
	public:
		int32_t m_iStatueID; // 0xcc		
	};
};
