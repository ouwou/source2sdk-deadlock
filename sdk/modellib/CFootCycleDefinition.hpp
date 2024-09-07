#pragma once
#include "modellib/CAnimCycle.hpp"
#include "modellib/CFootCycle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 4
	// Size: 0x3c
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CFootCycleDefinition
	{
	public:
		Vector m_vStancePositionMS; // 0x0		
		Vector m_vMidpointPositionMS; // 0xc		
		float m_flStanceDirectionMS; // 0x18		
		Vector m_vToStrideStartPos; // 0x1c		
		modellib::CAnimCycle m_stanceCycle; // 0x28		
		modellib::CFootCycle m_footLiftCycle; // 0x2c		
		modellib::CFootCycle m_footOffCycle; // 0x30		
		modellib::CFootCycle m_footStrikeCycle; // 0x34		
		modellib::CFootCycle m_footLandCycle; // 0x38		
	};
};
