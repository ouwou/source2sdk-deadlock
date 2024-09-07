#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x60
	// 
	// MGetKV3ClassDefaults
	struct DamageReceivedSounds_t
	{
	public:
		// MPropertyDescription "When a specific damage received can not be selected"
		CSoundEventName m_strDamageReceiveDefault; // 0x0		
		// MPropertyDescription "When NPC damage is received"
		CSoundEventName m_strDamageReceiveNPC; // 0x10		
		// MPropertyDescription "When DOT damage is received"
		CSoundEventName m_strDamageReceiveDOT; // 0x20		
		// MPropertyDescription "When NPC melee damage is received"
		CSoundEventName m_strDamageReceiveMeleeNPC; // 0x30		
		// MPropertyDescription "When melee damage is received"
		CSoundEventName m_strDamageReceiveMelee; // 0x40		
		// MPropertyDescription "When damage to player shield is received"
		CSoundEventName m_strDamageReceiveShield; // 0x50		
	};
};
