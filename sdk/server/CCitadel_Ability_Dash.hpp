#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelAutoScaledTime.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xca0
	// Has VTable
	// 
	// MNetworkVarNames "float m_flDashAngle"
	// MNetworkVarNames "int m_nLastGroundDashTick"
	// MNetworkVarNames "GameTime_t m_flGroundDashCastTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashEndTime"
	// MNetworkVarNames "GameTime_t m_flAirDashCastTime"
	// MNetworkVarNames "GameTime_t m_flAirDashDragStartTime"
	// MNetworkVarNames "int8 m_nConsecutiveAirDashes"
	// MNetworkVarNames "int8 m_nConsecutiveDownDashes"
	// MNetworkVarNames "bool m_bDownAirDash"
	class CCitadel_Ability_Dash : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flDashAngle; // 0xad8		
		entity2::GameTime_t m_GroundDashExecuteTime; // 0xadc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nLastGroundDashTick; // 0xae0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flGroundDashCastTime; // 0xae4		
		bool m_bTagCanActivateGroundDash; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0ae9[0x7]; // 0xae9
	public:
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flGroundDashEndTime; // 0xaf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flAirDashCastTime; // 0xb08		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flAirDashDragStartTime; // 0xb0c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nConsecutiveAirDashes; // 0xb10		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nConsecutiveDownDashes; // 0xb11		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bDownAirDash; // 0xb12		
	};
};
