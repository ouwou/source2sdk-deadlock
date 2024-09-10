#pragma once
#include "server/CCitadelMinimapComponent.hpp"
#include "server/CPhysicsProp.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd28
	// Has VTable
	// 
	// MNetworkIncludeByName "m_iHealth"
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
	// MNetworkVarNames "int m_eLootType"
	class CItemCrate : public server::CPhysicsProp
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelMinimapComponent"
		// MNetworkAlias "CCitadelMinimapComponent"
		// MNetworkTypeAlias "CCitadelMinimapComponent"
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xcf8		
	private:
		[[maybe_unused]] uint8_t __pad0d10[0x14]; // 0xd10
	public:
		// MNetworkEnable
		int32_t m_eLootType; // 0xd24		
		
		// Datamap fields:
		// CHandle< CBaseEntity > m_hSpawner; // 0xd10
		// int32_t m_eObjectivePosition; // 0xd1c
		// void InputAttachedToParachute; // 0x0
		// void InputDetachedFromParachute; // 0x0
	};
};
