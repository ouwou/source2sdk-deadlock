#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7c0
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_timeLaunch"
	class CItemXP : public server::CBaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0768[0x54]; // 0x768
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnLaunchTimeChanged"
		entity2::GameTime_t m_timeLaunch; // 0x7bc		
	};
};
