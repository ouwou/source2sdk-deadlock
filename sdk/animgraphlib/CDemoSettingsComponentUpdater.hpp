#pragma once
#include "animgraphlib/CAnimComponentUpdater.hpp"
#include "animgraphlib/CAnimDemoCaptureSettings.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xb0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CDemoSettingsComponentUpdater : public animgraphlib::CAnimComponentUpdater
	{
	public:
		animgraphlib::CAnimDemoCaptureSettings m_settings; // 0x30		
	};
};
