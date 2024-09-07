#pragma once
#include "client/CCitadelHeroComponent.hpp"
#include "client/C_BaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x578
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
	class C_HeroPreview : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelHeroComponent"
		// MNetworkAlias "CCitadelHeroComponent"
		// MNetworkTypeAlias "CCitadelHeroComponent"
		client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x558		
	};
};
