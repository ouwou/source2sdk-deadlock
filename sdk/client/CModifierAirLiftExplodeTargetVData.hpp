#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x638
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierAirLiftExplodeTargetVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strSilenceTargetSound; // 0x5f8		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SilenceModifier; // 0x608		
		CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier; // 0x618		
		CEmbeddedSubclass<client::CCitadelModifier> m_BulletResistModifier; // 0x628		
	};
};
