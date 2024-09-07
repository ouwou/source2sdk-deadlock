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
	// Size: 0x38
	// Has Trivial Destructor
	struct EventClientFrameSimulate_t
	{
	public:
		client::EngineLoopState_t m_LoopState; // 0x0		
		float m_flRealTime; // 0x28		
		float m_flFrameTime; // 0x2c		
		bool m_bScheduleSendTickPacket; // 0x30		
	};
};
