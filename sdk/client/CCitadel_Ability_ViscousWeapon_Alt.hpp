#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/EViscousChargedGunState.hpp"
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
	// Size: 0xeb0
	// Has VTable
	// 
	// MNetworkVarNames "EViscousChargedGunState m_ChargeState"
	// MNetworkVarNames "float m_nClipConsumed"
	// MNetworkVarNames "bool m_bIsCharging"
	// MNetworkVarNames "bool m_bIsToggled"
	class CCitadel_Ability_ViscousWeapon_Alt : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		client::EViscousChargedGunState m_ChargeState; // 0xc60		
		// MNetworkEnable
		float m_nClipConsumed; // 0xc64		
		// MNetworkEnable
		bool m_bIsCharging; // 0xc68		
		// MNetworkEnable
		bool m_bIsToggled; // 0xc69		
	private:
		[[maybe_unused]] uint8_t __pad0c6a[0x2]; // 0xc6a
	public:
		client::ParticleIndex_t m_fxChargingParticle; // 0xc6c		
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x8]; // 0xc70
	public:
		entity2::GameTime_t m_flLastBulletConsumedTime; // 0xc78		
	};
};
