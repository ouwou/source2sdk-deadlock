#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 4
	// Size: 0x8
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct SequenceWeightedList_t
	{
	public:
		// MPropertyFriendlyName "sequence"
		// MPropertyAttributeEditor "SequencePicker( 1 )"
		int32_t m_nSequence; // 0x0		
		// MPropertyFriendlyName "weight"
		float m_flRelativeWeight; // 0x4		
	};
};
