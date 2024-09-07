#pragma once
#include "client/CCitadel_Modifier_BaseBulletPreRollProc.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1c8
	// Has VTable
	class CCitadel_Modifier_ChainLightning : public client::CCitadel_Modifier_BaseBulletPreRollProc
	{
	private:
		[[maybe_unused]] uint8_t __pad0188[0x38]; // 0x188
	public:
		entity2::GameTime_t m_flNextProcTime; // 0x1c0		
	};
};
