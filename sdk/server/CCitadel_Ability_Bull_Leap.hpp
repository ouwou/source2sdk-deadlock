#pragma once
#include "client/ELeapState_t.hpp"
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
	// Size: 0xc98
	// Has VTable
	// 
	// MNetworkVarNames "float m_flBoostYaw"
	// MNetworkVarNames "Vector m_vecCrashPosition"
	// MNetworkVarNames "Vector m_vecCrashDirection"
	// MNetworkVarNames "ELeapState_t m_eLeapState"
	// MNetworkVarNames "GameTime_t m_flStateEnterTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
	class CCitadel_Ability_Bull_Leap : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		float m_flBoostYaw; // 0xad8		
		// MNetworkEnable
		Vector m_vecCrashPosition; // 0xadc		
		// MNetworkEnable
		Vector m_vecCrashDirection; // 0xae8		
		// MNetworkEnable
		// MNetworkChangeCallback "OnLeapStateChanged"
		client::ELeapState_t m_eLeapState; // 0xaf4		
	private:
		[[maybe_unused]] uint8_t __pad0af5[0x3]; // 0xaf5
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flStateEnterTime; // 0xaf8		
	private:
		[[maybe_unused]] uint8_t __pad0afc[0x4]; // 0xafc
	public:
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flNextStateTime; // 0xb00		
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flBoostEndTime; // 0xb18		
	private:
		[[maybe_unused]] uint8_t __pad0b30[0x158]; // 0xb30
	public:
		Vector m_vecLastVel; // 0xc88		
	};
};
