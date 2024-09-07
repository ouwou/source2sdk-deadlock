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
	// Size: 0xc0
	// Has VTable
	// 
	// MPulseLibraryBindings
	// MPulseInternal_IsCursor
	class CPulseTurtleGraphicsCursor : public pulse_runtime_lib::CPulseExecCursor
	{
	public:
		Color m_Color; // 0xa8		
		Vector2D m_vPos; // 0xac		
		float m_flHeadingDeg; // 0xb4		
		bool m_bPenUp; // 0xb8		
	};
};
