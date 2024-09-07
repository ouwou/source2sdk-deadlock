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
	struct DamageIndicatorSounds_t
	{
	public:
		CSoundEventName m_strDamageDefault; // 0x0		
		CSoundEventName m_strDamageCrit; // 0x10		
		CSoundEventName m_strDamageLethal; // 0x20		
		CSoundEventName m_strDamageInvulnerable; // 0x30		
		CSoundEventName m_strDamageDOT; // 0x40		
		CSoundEventName m_strDamageHealthTransfer; // 0x50		
	};
};
