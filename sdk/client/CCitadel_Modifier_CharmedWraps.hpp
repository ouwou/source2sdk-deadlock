#pragma once
#include "client/CCitadel_Modifier_BaseEventProc.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1e0
	// Has VTable
	class CCitadel_Modifier_CharmedWraps : public client::CCitadel_Modifier_BaseEventProc
	{
	public:
		entity2::GameTime_t m_fLastPrimingLightAttackTime; // 0x168		
	};
};
