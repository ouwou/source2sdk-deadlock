#pragma once
#include "server/CBaseAnimGraph.hpp"
#include "server/CCitadelRegenComponent.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb20
	// Has VTable
	// 
	// MNetworkIncludeByName "m_iHealth"
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
	class CCitadelAnimatingModelEntity : public server::CBaseAnimGraph
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelRegenComponent"
		// MNetworkAlias "CCitadelRegenComponent"
		// MNetworkTypeAlias "CCitadelRegenComponent"
		server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x9a0		
	};
};
