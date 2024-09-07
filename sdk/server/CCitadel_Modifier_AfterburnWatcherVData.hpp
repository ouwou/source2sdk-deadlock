#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_BaseEventProcVData.hpp"
#include "server/CCitadel_Modifier_Base_Buildup.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x658
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_AfterburnWatcherVData : public server::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_AfterburnDotModifier; // 0x628		
		CEmbeddedSubclass<server::CCitadel_Modifier_Base_Buildup> m_BuildUpModifier; // 0x638		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplodeSound; // 0x648		
	};
};
