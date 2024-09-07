#pragma once
#include "pulse_runtime_lib/PulseRuntimeRegisterIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x58
	// 
	// MGetKV3ClassDefaults
	class CPulse_RegisterInfo
	{
	public:
		pulse_runtime_lib::PulseRuntimeRegisterIndex_t m_nReg; // 0x0		
		CPulseValueFullType m_Type; // 0x8		
		CKV3MemberNameWithStorage m_OriginName; // 0x18		
		int32_t m_nWrittenByInstruction; // 0x50		
		int32_t m_nLastReadByInstruction; // 0x54		
	};
};
