#pragma once
#include "client/CAI_NPC_TrooperVData.hpp"
#include "client/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1668
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_TrooperBossVData : public client::CAI_NPC_TrooperVData
	{
	public:
		bool m_bMitigateDamageFromPlayers; // 0x15f8		
		bool m_bBarracksGuardian; // 0x15f9		
	private:
		[[maybe_unused]] uint8_t __pad15fa[0x2]; // 0x15fa
	public:
		float m_flPlayerAutoAttackRange; // 0x15fc		
		float m_flMinMeleeAttackTime; // 0x1600		
	private:
		[[maybe_unused]] uint8_t __pad1604[0x4]; // 0x1604
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_BackdoorProtectionModifier; // 0x1608		
		CEmbeddedSubclass<client::CCitadelModifier> m_BackdoorBulletResistModifier; // 0x1618		
		CEmbeddedSubclass<client::CCitadelModifier> m_ObjectiveRegen; // 0x1628		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sAngryStart; // 0x1638		
		CSoundEventName m_sAngryLoop; // 0x1648		
		CSoundEventName m_sAngryStop; // 0x1658		
	};
};
