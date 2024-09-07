#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/EViscousBowlingBallState_t.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_CitadelViscousBall;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1148
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
	// MNetworkVarNames "EViscousBowlingBallState_t m_eRollingState"
	// MNetworkVarNames "GameTime_t m_flNextStateTime"
	// MNetworkVarNames "GameTime_t m_flNextWallCheck"
	// MNetworkVarNames "GameTime_t m_flRollStartTime"
	// MNetworkVarNames "GameTime_t m_flWallExitTime"
	// MNetworkVarNames "Vector m_vecWallExitVelocity"
	class CCitadel_Ability_GooBowlingBall : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x348]; // 0xc60
	public:
		bool m_bHasAirJumped; // 0xfa8		
		bool m_bIsFollowingBall; // 0xfa9		
		bool m_bIsShowingBall; // 0xfaa		
	private:
		[[maybe_unused]] uint8_t __pad0fab[0x1]; // 0xfab
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CHandle<client::C_CitadelViscousBall> m_hBall; // 0xfac		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		client::EViscousBowlingBallState_t m_eRollingState; // 0xfb0		
	private:
		[[maybe_unused]] uint8_t __pad0fb1[0x3]; // 0xfb1
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextStateTime; // 0xfb4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextWallCheck; // 0xfb8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flRollStartTime; // 0xfbc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flWallExitTime; // 0xfc0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		Vector m_vecWallExitVelocity; // 0xfc4		
	private:
		[[maybe_unused]] uint8_t __pad0fd0[0x8]; // 0xfd0
	public:
		client::ParticleIndex_t m_nDirectionParticleIndex; // 0xfd8		
	};
};
