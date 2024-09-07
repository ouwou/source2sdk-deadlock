#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x20
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CPulse_OutputConnection
	{
	public:
		CUtlSymbolLarge m_SourceOutput; // 0x0		
		CUtlSymbolLarge m_TargetEntity; // 0x8		
		CUtlSymbolLarge m_TargetInput; // 0x10		
		CUtlSymbolLarge m_Param; // 0x18		
	};
};
