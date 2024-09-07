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
	// Size: 0xdc0
	// Has VTable
	// 
	// MNetworkVarNames "float m_flDissipationRate"
	// MNetworkVarNames "GameTime_t m_flDissipationTime"
	// MNetworkVarNames "GameTime_t m_flHeatTime"
	// MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
	// MNetworkVarNames "bool m_bOverheating"
	class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public client::C_CitadelBaseAbility
	{
	public:
		int32_t m_nIntervalsElapsed; // 0xc60		
		entity2::GameTime_t m_NextShotTime; // 0xc64		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flDissipationRate; // 0xc68		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDissipationTime; // 0xc6c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flHeatTime; // 0xc70		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flOverheatSoundTime; // 0xc74		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bOverheating; // 0xc78		
	};
};
