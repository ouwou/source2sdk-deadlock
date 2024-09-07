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
	struct EventClientProcessInput_t
	{
	public:
		client::EngineLoopState_t m_LoopState; // 0x0		
		float m_flRealTime; // 0x28		
		float m_flTickInterval; // 0x2c		
		double m_flTickStartTime; // 0x30		
	};
};
