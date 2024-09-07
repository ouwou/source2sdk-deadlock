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
	class CModifierAirLiftExplodeTargetVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strSilenceTargetSound; // 0x5f8		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_SilenceModifier; // 0x608		
		CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier; // 0x618		
		CEmbeddedSubclass<server::CCitadelModifier> m_BulletResistModifier; // 0x628		
	};
};
