#pragma once
#include "client/EModifierValue.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	struct HeroPurchaseBonus_t
	{
	public:
		int32_t m_nTier; // 0x0		
		CUtlString m_strValue; // 0x8		
		client::EModifierValue m_ValueType; // 0x10		
	};
};
