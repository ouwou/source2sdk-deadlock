#pragma once
#include "server/CLogicNPCCounter.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x848
	// Has VTable
	class CLogicNPCCounterAABB : public server::CLogicNPCCounter
	{
	public:
		Vector m_vDistanceOuterMins; // 0x818		
		Vector m_vDistanceOuterMaxs; // 0x824		
		Vector m_vOuterMins; // 0x830		
		Vector m_vOuterMaxs; // 0x83c		
	};
};
