#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadel_Modifier_BaseBulletPreRollProc.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1d0
	// Has VTable
	class CCitadel_Modifier_ChainLightning : public server::CCitadel_Modifier_BaseBulletPreRollProc
	{
	private:
		[[maybe_unused]] uint8_t __pad0190[0x38]; // 0x190
	public:
		entity2::GameTime_t m_flNextProcTime; // 0x1c8		
	};
};
