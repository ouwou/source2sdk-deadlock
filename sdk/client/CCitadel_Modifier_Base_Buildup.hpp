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
	// Size: 0xd0
	// Has VTable
	class CCitadel_Modifier_Base_Buildup : public client::CCitadelModifier
	{
	public:
		entity2::GameTime_t m_flLastBuildupAppliedTime; // 0xc0		
		float m_flDelayedDieTimeRemaining; // 0xc4		
		bool m_bInDelayTime; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
	public:
		float m_flBuildUpDecayDelayFromWeaponCycleTime; // 0xcc		
	};
};
