#pragma once
#include "client/EMiniMapMarkerType_t.hpp"
#include "server/CCitadelMinimapComponent.hpp"
#include "server/CPointEntity.hpp"
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
	// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
	// MNetworkVarNames "EMiniMapMarkerType_t m_eType"
	class CMiniMapMarker : public server::CPointEntity
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelMinimapComponent"
		// MNetworkAlias "CCitadelMinimapComponent"
		// MNetworkTypeAlias "CCitadelMinimapComponent"
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x4d8		
		// MNetworkEnable
		client::EMiniMapMarkerType_t m_eType; // 0x4f0		
	};
};
