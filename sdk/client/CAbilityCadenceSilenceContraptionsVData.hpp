#pragma once
#include "client/CBaseDashCastAbilityVData.hpp"
#include "client/CCitadelModifier.hpp"
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
	class CAbilityCadenceSilenceContraptionsVData : public client::CBaseDashCastAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SilenceContraptionsModifier; // 0x1578		
	};
};
