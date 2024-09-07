#pragma once
#include "pulse_runtime_lib/PulseDomainValueType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x18
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CPulse_DomainValue
	{
	public:
		pulse_runtime_lib::PulseDomainValueType_t m_nType; // 0x0		
		CGlobalSymbol m_Value; // 0x8		
		CGlobalSymbol m_ExpectedRuntimeType; // 0x10		
	};
};
