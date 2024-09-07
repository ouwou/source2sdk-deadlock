#pragma once
#include "pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	class CPulse_Variable
	{
	public:
		CUtlSymbolLarge m_Name; // 0x0		
		CUtlString m_Description; // 0x8		
		CPulseValueFullType m_Type; // 0x10		
		KeyValues3 m_DefaultValue; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0030[0x2]; // 0x30
	public:
		bool m_bIsPublic; // 0x32		
		bool m_bIsObservable; // 0x33		
		pulse_runtime_lib::PulseDocNodeID_t m_nEditorNodeID; // 0x34		
	};
};
