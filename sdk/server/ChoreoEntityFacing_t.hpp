#pragma once
#include "client/SceneEventId_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x14
	// Has Trivial Destructor
	struct ChoreoEntityFacing_t
	{
	public:
		client::SceneEventId_t m_nSceneEventId; // 0x0		
		Vector m_vFacingTarget; // 0x4		
		float m_flImportance; // 0x10		
	};
};
