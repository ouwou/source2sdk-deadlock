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
	// Size: 0xc40
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
	class CCitadel_Ability_HealthSwap : public server::CCitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_nFXIndex; // 0xad8		
		float m_flHealthToCaster; // 0xadc		
		float m_flTargetHealthLost; // 0xae0		
	private:
		[[maybe_unused]] uint8_t __pad0ae4[0x11c]; // 0xae4
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flPostCastHoldEndTime; // 0xc00		
	};
};
