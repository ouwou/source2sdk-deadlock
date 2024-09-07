#pragma once
#include "server/CSoundOpvarSetPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x6c8
	// Has VTable
	class CSoundOpvarSetAABBEntity : public server::CSoundOpvarSetPointEntity
	{
	public:
		Vector m_vDistanceInnerMins; // 0x660		
		Vector m_vDistanceInnerMaxs; // 0x66c		
		Vector m_vDistanceOuterMins; // 0x678		
		Vector m_vDistanceOuterMaxs; // 0x684		
		int32_t m_nAABBDirection; // 0x690		
		Vector m_vInnerMins; // 0x694		
		Vector m_vInnerMaxs; // 0x6a0		
		Vector m_vOuterMins; // 0x6ac		
		Vector m_vOuterMaxs; // 0x6b8		
		
		// Datamap fields:
		// void CSoundOpvarSetAABBEntitySetOpvarThink; // 0x0
	};
};
