#pragma once
#include "server/AutoRoomDoorwayPairs_t.hpp"
#include "server/CSoundOpvarSetPointEntity.hpp"
#include "server/SoundOpvarTraceResult_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x6a0
	// Has VTable
	class CSoundOpvarSetAutoRoomEntity : public server::CSoundOpvarSetPointEntity
	{
	public:
		CUtlVector<server::SoundOpvarTraceResult_t> m_traceResults; // 0x660		
		CUtlVector<server::AutoRoomDoorwayPairs_t> m_doorwayPairs; // 0x678		
		float m_flSize; // 0x690		
		float m_flHeightTolerance; // 0x694		
		float m_flSizeSqr; // 0x698		
		
		// Datamap fields:
		// void CSoundOpvarSetAutoRoomEntitySetOpvarThink; // 0x0
	};
};
