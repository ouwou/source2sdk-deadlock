#pragma once
#include "pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include "resourcesystem/InfoForResourceTypeIPulseGraphDef.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0xf8
	// 
	// MGetKV3ClassDefaults
	class CPulse_BlackboardReference
	{
	public:
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIPulseGraphDef>> m_hBlackboardResource; // 0x0		
		CUtlSymbolLarge m_BlackboardResource; // 0xe0		
		pulse_runtime_lib::PulseDocNodeID_t m_nNodeID; // 0xe8		
	private:
		[[maybe_unused]] uint8_t __pad00ec[0x4]; // 0xec
	public:
		CGlobalSymbol m_NodeName; // 0xf0		
	};
};
