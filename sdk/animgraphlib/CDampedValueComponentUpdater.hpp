#pragma once
#include "animgraphlib/CAnimComponentUpdater.hpp"
#include "animgraphlib/CDampedValueUpdateItem.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x48
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CDampedValueComponentUpdater : public animgraphlib::CAnimComponentUpdater
	{
	public:
		CUtlVector<animgraphlib::CDampedValueUpdateItem> m_items; // 0x30		
	};
};
