#pragma once
#include "server/CBaseEntity.hpp"
#include "server/CCitadelHeroComponent.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f8
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
	class C_HeroPreview : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelHeroComponent"
		// MNetworkAlias "CCitadelHeroComponent"
		// MNetworkTypeAlias "CCitadelHeroComponent"
		server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x4d8		
	};
};
