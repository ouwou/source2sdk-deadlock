#pragma once
#include "pulse_runtime_lib/CPulseExecCursor.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0xb0
	// Has VTable
	// 
	// MPulseLibraryBindings
	// MPulseInternal_IsCursor
	class CTestDomainDerived_Cursor : public pulse_runtime_lib::CPulseExecCursor
	{
	public:
		int32_t m_nCursorValueA; // 0xa8		
		int32_t m_nCursorValueB; // 0xac		
	};
};
