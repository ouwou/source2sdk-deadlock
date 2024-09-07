#pragma once
#include "materialsystem2/MaterialParam_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	struct MaterialParamBuffer_t : public materialsystem2::MaterialParam_t
	{
	public:
		CUtlBinaryBlock m_value; // 0x8		
	};
};
