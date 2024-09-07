#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1558
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Item_DivinersKevlar_VData : public server::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier; // 0x1538		
		CEmbeddedSubclass<server::CCitadelModifier> m_PrecastSpiritBuffModifier; // 0x1548		
	};
};