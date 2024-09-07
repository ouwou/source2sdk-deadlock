#pragma once
#include "client/C_BaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CLightComponent;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x838
	// Has VTable
	// 
	// MNetworkVarNames "CLightComponent::Storage_t m_CLightComponent"
	// MEntityAllowsPortraitWorldSpawn
	class C_LightEntity : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CLightComponent"
		// MNetworkAlias "CLightComponent"
		// MNetworkTypeAlias "CLightComponent"
		client::CLightComponent* m_CLightComponent; // 0x830		
	};
};
