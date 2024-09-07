#pragma once
#include "animgraphlib/CVectorQuantizer.hpp"
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
	class CProductQuantizer
	{
	public:
		CUtlVector<animgraphlib::CVectorQuantizer> m_subQuantizers; // 0x0		
		int32_t m_nDimensions; // 0x18		
	};
};
