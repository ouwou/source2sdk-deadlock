#pragma once
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Neutral_Debuff_PushbackVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Gameplay"
		float m_flPushSpeed; // 0x5f8		
		float m_flPushRange; // 0x5fc		
	};
};
