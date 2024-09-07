#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_Intrinsic_BaseVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x618
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_NapalmProjectileVData : public server::CCitadel_Modifier_Intrinsic_BaseVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x5f8		
		CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier; // 0x608		
	};
};
