#pragma once
#include "modellib/VPhysXConstraintParams_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 4
	// Size: 0x100
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VPhysXConstraint2_t
	{
	public:
		uint32_t m_nFlags; // 0x0		
		uint16_t m_nParent; // 0x4		
		uint16_t m_nChild; // 0x6		
		modellib::VPhysXConstraintParams_t m_params; // 0x8		
	};
};
