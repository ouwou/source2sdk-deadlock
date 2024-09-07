#pragma once
#include "client/EViscousBowlingBallState_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelViscousBall;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xfb8
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
	// MNetworkVarNames "EViscousBowlingBallState_t m_eRollingState"
	// MNetworkVarNames "GameTime_t m_flNextStateTime"
	// MNetworkVarNames "GameTime_t m_flNextWallCheck"
	// MNetworkVarNames "GameTime_t m_flRollStartTime"
	// MNetworkVarNames "GameTime_t m_flWallExitTime"
	// MNetworkVarNames "Vector m_vecWallExitVelocity"
	class CCitadel_Ability_GooBowlingBall : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x348]; // 0xad8
	public:
		bool m_bHasAirJumped; // 0xe20		
		bool m_bIsFollowingBall; // 0xe21		
		bool m_bIsShowingBall; // 0xe22		
	private:
		[[maybe_unused]] uint8_t __pad0e23[0x1]; // 0xe23
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CHandle<server::CCitadelViscousBall> m_hBall; // 0xe24		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		client::EViscousBowlingBallState_t m_eRollingState; // 0xe28		
	private:
		[[maybe_unused]] uint8_t __pad0e29[0x3]; // 0xe29
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextStateTime; // 0xe2c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextWallCheck; // 0xe30		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flRollStartTime; // 0xe34		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flWallExitTime; // 0xe38		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		Vector m_vecWallExitVelocity; // 0xe3c		
	};
};
