#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xed8
	// Has VTable
	class CAbility_Synth_Barrage : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x268]; // 0xc60
	public:
		int32_t m_nProjectilesScheduled; // 0xec8		
		float m_fProjectileInterval; // 0xecc		
		client::ParticleIndex_t m_ChannelParticle; // 0xed0		
	};
};
