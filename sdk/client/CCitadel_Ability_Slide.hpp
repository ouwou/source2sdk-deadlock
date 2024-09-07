#pragma once
#include "client/CCitadelAutoScaledTime.hpp"
#include "client/C_CitadelBaseAbility.hpp"
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
	// Size: 0xd08
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashSlideTime"
	// MNetworkVarNames "GameTime_t m_flSlowGetupStartTime"
	// MNetworkVarNames "bool m_bShouldTriggerSlowGetup"
	// MNetworkVarNames "bool m_bWantsSlide"
	// MNetworkVarNames "bool m_bAirborneWhenDuckPressed"
	// MNetworkVarNames "bool m_bIsSliding"
	// MNetworkVarNames "float m_flSpeedAdjust"
	// MNetworkVarNames "GameTime_t m_flDuckPressedTime"
	// MNetworkVarNames "float m_flVelocityAtDuckPressedTime"
	// MNetworkVarNames "GameTime_t m_flSlideChangeTime"
	// MNetworkVarNames "GameTime_t m_flSlidingOnFlatStartTime"
	// MNetworkVarNames "int m_nJumpsThisSlideSession"
	// MNetworkVarNames "GameTime_t m_flOnGroundStartTime"
	// MNetworkVarNames "GameTime_t m_flDashSlideStartTime"
	class CCitadel_Ability_Slide : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x58]; // 0xc60
	public:
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xcb8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSlowGetupStartTime; // 0xcd0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bShouldTriggerSlowGetup; // 0xcd4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bWantsSlide; // 0xcd5		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bAirborneWhenDuckPressed; // 0xcd6		
		// MNetworkEnable
		bool m_bIsSliding; // 0xcd7		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flSpeedAdjust; // 0xcd8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDuckPressedTime; // 0xcdc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flVelocityAtDuckPressedTime; // 0xce0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSlideChangeTime; // 0xce4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSlidingOnFlatStartTime; // 0xce8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nJumpsThisSlideSession; // 0xcec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flOnGroundStartTime; // 0xcf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDashSlideStartTime; // 0xcf4		
		bool m_bStartedSlideViaProbeSlope; // 0xcf8		
	private:
		[[maybe_unused]] uint8_t __pad0cf9[0x3]; // 0xcf9
	public:
		client::ParticleIndex_t m_nSlideEffectIndex; // 0xcfc		
	};
};
