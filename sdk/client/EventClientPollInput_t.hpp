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
	// Size: 0x30
	// Has Trivial Destructor
	struct EventClientPollInput_t
	{
	public:
		client::EngineLoopState_t m_LoopState; // 0x0		
		float m_flRealTime; // 0x28		
	};
};
