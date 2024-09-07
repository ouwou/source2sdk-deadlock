#pragma once
#include "pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "pulse_runtime_lib/PulseRegisterMap_t.hpp"
#include "pulse_runtime_lib/PulseRuntimeChunkIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x70
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CPulseCell_Inflow_BaseEntrypoint : public pulse_runtime_lib::CPulseCell_BaseFlow
	{
	public:
		pulse_runtime_lib::PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48		
	private:
		[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
	public:
		pulse_runtime_lib::PulseRegisterMap_t m_RegisterMap; // 0x50		
	};
};
