#pragma once
#include "server/CCitadel_Item.hpp"
#include "server/CitadelAbilityProjectileCreateInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb80
	// Has VTable
	class CCitadel_Item_BaseProjectileAOEModifier : public server::CCitadel_Item
	{
	public:
		server::CitadelAbilityProjectileCreateInfo_t m_projInfo; // 0xaf8		
	};
};
