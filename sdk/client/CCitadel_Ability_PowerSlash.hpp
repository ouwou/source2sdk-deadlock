#pragma once
#include "client/CCitadelBaseYamatoAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xf20
	// Has VTable
	// 
	// MNetworkVarNames "int m_nPowerLevel"
	class CCitadel_Ability_PowerSlash : public client::CCitadelBaseYamatoAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c68[0xc]; // 0xc68
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nPowerLevel; // 0xc74		
		client::ParticleIndex_t m_nCastParticle; // 0xc78		
	};
};
