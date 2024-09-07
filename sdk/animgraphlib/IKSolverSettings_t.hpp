#pragma once
#include "animgraphlib/IKSolverType.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x8
	// Has Trivial Destructor
	struct IKSolverSettings_t
	{
	public:
		// MPropertyFriendlyName "Solver Type"
		// MPropertyAttrChangeCallback
		animgraphlib::IKSolverType m_SolverType; // 0x0		
		// MPropertyFriendlyName "Num Iterations "
		// MPropertyAttrStateCallback
		int32_t m_nNumIterations; // 0x4		
	};
};
