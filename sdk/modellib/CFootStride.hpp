#pragma once
#include "modellib/CFootCycleDefinition.hpp"
#include "modellib/CFootTrajectories.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x58
	// 
	// MGetKV3ClassDefaults
	class CFootStride
	{
	public:
		modellib::CFootCycleDefinition m_definition; // 0x0		
		modellib::CFootTrajectories m_trajectories; // 0x40		
	};
};
