#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb18
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bActive"
	class CCitadel_Ability_RiotProtocol : public server::CCitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_ChargeUpParticle; // 0xad8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bActive; // 0xadc		
	};
};
