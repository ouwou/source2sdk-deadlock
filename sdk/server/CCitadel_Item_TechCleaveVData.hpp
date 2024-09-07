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
	class CCitadel_Item_TechCleaveVData : public server::CitadelItemVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_TechCleaveModifier; // 0x1538		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sCleaveProcSound; // 0x1548		
	};
};
