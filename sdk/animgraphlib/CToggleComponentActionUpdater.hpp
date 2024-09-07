#pragma once
#include "animgraphlib/CAnimActionUpdater.hpp"
#include "modellib/AnimComponentID.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CToggleComponentActionUpdater : public animgraphlib::CAnimActionUpdater
	{
	public:
		modellib::AnimComponentID m_componentID; // 0x18		
		bool m_bSetEnabled; // 0x1c		
	};
};
