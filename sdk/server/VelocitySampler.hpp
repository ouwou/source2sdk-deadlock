#pragma once
#include "entity2/GameTime_t.hpp"
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
	class VelocitySampler
	{
	public:
		Vector m_prevSample; // 0x0		
		entity2::GameTime_t m_fPrevSampleTime; // 0xc		
		float m_fIdealSampleRate; // 0x10		
	};
};
