#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Ability_BaseHeldItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1620
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_GoldenIdolVData : public client::CCitadel_Ability_BaseHeldItemVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sIdolDropOffSound; // 0x15d0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DropoffTimerModifier; // 0x15e0		
		CEmbeddedSubclass<client::CCitadelModifier> m_Bonus01; // 0x15f0		
		CEmbeddedSubclass<client::CCitadelModifier> m_Bonus02; // 0x1600		
		// MPropertyStartGroup "Gameplay"
		float m_flInstantGoldPercentage; // 0x1610		
		int32_t m_iComebackBounty; // 0x1614		
		int32_t m_iComebackGoldThreshold; // 0x1618		
		float m_flCasterBonusPercent; // 0x161c		
	};
};