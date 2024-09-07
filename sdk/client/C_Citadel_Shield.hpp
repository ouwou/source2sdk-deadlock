#pragma once
#include "client/CCitadelModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x840
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bAllowRotatingUp"
	// MNetworkVarNames "bool m_bFixedPosition"
	// MNetworkVarNames "float m_flShieldOffset"
	class C_Citadel_Shield : public client::CCitadelModelEntity
	{
	public:
		// MNetworkEnable
		bool m_bAllowRotatingUp; // 0x838		
		// MNetworkEnable
		bool m_bFixedPosition; // 0x839		
	private:
		[[maybe_unused]] uint8_t __pad083a[0x2]; // 0x83a
	public:
		// MNetworkEnable
		float m_flShieldOffset; // 0x83c		
	};
};
