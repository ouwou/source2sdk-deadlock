#pragma once
#include "client/ParticleIndex_t.hpp"
#include "client/ShotID_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd58
	// Has VTable
	class CAbility_Synth_Barrage : public server::CCitadelBaseAbility
	{
	public:
		client::ShotID_t m_tLastShotID; // 0xad8		
	private:
		[[maybe_unused]] uint8_t __pad0adc[0x26c]; // 0xadc
	public:
		int32_t m_nProjectilesScheduled; // 0xd48		
		float m_fProjectileInterval; // 0xd4c		
		client::ParticleIndex_t m_ChannelParticle; // 0xd50		
	};
};
