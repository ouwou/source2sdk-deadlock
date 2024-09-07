#pragma once
#include "animgraphlib/ChainToSolveData_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	struct SolveIKChainPoseOpFixedSettings_t
	{
	public:
		CUtlVector<animgraphlib::ChainToSolveData_t> m_ChainsToSolveData; // 0x0		
		bool m_bMatchTargetOrientation; // 0x18		
	};
};
