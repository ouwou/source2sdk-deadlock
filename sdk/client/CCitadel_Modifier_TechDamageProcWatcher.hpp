#pragma once
#include "client/CCitadel_Modifier_BaseEventProc.hpp"
#include "client/ShotID_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x218
	// Has VTable
	class CCitadel_Modifier_TechDamageProcWatcher : public client::CCitadel_Modifier_BaseEventProc
	{
	public:
		entity2::GameTime_t m_flNextProcTime; // 0x168		
		client::ShotID_t m_shotProced; // 0x16c		
	};
};
