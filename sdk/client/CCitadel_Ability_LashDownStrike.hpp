#pragma once
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
	// Size: 0xef0
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vStrikeVel"
	// MNetworkVarNames "float m_flStartHeight"
	class CCitadel_Ability_LashDownStrike : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0xa8]; // 0xc60
	public:
		entity2::GameTime_t m_ImpactTime; // 0xd08		
		Vector m_vDamagePos; // 0xd0c		
	private:
		[[maybe_unused]] uint8_t __pad0d18[0x4]; // 0xd18
	public:
		client::ParticleIndex_t m_PreviewEffect; // 0xd1c		
	private:
		[[maybe_unused]] uint8_t __pad0d20[0x1c0]; // 0xd20
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vStrikeVel; // 0xee0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		float m_flStartHeight; // 0xeec		
	};
};
