#pragma once
#include "server/CSoundAreaEntityBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x510
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vMin"
	// MNetworkVarNames "Vector m_vMax"
	class CSoundAreaEntityOrientedBox : public server::CSoundAreaEntityBase
	{
	public:
		// MNetworkEnable
		Vector m_vMin; // 0x4f8		
		// MNetworkEnable
		Vector m_vMax; // 0x504		
	};
};
