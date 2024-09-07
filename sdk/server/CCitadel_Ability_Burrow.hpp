#pragma once
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
	// Size: 0xbc8
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bInGround"
	// MNetworkVarNames "GameTime_t m_SpinEndTime"
	class CCitadel_Ability_Burrow : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0xe0]; // 0xad8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInGround; // 0xbb8		
	private:
		[[maybe_unused]] uint8_t __pad0bb9[0x3]; // 0xbb9
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_SpinEndTime; // 0xbbc		
		client::ParticleIndex_t m_nBurrowEffect; // 0xbc0		
	};
};
