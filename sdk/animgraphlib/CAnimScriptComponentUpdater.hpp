#pragma once
#include "animgraphlib/CAnimComponentUpdater.hpp"
#include "modellib/AnimScriptHandle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x38
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimScriptComponentUpdater : public animgraphlib::CAnimComponentUpdater
	{
	public:
		modellib::AnimScriptHandle m_hScript; // 0x30		
	};
};
