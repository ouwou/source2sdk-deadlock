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
	// Size: 0x28
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Networking"
	class CAnimGraphNetworkSettings : public animgraphlib::CAnimGraphSettingsGroup
	{
	public:
		// MPropertyFriendlyName "Enable Networking"
		bool m_bNetworkingEnabled; // 0x20		
	};
};
