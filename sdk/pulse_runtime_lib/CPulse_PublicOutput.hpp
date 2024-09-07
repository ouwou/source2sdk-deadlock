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
	// 
	// MGetKV3ClassDefaults
	class CPulse_PublicOutput
	{
	public:
		CUtlSymbolLarge m_Name; // 0x0		
		CUtlString m_Description; // 0x8		
		CPulseValueFullType m_ParamType; // 0x10		
	};
};
