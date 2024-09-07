#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe40
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bWantsSlow"
	// MNetworkVarNames "GameTime_t m_flLatchedTimeScaleFracChangeTime"
	// MNetworkVarNames "float m_flLatchedTimeScaleFrac"
	// MNetworkVarNames "GameTime_t m_flSpeedBoostEndTime"
	// MNetworkVarNames "GameTime_t m_flShotTimeScaleEndTime"
	class CCitadel_Ability_Chrono_KineticCarbine : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bWantsSlow; // 0xc60		
	private:
		[[maybe_unused]] uint8_t __pad0c61[0x3]; // 0xc61
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xc64		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flLatchedTimeScaleFrac; // 0xc68		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSpeedBoostEndTime; // 0xc6c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flShotTimeScaleEndTime; // 0xc70		
	private:
		[[maybe_unused]] uint8_t __pad0c74[0x4]; // 0xc74
	public:
		float m_flStoredPowerPct; // 0xc78		
	};
};
