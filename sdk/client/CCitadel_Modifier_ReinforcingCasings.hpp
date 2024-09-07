#pragma once
#include "client/CCitadel_Modifier_Intrinsic_Base.hpp"
#include "client/ShotID_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x170
	// Has VTable
	class CCitadel_Modifier_ReinforcingCasings : public client::CCitadel_Modifier_Intrinsic_Base
	{
	public:
		client::ShotID_t m_LastHitShotID; // 0xc0		
	};
};
