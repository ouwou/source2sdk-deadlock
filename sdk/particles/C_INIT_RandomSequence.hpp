#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/SequenceWeightedList_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RandomSequence : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "sequence min"
		// MPropertyAttributeEditor "SequencePicker( 1 )"
		int32_t m_nSequenceMin; // 0x1c8		
		// MPropertyFriendlyName "sequence max"
		// MPropertyAttributeEditor "SequencePicker( 1 )"
		int32_t m_nSequenceMax; // 0x1cc		
		// MPropertyFriendlyName "shuffle"
		bool m_bShuffle; // 0x1d0		
		// MPropertyFriendlyName "linear"
		bool m_bLinear; // 0x1d1		
	private:
		[[maybe_unused]] uint8_t __pad01d2[0x6]; // 0x1d2
	public:
		// MPropertyFriendlyName "weighted list"
		CUtlVector<particles::SequenceWeightedList_t> m_WeightedList; // 0x1d8		
	};
};
