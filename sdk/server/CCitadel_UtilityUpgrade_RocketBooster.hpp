#pragma once
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadel_UtilityUpgrade_RocketBoots.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd50
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flCastTime"
	// MNetworkVarNames "bool m_bCrashingDown"
	// MNetworkVarNames "bool m_bImpulseApplied"
	// MNetworkVarNames "Vector m_vecCrashPosition"
	// MNetworkVarNames "Vector m_vecCrashDirection"
	class CCitadel_UtilityUpgrade_RocketBooster : public server::CCitadel_UtilityUpgrade_RocketBoots
	{
	private:
		[[maybe_unused]] uint8_t __pad0b68[0x4]; // 0xb68
	public:
		client::ParticleIndex_t m_nTargetingParticleIndex; // 0xb6c		
		// MNetworkEnable
		// MNetworkChangeCallback "OnCanSlamDownChanged"
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flCastTime; // 0xb70		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bCrashingDown; // 0xb74		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bImpulseApplied; // 0xb75		
	private:
		[[maybe_unused]] uint8_t __pad0b76[0x2]; // 0xb76
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecCrashPosition; // 0xb78		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecCrashDirection; // 0xb84		
	};
};
