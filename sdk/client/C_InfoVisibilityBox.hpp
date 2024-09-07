#pragma once
#include "client/C_BaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x570
	// Has VTable
	// 
	// MNetworkVarNames "int m_nMode"
	// MNetworkVarNames "Vector m_vBoxSize"
	// MNetworkVarNames "bool m_bEnabled"
	class C_InfoVisibilityBox : public client::C_BaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0558[0x4]; // 0x558
	public:
		// MNetworkEnable
		int32_t m_nMode; // 0x55c		
		// MNetworkEnable
		Vector m_vBoxSize; // 0x560		
		// MNetworkEnable
		bool m_bEnabled; // 0x56c		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
