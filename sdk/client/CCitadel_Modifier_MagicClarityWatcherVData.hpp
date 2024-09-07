#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Modifier_Intrinsic_BaseVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x608
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_MagicClarityWatcherVData : public client::CCitadel_Modifier_Intrinsic_BaseVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier; // 0x5f8		
	};
};
