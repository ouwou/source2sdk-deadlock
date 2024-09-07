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
	// Size: 0xcd8
	// Has VTable
	// 
	// MNetworkVarNames "float m_flVertOffset"
	// MNetworkVarNames "float m_flHorizGap"
	// MNetworkVarNames "Vector m_vStartPos"
	// MNetworkVarNames "Vector m_vTargetPos"
	// MNetworkVarNames "QAngle m_angFacing"
	// MNetworkVarNames "int m_nMantleTypeIndex"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	class CCitadel_Ability_Mantle : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flVertOffset; // 0xc60		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flHorizGap; // 0xc64		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vStartPos; // 0xc68		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vTargetPos; // 0xc74		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		QAngle m_angFacing; // 0xc80		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nMantleTypeIndex; // 0xc8c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flStartTime; // 0xc90		
	};
};
