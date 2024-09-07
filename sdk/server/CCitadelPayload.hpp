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
	// Size: 0xb60
	// Has VTable
	// 
	// MNetworkVarNames "float m_flProgress"
	// MNetworkVarNames "int m_nNumPushers"
	class CCitadelPayload : public server::CCitadelAnimatingModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0af8[0x18]; // 0xaf8
	public:
		CModifierHandleTyped<server::CCitadelModifierAura> m_hPusherAura; // 0xb10		
		CModifierHandleTyped<server::CCitadelModifierAura> m_hBlockerAura; // 0xb28		
	private:
		[[maybe_unused]] uint8_t __pad0b40[0x18]; // 0xb40
	public:
		// MNetworkEnable
		float m_flProgress; // 0xb58		
		// MNetworkEnable
		int32_t m_nNumPushers; // 0xb5c		
	};
};
