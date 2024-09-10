#pragma once
#include "client/CCitadelPlayerClipComponent.hpp"
#include "client/C_NPC_Trooper.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1510
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
	// MNetworkVarNames "GameTime_t m_flFadeOutStart"
	// MNetworkVarNames "GameTime_t m_flFadeOutEnd"
	class C_NPC_TrooperBoss : public client::C_NPC_Trooper
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelPlayerClipComponent"
		// MNetworkAlias "CCitadelPlayerClipComponent"
		// MNetworkTypeAlias "CCitadelPlayerClipComponent"
		client::CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x14d8		
	private:
		[[maybe_unused]] uint8_t __pad14f8[0xc]; // 0x14f8
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flFadeOutStart; // 0x1504		
		// MNetworkEnable
		entity2::GameTime_t m_flFadeOutEnd; // 0x1508		
	};
};
