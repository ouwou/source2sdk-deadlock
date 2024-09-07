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
	// Size: 0x598
	// Has VTable
	// 
	// MNetworkVarNames "float m_flRadius"
	class CSoundEventSphereEntity : public server::CSoundEventEntity
	{
	public:
		// MNetworkEnable
		float m_flRadius; // 0x590		
		
		// Datamap fields:
		// void CSoundEventSphereEntitySoundEventSphereThink; // 0x0
	};
};
