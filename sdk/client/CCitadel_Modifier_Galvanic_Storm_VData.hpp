#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Modifier_ChainLightningVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x818
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Galvanic_Storm_VData : public client::CCitadel_Modifier_ChainLightningVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_TechShieldModifier; // 0x808		
	};
};
