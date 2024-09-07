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
	// Size: 0xcb0
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flStartTime"
	// MNetworkVarNames "GameTime_t m_flLandedTime"
	// MNetworkVarNames "bool m_bLanded"
	// MNetworkVarNames "bool m_bFalling"
	// MNetworkVarNames "bool m_bInStoneForm"
	// MNetworkVarNames "float m_flStartHeight"
	class CCitadel_Ability_Tengu_StoneForm : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x1c0]; // 0xad8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flStartTime; // 0xc98		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flLandedTime; // 0xc9c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bLanded; // 0xca0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bFalling; // 0xca1		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInStoneForm; // 0xca2		
	private:
		[[maybe_unused]] uint8_t __pad0ca3[0x1]; // 0xca3
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flStartHeight; // 0xca4		
		client::ParticleIndex_t m_nStoneFormEffect; // 0xca8		
	};
};
