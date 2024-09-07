#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_ChainLightningVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x818
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Galvanic_Storm_VData : public server::CCitadel_Modifier_ChainLightningVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_TechShieldModifier; // 0x808		
	};
};
