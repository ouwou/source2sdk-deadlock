#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_BaseBulletPreRollProcVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x738
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_CritShotVData : public server::CCitadel_Modifier_BaseBulletPreRollProcVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier; // 0x718		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_CritSound; // 0x728		
	};
};
