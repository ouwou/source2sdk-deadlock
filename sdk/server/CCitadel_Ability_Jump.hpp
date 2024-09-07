#pragma once
#include "client/ECitadelAbilityOrders.hpp"
#include "client/EJumpType_t.hpp"
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
	// Size: 0xc60
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpStartTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpEndTime"
	// MNetworkVarNames "bool m_bJumped"
	// MNetworkVarNames "bool m_bCanDashJump"
	// MNetworkVarNames "int m_nDesiredAirJumpCount"
	// MNetworkVarNames "int m_nExecutedAirJumpCount"
	// MNetworkVarNames "bool m_bInSlideJump"
	// MNetworkVarNames "int8 m_nConsecutiveAirJumps"
	// MNetworkVarNames "int8 m_nConsecutiveWallJumps"
	// MNetworkVarNames "Vector m_vWallJumpNormal"
	class CCitadel_Ability_Jump : public server::CCitadelBaseAbility
	{
	public:
		entity2::GameTime_t m_flLastTimeOnZipLine; // 0xad8		
		entity2::GameTime_t m_flLastOnGroundTime; // 0xadc		
		entity2::GameTime_t m_flPhaseStartTime; // 0xae0		
		entity2::GameTime_t m_flJumpTime; // 0xae4		
		client::EJumpType_t m_LastJumpType; // 0xae8		
		bool m_bShouldCreateAirJumpEffects; // 0xae9		
	private:
		[[maybe_unused]] uint8_t __pad0aea[0x2]; // 0xaea
	public:
		entity2::GameTime_t m_flDoubleJumpFailTime; // 0xaec		
		client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xaf0		
	private:
		[[maybe_unused]] uint8_t __pad0af4[0x11c]; // 0xaf4
	public:
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xc10		
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xc28		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bJumped; // 0xc40		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bCanDashJump; // 0xc41		
	private:
		[[maybe_unused]] uint8_t __pad0c42[0x2]; // 0xc42
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nDesiredAirJumpCount; // 0xc44		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nExecutedAirJumpCount; // 0xc48		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInSlideJump; // 0xc4c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nConsecutiveAirJumps; // 0xc4d		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nConsecutiveWallJumps; // 0xc4e		
	private:
		[[maybe_unused]] uint8_t __pad0c4f[0x1]; // 0xc4f
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vWallJumpNormal; // 0xc50		
	};
};
