#pragma once
#include "client/ParticleIndex_t.hpp"
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
	// Size: 0xb80
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
	class CCitadel_Ability_Slide : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x58]; // 0xad8
	public:
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xb30		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSlowGetupStartTime; // 0xb48		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bShouldTriggerSlowGetup; // 0xb4c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bWantsSlide; // 0xb4d		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bAirborneWhenDuckPressed; // 0xb4e		
		// MNetworkEnable
		bool m_bIsSliding; // 0xb4f		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flSpeedAdjust; // 0xb50		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDuckPressedTime; // 0xb54		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flVelocityAtDuckPressedTime; // 0xb58		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSlideChangeTime; // 0xb5c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSlidingOnFlatStartTime; // 0xb60		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nJumpsThisSlideSession; // 0xb64		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flOnGroundStartTime; // 0xb68		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDashSlideStartTime; // 0xb6c		
		bool m_bStartedSlideViaProbeSlope; // 0xb70		
	private:
		[[maybe_unused]] uint8_t __pad0b71[0x3]; // 0xb71
	public:
		client::ParticleIndex_t m_nSlideEffectIndex; // 0xb74		
	};
};
