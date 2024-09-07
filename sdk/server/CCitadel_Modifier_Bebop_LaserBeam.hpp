#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x340
	// Has VTable
	class CCitadel_Modifier_Bebop_LaserBeam : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x238]; // 0xc8
	public:
		entity2::GameTime_t m_flSoundStartTime; // 0x300		
	private:
		[[maybe_unused]] uint8_t __pad0304[0x4]; // 0x304
	public:
		Vector m_vStart; // 0x308		
		Vector m_vEnd; // 0x314		
		Vector m_vPrevEnd; // 0x320		
		float m_flAngleBetweenTrace; // 0x32c		
		float m_flDamagePerTick; // 0x330		
		entity2::GameTime_t m_flNextDamageTick; // 0x334		
		int32_t m_nTotalDamage; // 0x338		
	};
};
