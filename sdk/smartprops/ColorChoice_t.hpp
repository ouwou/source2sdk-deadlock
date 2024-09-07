#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x80
	// 
	// MGetKV3ClassDefaults
	struct ColorChoice_t
	{
	public:
		// MPropertyDescription "Color to be applied if this choice is selected."
		CSmartPropAttributeColor m_Color; // 0x0		
		// MPropertyDescription "Relative weight of this choice, higher weighted choices are more likely to be selected."
		CSmartPropAttributeFloat m_flWeight; // 0x40		
	};
};
