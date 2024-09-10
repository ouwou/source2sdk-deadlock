#pragma once
#include "server/CCitadelAnimatingModelEntity.hpp"
#include "server/CCitadelModifierAura.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb88
	// Has VTable
	// 
	// MNetworkVarNames "float m_flProgress"
	// MNetworkVarNames "int m_nNumPushers"
	class CCitadelPayload : public server::CCitadelAnimatingModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0b20[0x18]; // 0xb20
	public:
		CModifierHandleTyped<server::CCitadelModifierAura> m_hPusherAura; // 0xb38		
		CModifierHandleTyped<server::CCitadelModifierAura> m_hBlockerAura; // 0xb50		
	private:
		[[maybe_unused]] uint8_t __pad0b68[0x18]; // 0xb68
	public:
		// MNetworkEnable
		float m_flProgress; // 0xb80		
		// MNetworkEnable
		int32_t m_nNumPushers; // 0xb84		
	};
};
