#pragma once
#include "pulse_runtime_lib/PulseInstructionCode_t.hpp"
#include "pulse_runtime_lib/PulseRuntimeBlackboardReferenceIndex_t.hpp"
#include "pulse_runtime_lib/PulseRuntimeCallInfoIndex_t.hpp"
#include "pulse_runtime_lib/PulseRuntimeChunkIndex_t.hpp"
#include "pulse_runtime_lib/PulseRuntimeConstantIndex_t.hpp"
#include "pulse_runtime_lib/PulseRuntimeDomainValueIndex_t.hpp"
#include "pulse_runtime_lib/PulseRuntimeInvokeIndex_t.hpp"
#include "pulse_runtime_lib/PulseRuntimeRegisterIndex_t.hpp"
#include "pulse_runtime_lib/PulseRuntimeVarIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x38
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct PGDInstruction_t
	{
	public:
		pulse_runtime_lib::PulseInstructionCode_t m_nCode; // 0x0		
		pulse_runtime_lib::PulseRuntimeVarIndex_t m_nVar; // 0x4		
		pulse_runtime_lib::PulseRuntimeRegisterIndex_t m_nReg0; // 0x8		
		pulse_runtime_lib::PulseRuntimeRegisterIndex_t m_nReg1; // 0xa		
		pulse_runtime_lib::PulseRuntimeRegisterIndex_t m_nReg2; // 0xc		
	private:
		[[maybe_unused]] uint8_t __pad000e[0x2]; // 0xe
	public:
		pulse_runtime_lib::PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex; // 0x10		
		pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nChunk; // 0x14		
		int32_t m_nDestInstruction; // 0x18		
		pulse_runtime_lib::PulseRuntimeCallInfoIndex_t m_nCallInfoIndex; // 0x1c		
		pulse_runtime_lib::PulseRuntimeConstantIndex_t m_nConstIdx; // 0x20		
		pulse_runtime_lib::PulseRuntimeDomainValueIndex_t m_nDomainValueIdx; // 0x22		
		pulse_runtime_lib::PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReferenceIdx; // 0x24		
	};
};
