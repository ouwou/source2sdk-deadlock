#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBeam;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x608
	// Has VTable
	class CTestEffect : public server::CBaseEntity
	{
	public:
		int32_t m_iLoop; // 0x4d8		
		int32_t m_iBeam; // 0x4dc		
		server::CBeam* m_pBeam[24]; // 0x4e0		
		entity2::GameTime_t m_flBeamTime[24]; // 0x5a0		
		entity2::GameTime_t m_flStartTime; // 0x600		
	};
};
