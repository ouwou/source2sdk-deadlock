#pragma once
#include "client/CCitadel_Ability_Melee_Base.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xf18
	// Has VTable
	class CCitadel_Ability_Uppercut : public client::CCitadel_Ability_Melee_Base
	{
	private:
		[[maybe_unused]] uint8_t __pad0ce0[0x230]; // 0xce0
	public:
		bool m_bShouldUseResources; // 0xf10		
	};
};
