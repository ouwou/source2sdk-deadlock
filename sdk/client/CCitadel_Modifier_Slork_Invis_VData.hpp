#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Modifier_InvisVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x8d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Slork_Invis_VData : public client::CCitadel_Modifier_InvisVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_AmbushModifier; // 0x8b0		
		CEmbeddedSubclass<client::CCitadelModifier> m_VisibleModifier; // 0x8c0		
	};
};
