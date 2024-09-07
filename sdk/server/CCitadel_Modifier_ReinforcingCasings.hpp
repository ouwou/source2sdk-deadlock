#pragma once
#include "client/ShotID_t.hpp"
#include "server/CCitadel_Modifier_Intrinsic_Base.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x178
	// Has VTable
	class CCitadel_Modifier_ReinforcingCasings : public server::CCitadel_Modifier_Intrinsic_Base
	{
	public:
		client::ShotID_t m_LastHitShotID; // 0xc8		
	};
};
