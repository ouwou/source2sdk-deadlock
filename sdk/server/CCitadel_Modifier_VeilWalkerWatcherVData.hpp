#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x630
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_VeilWalkerWatcherVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_InvisModifier; // 0x5f8		
		CEmbeddedSubclass<server::CCitadelModifier> m_VeilWalkerTriggeredModifier; // 0x608		
		CEmbeddedSubclass<server::CCitadelModifier> m_VeilWalkerMovespeed; // 0x618		
		// MPropertyStartGroup "Gameplay"
		float m_flTraceLengthMin; // 0x628		
	};
};
