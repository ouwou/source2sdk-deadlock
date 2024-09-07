#pragma once
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	struct MaterialGroup_t
	{
	public:
		CUtlString m_name; // 0x0		
		CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>> m_materials; // 0x8		
	};
};
