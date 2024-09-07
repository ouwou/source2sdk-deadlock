#pragma once
#include "client/CCitadelAutoScaledTime.hpp"
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ECitadelAbilityOrders.hpp"
#include "client/EJumpType_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xde8
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
	class CCitadel_Ability_Jump : public client::C_CitadelBaseAbility
	{
	public:
		entity2::GameTime_t m_flLastTimeOnZipLine; // 0xc60		
		entity2::GameTime_t m_flLastOnGroundTime; // 0xc64		
		entity2::GameTime_t m_flPhaseStartTime; // 0xc68		
		entity2::GameTime_t m_flJumpTime; // 0xc6c		
		client::EJumpType_t m_LastJumpType; // 0xc70		
		bool m_bShouldCreateAirJumpEffects; // 0xc71		
	private:
		[[maybe_unused]] uint8_t __pad0c72[0x2]; // 0xc72
	public:
		entity2::GameTime_t m_flDoubleJumpFailTime; // 0xc74		
		client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xc78		
	private:
		[[maybe_unused]] uint8_t __pad0c7c[0x11c]; // 0xc7c
	public:
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xd98		
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xdb0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bJumped; // 0xdc8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bCanDashJump; // 0xdc9		
	private:
		[[maybe_unused]] uint8_t __pad0dca[0x2]; // 0xdca
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nDesiredAirJumpCount; // 0xdcc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nExecutedAirJumpCount; // 0xdd0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInSlideJump; // 0xdd4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nConsecutiveAirJumps; // 0xdd5		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nConsecutiveWallJumps; // 0xdd6		
	private:
		[[maybe_unused]] uint8_t __pad0dd7[0x1]; // 0xdd7
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vWallJumpNormal; // 0xdd8		
	};
};
