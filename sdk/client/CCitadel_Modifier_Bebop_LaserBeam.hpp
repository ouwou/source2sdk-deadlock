#pragma once
#include "client/CCitadelModifier.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x330
	// Has VTable
	class CCitadel_Modifier_Bebop_LaserBeam : public client::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x238]; // 0xc0
	public:
		entity2::GameTime_t m_flSoundStartTime; // 0x2f8		
	private:
		[[maybe_unused]] uint8_t __pad02fc[0x4]; // 0x2fc
	public:
		Vector m_vStart; // 0x300		
		Vector m_vEnd; // 0x30c		
		Vector m_vPrevEnd; // 0x318		
		float m_flAngleBetweenTrace; // 0x324		
		float m_flDamagePerTick; // 0x328		
		entity2::GameTime_t m_flNextDamageTick; // 0x32c		
	};
};
