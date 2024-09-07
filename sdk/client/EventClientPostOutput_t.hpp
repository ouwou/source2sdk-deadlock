#pragma once
#include "client/EngineLoopState_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x40
	// Has Trivial Destructor
	struct EventClientPostOutput_t
	{
	public:
		client::EngineLoopState_t m_LoopState; // 0x0		
		double m_flRenderTime; // 0x28		
		float m_flRenderFrameTime; // 0x30		
		float m_flRenderFrameTimeUnbounded; // 0x34		
		bool m_bRenderOnly; // 0x38		
	};
};
