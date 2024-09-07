#pragma once
#include "client/CCitadel_UtilityUpgrade_RocketBoots.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xed0
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flCastTime"
	// MNetworkVarNames "bool m_bCrashingDown"
	// MNetworkVarNames "bool m_bImpulseApplied"
	// MNetworkVarNames "Vector m_vecCrashPosition"
	// MNetworkVarNames "Vector m_vecCrashDirection"
	class CCitadel_UtilityUpgrade_RocketBooster : public client::CCitadel_UtilityUpgrade_RocketBoots
	{
	private:
		[[maybe_unused]] uint8_t __pad0ce8[0x4]; // 0xce8
	public:
		client::ParticleIndex_t m_nTargetingParticleIndex; // 0xcec		
		// MNetworkEnable
		// MNetworkChangeCallback "OnCanSlamDownChanged"
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flCastTime; // 0xcf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bCrashingDown; // 0xcf4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bImpulseApplied; // 0xcf5		
	private:
		[[maybe_unused]] uint8_t __pad0cf6[0x2]; // 0xcf6
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecCrashPosition; // 0xcf8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecCrashDirection; // 0xd04		
	};
};
