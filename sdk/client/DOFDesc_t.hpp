#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 4
	// Size: 0x10
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct DOFDesc_t
	{
	public:
		// MPropertyDescription "Blurry up through this distance."
		float m_flDofNearBlurry; // 0x0		
		// MPropertyDescription "Progress to crisp at this distance."
		float m_flDofNearCrisp; // 0x4		
		// MPropertyDescription "Stay crisp up through this distance."
		float m_flDofFarCrisp; // 0x8		
		// MPropertyDescription "Progress blurry at this distance."
		float m_flDofFarBlurry; // 0xc		
	};
};
