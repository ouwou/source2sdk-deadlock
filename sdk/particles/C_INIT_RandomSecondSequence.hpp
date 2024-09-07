#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RandomSecondSequence : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "sequence min"
		// MPropertyAttributeEditor "SequencePicker( 2 )"
		int32_t m_nSequenceMin; // 0x1c8		
		// MPropertyFriendlyName "sequence max"
		// MPropertyAttributeEditor "SequencePicker( 2 )"
		int32_t m_nSequenceMax; // 0x1cc		
	};
};
