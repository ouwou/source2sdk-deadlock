#pragma once
#include "client/C_BaseEntity.hpp"
#include "client/EMiniMapMarkerType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x560
	// Has VTable
	// 
	// MNetworkVarNames "EMiniMapMarkerType_t m_eType"
	class C_MiniMapMarker : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		client::EMiniMapMarkerType_t m_eType; // 0x558		
	};
};
