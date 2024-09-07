#pragma once
#include "server/CBaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CLightComponent;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x770
	// Has VTable
	// 
	// MNetworkVarNames "CLightComponent::Storage_t m_CLightComponent"
	// MEntityAllowsPortraitWorldSpawn
	class CLightEntity : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CLightComponent"
		// MNetworkAlias "CLightComponent"
		// MNetworkTypeAlias "CLightComponent"
		server::CLightComponent* m_CLightComponent; // 0x768		
	};
};
