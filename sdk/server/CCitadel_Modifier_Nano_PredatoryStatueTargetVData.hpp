#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x638
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Nano_PredatoryStatueTargetVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strLaserHitSound; // 0x5f8		
		CSoundEventName m_strLaserStartSound; // 0x608		
		CSoundEventName m_strLaserLoopSound; // 0x618		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x628		
	};
};
