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
	// Size: 0x4e8
	// Has VTable
	// 
	// MNetworkVarNames "float32 m_flScale"
	// MNetworkVarNames "float32 m_flStartScale"
	// MNetworkVarNames "float32 m_flScaleTime"
	// MNetworkVarNames "uint32 m_nFlags"
	class CBaseFire : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		float m_flScale; // 0x4d8		
		// MNetworkEnable
		float m_flStartScale; // 0x4dc		
		// MNetworkEnable
		float m_flScaleTime; // 0x4e0		
		// MNetworkEnable
		uint32_t m_nFlags; // 0x4e4		
	};
};
