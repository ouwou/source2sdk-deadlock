#pragma once
#include "physicslib/RnPlane_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	class CRegionSVM
	{
	public:
		CUtlVector<physicslib::RnPlane_t> m_Planes; // 0x0		
		CUtlVector<uint32_t> m_Nodes; // 0x18		
	};
};
