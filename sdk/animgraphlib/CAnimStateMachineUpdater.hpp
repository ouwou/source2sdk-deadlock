#pragma once
#include "animgraphlib/CStateUpdateData.hpp"
#include "animgraphlib/CTransitionUpdateData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x58
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimStateMachineUpdater
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		CUtlVector<animgraphlib::CStateUpdateData> m_states; // 0x8		
		CUtlVector<animgraphlib::CTransitionUpdateData> m_transitions; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0038[0x18]; // 0x38
	public:
		int32_t m_startStateIndex; // 0x50		
	};
};
