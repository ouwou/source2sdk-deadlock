#pragma once
#include "server/CBaseTrigger.hpp"
#include "server/CCitadelMinimapComponent.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x968
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
	// MNetworkVarNames "string_t m_iszSoundName"
	class CTriggerItemShop : public server::CBaseTrigger
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelMinimapComponent"
		// MNetworkAlias "CCitadelMinimapComponent"
		// MNetworkTypeAlias "CCitadelMinimapComponent"
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x938		
		// MNetworkEnable
		CUtlSymbolLarge m_iszSoundName; // 0x950		
		Vector m_vAudioOffset; // 0x958		
	};
};
