#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadel_Modifier_BaseEventProc.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1e8
	// Has VTable
	class CCitadel_Modifier_CharmedWraps : public server::CCitadel_Modifier_BaseEventProc
	{
	public:
		entity2::GameTime_t m_fLastPrimingLightAttackTime; // 0x170		
	};
};
