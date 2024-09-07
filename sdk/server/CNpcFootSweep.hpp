#pragma once
#include "server/CBaseTrigger.hpp"
#include "server/FootSweepPusher_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x958
	// Has VTable
	class CNpcFootSweep : public server::CBaseTrigger
	{
	public:
		CUtlVector<server::FootSweepPusher_t> m_vecPushers; // 0x938		
		bool m_bUseCenterPusher; // 0x950		
		bool m_bUseForwardPusher; // 0x951		
	};
};
