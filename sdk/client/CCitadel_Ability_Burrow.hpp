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
	// Size: 0xd50
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bInGround"
	// MNetworkVarNames "GameTime_t m_SpinEndTime"
	class CCitadel_Ability_Burrow : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0xe0]; // 0xc60
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInGround; // 0xd40		
	private:
		[[maybe_unused]] uint8_t __pad0d41[0x3]; // 0xd41
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_SpinEndTime; // 0xd44		
		client::ParticleIndex_t m_nBurrowEffect; // 0xd48		
	};
};
