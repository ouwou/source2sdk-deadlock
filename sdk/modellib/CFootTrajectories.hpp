#pragma once
#include "modellib/CFootTrajectory.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	class CFootTrajectories
	{
	public:
		CUtlVector<modellib::CFootTrajectory> m_trajectories; // 0x0		
	};
};
