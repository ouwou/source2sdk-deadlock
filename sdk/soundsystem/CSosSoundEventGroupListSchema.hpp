#pragma once
#include "soundsystem/CSosSoundEventGroupSchema.hpp"
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
	class CSosSoundEventGroupListSchema
	{
	public:
		// MPropertyAutoExpandSelf
		// MPropertyFriendlyName "Groups"
		CUtlVector<soundsystem::CSosSoundEventGroupSchema> m_groupList; // 0x0		
	};
};
