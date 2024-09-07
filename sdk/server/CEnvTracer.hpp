#pragma once
#include "server/CPointEntity.hpp"
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
	class CEnvTracer : public server::CPointEntity
	{
	public:
		Vector m_vecEnd; // 0x4d8		
		float m_flDelay; // 0x4e4		
		
		// Datamap fields:
		// void CEnvTracerTracerThink; // 0x0
	};
};
