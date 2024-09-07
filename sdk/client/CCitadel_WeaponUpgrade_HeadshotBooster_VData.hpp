#pragma once
#include "client/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1558
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_WeaponUpgrade_HeadshotBooster_VData : public client::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_HeadShotVictimSound; // 0x1538		
		CSoundEventName m_HeadShotConfirmationSound; // 0x1548		
	};
};
