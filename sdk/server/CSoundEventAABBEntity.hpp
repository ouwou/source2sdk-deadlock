#pragma once
#include "server/CSoundEventEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x5a8
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vMins"
	// MNetworkVarNames "Vector m_vMaxs"
	class CSoundEventAABBEntity : public server::CSoundEventEntity
	{
	public:
		// MNetworkEnable
		Vector m_vMins; // 0x590		
		// MNetworkEnable
		Vector m_vMaxs; // 0x59c		
	};
};
