#pragma once
#include "server/CBaseAnimGraph.hpp"
#include "server/CCitadelMinimapComponent.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9d0
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "CUtlString m_sPickupName"
	// MNetworkVarNames "int m_nNameOffset"
	class CCitadel_BreakablePropPickup : public server::CBaseAnimGraph
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelMinimapComponent"
		// MNetworkAlias "CCitadelMinimapComponent"
		// MNetworkTypeAlias "CCitadelMinimapComponent"
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x9a0		
		// MNetworkEnable
		bool m_bActive; // 0x9b8		
	private:
		[[maybe_unused]] uint8_t __pad09b9[0x7]; // 0x9b9
	public:
		// MNetworkEnable
		CUtlString m_sPickupName; // 0x9c0		
		// MNetworkEnable
		int32_t m_nNameOffset; // 0x9c8		
		
		// Datamap fields:
		// Vector spawn_position; // 0x7fffffff
	};
};
