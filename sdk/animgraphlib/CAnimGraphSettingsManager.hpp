#pragma once
#include "animgraphlib/CAnimGraphSettingsGroup.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimGraphSettingsManager
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
	public:
		CUtlVector<CSmartPtr<animgraphlib::CAnimGraphSettingsGroup>> m_settingsGroups; // 0x18		
	};
};
