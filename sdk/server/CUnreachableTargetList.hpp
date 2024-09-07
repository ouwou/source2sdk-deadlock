#pragma once
#include "server/UnreachableTarget_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x20
	class CUnreachableTargetList
	{
	public:
		CUtlVector<server::UnreachableTarget_t> m_vecTargets; // 0x0		
		
		// Datamap fields:
		// void m_pOuter; // 0x18
	};
};
