#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_InvisVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x8d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Slork_Invis_VData : public server::CCitadel_Modifier_InvisVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_AmbushModifier; // 0x8b0		
		CEmbeddedSubclass<server::CCitadelModifier> m_VisibleModifier; // 0x8c0		
	};
};
