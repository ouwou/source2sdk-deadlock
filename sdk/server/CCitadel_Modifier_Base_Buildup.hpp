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
	// Size: 0xd8
	// Has VTable
	class CCitadel_Modifier_Base_Buildup : public server::CCitadelModifier
	{
	public:
		entity2::GameTime_t m_flLastBuildupAppliedTime; // 0xc8		
		float m_flDelayedDieTimeRemaining; // 0xcc		
		bool m_bInDelayTime; // 0xd0		
	private:
		[[maybe_unused]] uint8_t __pad00d1[0x3]; // 0xd1
	public:
		float m_flBuildUpDecayDelayFromWeaponCycleTime; // 0xd4		
	};
};
