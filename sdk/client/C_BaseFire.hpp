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
	// Size: 0x568
	// Has VTable
	// 
	// MNetworkVarNames "float32 m_flScale"
	// MNetworkVarNames "float32 m_flStartScale"
	// MNetworkVarNames "float m_flScaleTime"
	// MNetworkVarNames "uint32 m_nFlags"
	class C_BaseFire : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		float m_flScale; // 0x558		
		// MNetworkEnable
		float m_flStartScale; // 0x55c		
		// MNetworkEnable
		float m_flScaleTime; // 0x560		
		// MNetworkEnable
		uint32_t m_nFlags; // 0x564		
	};
};
