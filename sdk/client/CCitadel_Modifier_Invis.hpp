#pragma once
#include "client/CCitadelModifier.hpp"
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
	// Size: 0x268
	// Has VTable
	class CCitadel_Modifier_Invis : public client::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x188]; // 0xc0
	public:
		bool m_bInvis; // 0x248		
	private:
		[[maybe_unused]] uint8_t __pad0249[0x3]; // 0x249
	public:
		entity2::GameTime_t m_flStartInvisTime; // 0x24c		
		bool m_bFullyInvis; // 0x250		
	private:
		[[maybe_unused]] uint8_t __pad0251[0x3]; // 0x251
	public:
		entity2::GameTime_t m_flLastDamageTaken; // 0x254		
		entity2::GameTime_t m_flLastSpotted; // 0x258		
		client::ParticleIndex_t m_nDetectionRangeRing; // 0x25c		
		client::ParticleIndex_t m_nFullInvisEffect; // 0x260		
	};
};
