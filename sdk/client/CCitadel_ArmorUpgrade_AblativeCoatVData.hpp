#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1588
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_ArmorUpgrade_AblativeCoatVData : public client::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_RestoreEffectModifier; // 0x1538		
		CEmbeddedSubclass<client::CCitadelModifier> m_OnTakeDamageEffectModifier; // 0x1548		
		CEmbeddedSubclass<client::CCitadelModifier> m_OnBreakEffectModifier; // 0x1558		
		CEmbeddedSubclass<client::CCitadelModifier> m_ResistBuffModifier; // 0x1568		
		// MPropertyStartGroup "Gameplay"
		float m_flOnTakeDamageEffectDuration; // 0x1578		
		float m_flOnBreakEffectDuration; // 0x157c		
		float m_flOnRestoreEffectDuration; // 0x1580		
	};
};
