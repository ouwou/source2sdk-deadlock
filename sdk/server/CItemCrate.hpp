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
	// Size: 0xd00
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
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xcd0		
	private:
		[[maybe_unused]] uint8_t __pad0ce8[0x14]; // 0xce8
	public:
		// MNetworkEnable
		int32_t m_eLootType; // 0xcfc		
		
		// Datamap fields:
		// CHandle< CBaseEntity > m_hSpawner; // 0xce8
		// int32_t m_eObjectivePosition; // 0xcf4
		// void InputAttachedToParachute; // 0x0
		// void InputDetachedFromParachute; // 0x0
	};
};
