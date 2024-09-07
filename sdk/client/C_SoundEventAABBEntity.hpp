#pragma once
#include "client/C_SoundEventEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x630
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vMins"
	// MNetworkVarNames "Vector m_vMaxs"
	class C_SoundEventAABBEntity : public client::C_SoundEventEntity
	{
	public:
		// MNetworkEnable
		Vector m_vMins; // 0x618		
		// MNetworkEnable
		Vector m_vMaxs; // 0x624		
	};
};
