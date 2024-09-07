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
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	struct MaterialParamVector_t : public materialsystem2::MaterialParam_t
	{
	public:
		Vector4D m_value; // 0x8		
	};
};