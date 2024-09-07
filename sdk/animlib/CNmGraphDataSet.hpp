#pragma once
#include "resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x48
	// 
	// MGetKV3ClassDefaults
	class CNmGraphDataSet
	{
	public:
		CGlobalSymbol m_variationID; // 0x0		
		CStrongHandle<resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton; // 0x8		
		CUtlVector<CStrongHandleVoid> m_resources; // 0x10		
	};
};
