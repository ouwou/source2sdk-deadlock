#pragma once
#include "client/EViscousChargedGunState.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd28
	// Has VTable
	// 
	// MNetworkVarNames "EViscousChargedGunState m_ChargeState"
	// MNetworkVarNames "float m_nClipConsumed"
	// MNetworkVarNames "bool m_bIsCharging"
	// MNetworkVarNames "bool m_bIsToggled"
	class CCitadel_Ability_ViscousWeapon_Alt : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		client::EViscousChargedGunState m_ChargeState; // 0xad8		
		// MNetworkEnable
		float m_nClipConsumed; // 0xadc		
		// MNetworkEnable
		bool m_bIsCharging; // 0xae0		
		// MNetworkEnable
		bool m_bIsToggled; // 0xae1		
	private:
		[[maybe_unused]] uint8_t __pad0ae2[0x2]; // 0xae2
	public:
		client::ParticleIndex_t m_fxChargingParticle; // 0xae4		
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x8]; // 0xae8
	public:
		entity2::GameTime_t m_flLastBulletConsumedTime; // 0xaf0		
	};
};
