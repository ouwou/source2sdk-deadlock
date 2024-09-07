#pragma once
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
	// Size: 0x528
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
	class CInfoTrooperNeutralCamp : public server::CPointEntity
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelMinimapComponent"
		// MNetworkAlias "CCitadelMinimapComponent"
		// MNetworkTypeAlias "CCitadelMinimapComponent"
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04f0[0x18]; // 0x4f0
	public:
		CUtlSymbolLarge m_iszCampName; // 0x508		
	};
};
