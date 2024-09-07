#pragma once
#include "animgraphlib/CAnimInputDamping.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x20
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CDampedValueUpdateItem
	{
	public:
		animgraphlib::CAnimInputDamping m_damping; // 0x0		
		animgraphlib::CAnimParamHandle m_hParamIn; // 0x18		
		animgraphlib::CAnimParamHandle m_hParamOut; // 0x1a		
	};
};
