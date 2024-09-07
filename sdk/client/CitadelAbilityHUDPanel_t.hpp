#pragma once
#include "client/CitadelAbilityHUDElementButtonHint_t.hpp"
#include "client/CitadelAbilityHUDElement_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	struct CitadelAbilityHUDPanel_t
	{
	public:
		CUtlVector<client::CitadelAbilityHUDElement_t> m_vecHUDElements; // 0x0		
		CUtlVector<client::CitadelAbilityHUDElementButtonHint_t> m_vecButtonHints; // 0x18		
		bool m_bForceDrawDefaultCastBars; // 0x30		
	};
};
