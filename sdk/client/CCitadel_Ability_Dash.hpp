#pragma once
#include "client/CCitadelAutoScaledTime.hpp"
#include "client/C_CitadelBaseAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CCitadel_Ability_Jump;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe58
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
	class CCitadel_Ability_Dash : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flDashAngle; // 0xc60		
		entity2::GameTime_t m_GroundDashExecuteTime; // 0xc64		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nLastGroundDashTick; // 0xc68		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flGroundDashCastTime; // 0xc6c		
		bool m_bTagCanActivateGroundDash; // 0xc70		
	private:
		[[maybe_unused]] uint8_t __pad0c71[0x7]; // 0xc71
	public:
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flGroundDashEndTime; // 0xc78		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flAirDashCastTime; // 0xc90		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flAirDashDragStartTime; // 0xc94		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nConsecutiveAirDashes; // 0xc98		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nConsecutiveDownDashes; // 0xc99		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bDownAirDash; // 0xc9a		
	private:
		[[maybe_unused]] uint8_t __pad0c9b[0x1b5]; // 0xc9b
	public:
		CHandle<client::CCitadel_Ability_Jump> m_hJumpAbility; // 0xe50		
	};
};
