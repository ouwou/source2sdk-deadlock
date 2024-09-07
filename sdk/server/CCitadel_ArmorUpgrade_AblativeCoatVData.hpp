#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1588
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_ArmorUpgrade_AblativeCoatVData : public server::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_RestoreEffectModifier; // 0x1538		
		CEmbeddedSubclass<server::CCitadelModifier> m_OnTakeDamageEffectModifier; // 0x1548		
		CEmbeddedSubclass<server::CCitadelModifier> m_OnBreakEffectModifier; // 0x1558		
		CEmbeddedSubclass<server::CCitadelModifier> m_ResistBuffModifier; // 0x1568		
		// MPropertyStartGroup "Gameplay"
		float m_flOnTakeDamageEffectDuration; // 0x1578		
		float m_flOnBreakEffectDuration; // 0x157c		
		float m_flOnRestoreEffectDuration; // 0x1580		
	};
};
