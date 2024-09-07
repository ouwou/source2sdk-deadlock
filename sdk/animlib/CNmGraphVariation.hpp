#pragma once
#include "animlib/CNmGraphDataSet.hpp"
#include "resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x50
	// 
	// MGetKV3ClassDefaults
	class CNmGraphVariation
	{
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_graphDefinition; // 0x0		
		animlib::CNmGraphDataSet m_dataSet; // 0x8		
	};
};
