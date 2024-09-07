#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f0
	// Has VTable
	// 
	// MNetworkVarNames "int m_nMode"
	// MNetworkVarNames "Vector m_vBoxSize"
	// MNetworkVarNames "bool m_bEnabled"
	class CInfoVisibilityBox : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x4]; // 0x4d8
	public:
		// MNetworkEnable
		int32_t m_nMode; // 0x4dc		
		// MNetworkEnable
		Vector m_vBoxSize; // 0x4e0		
		// MNetworkEnable
		bool m_bEnabled; // 0x4ec		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
