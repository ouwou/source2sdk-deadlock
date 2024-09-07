#pragma once
#include "client/C_BaseModelEntity.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x858
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_timeLaunch"
	class CItemXP : public client::C_BaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0830[0x20]; // 0x830
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnLaunchTimeChanged"
		entity2::GameTime_t m_timeLaunch; // 0x850		
	};
};
