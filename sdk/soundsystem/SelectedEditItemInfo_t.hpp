#pragma once
#include "soundsystem/SosEditItemInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	struct SelectedEditItemInfo_t
	{
	public:
		CUtlVector<soundsystem::SosEditItemInfo_t> m_EditItems; // 0x0		
	};
};
